//
// Created by mitza on 23-Mar-21.
//

#include "ServiceAdmin.h"
#include <iostream>

using namespace std;



void ServiceAdmin::addTutorial(const std::string &title, const std::string &presenter, int minutes, int seconds,
                               int likes, const std::string &link) {
    if(validTutorial(title, presenter, minutes, seconds, likes, link)){
        Tutorial t = Tutorial(title, presenter, minutes, seconds, likes, link);
        this->repo.addTutorial(t);
    }
    else{
        throw ServiceException("Invalid parameters for Tutorial\n");
    }
}

void ServiceAdmin::deleteTutorial(const std::string title) {
    if(validTitle(title))
        this->repo.deleteTutorial(title);
    else
        throw ServiceException("Invalid title");
}

void ServiceAdmin::updateTutorialTitle(std::string title, std::string newTitle) {
    if(validTitle(title) && validTitle(newTitle))
        this->repo.updateTutorialTitle(title, newTitle);
    else
        throw ServiceException("Invalid title");
}

void ServiceAdmin::updateTutorialPresenter(std::string title, std::string newPresenter) {
    if(validTitle(title) && validPresenter(newPresenter))
        this->repo.updateTutorialPresenter(title, newPresenter);
    else
        throw ServiceException("Invalid credentials");
}

void ServiceAdmin::updateTutorialMinutes(std::string title, int newValue) {
    if(validTitle(title) && validTime(newValue))
        this->repo.updateTutorialMinutes(title, newValue);
    else
        throw ServiceException("Invalid credentials");
}

void ServiceAdmin::updateTutorialSeconds(std::string title, int newValue) {
    if(validTitle(title) && validSeconds(newValue))
        this->repo.updateTutorialSeconds(title, newValue);
    else
        throw ServiceException("Invalid credentials");
}

void ServiceAdmin::updateTutorialLikes(std::string title, int newValue) {
    if(validTitle(title) && validLikes(newValue))
        this->repo.updateTutorialLikes(title, newValue);
    else
        throw ServiceException("Invalid credentials");
}

void ServiceAdmin::updateTutorialLink(std::string title, std::string newLink) {
    if (validTitle(title) && validLink(newLink))
        this->repo.updateTutorialLink(title, newLink);
    else
        throw ServiceException("Invalid credentials");
}

std::string ServiceAdmin::toString() {
    return this->repo.toString();
}

ServiceAdmin::ServiceAdmin(FileRepository &repo) : repo(repo) {}

FileRepository & ServiceAdmin::getRepo() {
    return repo;
}

void ServiceAdmin::saveToText(const string &fileName) {
    repo.saveToText(fileName);
}

void ServiceAdmin::loadFromText(const string &fileName) {
    repo.loadFromText(fileName);
}

void ServiceAdmin::saveToHTML(const string &fileName) {
    repo.saveToHTML(fileName); string command = "chrome.exe " + fileName;
    system(command.c_str());
}

void ServiceAdmin::saveToCSV(const string &fileName) {
    repo.saveToCSV(fileName);
    string command = "code " + fileName;
    system(command.c_str());
}

//bool ServiceAdmin::existsTutorial(const string &title) {
//    return this->repo.existsTutorial(title);
//}
//
//Tutorial &ServiceAdmin::findTutorial(const string &title) {
//    return this->repo.findTutorial(title);
//}

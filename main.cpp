//
// Created by mitza on 04-Apr-21.
//

#include <Repository.h>
#include <ServiceAdmin.h>
#include <ServiceUser.h>
#include <UI.h>
#include <testAll.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <FileRepository.h>
#include <testFile.h>

using namespace std;

bool cmpt(Tutorial t){
    return t.getPresenter().find("B") != string::npos;
}

int main(){

//    testAll();
    FileRepository dataBase;
    ServiceAdmin serviceAdmin = ServiceAdmin(dataBase);
    ServiceUser serviceUser = ServiceUser(dataBase);
    UI u(serviceAdmin, serviceUser);
    u.start();
    return 0;
}

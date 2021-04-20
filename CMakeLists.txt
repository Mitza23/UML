cmake_minimum_required(VERSION 3.17)
project(a67_Mitza23)

set(CMAKE_CXX_STANDARD 14)

include_directories(Domain)
include_directories(Exceptions)
include_directories(Repository)
include_directories(Service)
include_directories(Tests)
include_directories(UI)
include_directories(Validator)

add_executable(a67_Mitza23
        Domain/DynamicArray.h
        Domain/Tutorial.cpp
        Domain/Tutorial.h
        Exceptions/Exception.h
        Exceptions/RepositoryException.h
        Exceptions/ServiceException.h
        Repository/Repository.cpp
        Repository/Repository.h
        Service/ServiceAdmin.cpp
        Service/ServiceAdmin.h
        Service/ServiceUser.cpp
        Service/ServiceUser.h
        Tests/testAll.cpp
        Tests/testRepo.cpp
        Tests/testRepo.h
        Tests/testServiceAdmin.cpp
        Tests/testServiceAdmin.h
        Tests/testServiceUser.cpp
        Tests/testServiceUser.h
        Tests/testTutorial.cpp
        Tests/testTutorial.h
        UI/UI.cpp
        UI/UI.h
        Validator/Validator.cpp
        Validator/Validator.h main.cpp Tests/testAll.h Repository/FileRepository.cpp Repository/FileRepository.h Exceptions/ValidatorException.h Tests/testFile.cpp Tests/testFile.h)

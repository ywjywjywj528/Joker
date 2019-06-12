CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(Test_Engine) #项目名称
ADD_SUBDIRECTORY( Joke_Engine )
AUX_SOURCE_DIRECTORY(./TestEngine SRC_LIST)
#生成应用程序 hello (在windows下会自动生成hello.exe)
ADD_EXECUTABLE(Test_Engine ${SRC_LIST})
TARGET_LINK_LIBRARIES( Test_Engine Joker_Engine )
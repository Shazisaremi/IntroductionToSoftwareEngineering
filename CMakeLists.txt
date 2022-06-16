cmake_minimum_required(VERSION 3.21)
project(IntroductionToSoftwareEngineering)

set(CMAKE_CXX_STANDARD 14)

add_executable(module_1 "D:/Users/rezaz/CLionProjects/IntroductionToSoftwareEngineering/Module 1/Samples/1.Hello_World_V1/main.cpp" "Module 1/Samples/2.Hello_World_V2/main.cpp" "Module 1/Samples/3.Calculator_V1/main.cpp" "Module 1/Samples/4.Game_Stats_V1/main.cpp" "Module 1/Samples/5.Game_Stats_V2/main.cpp" "Module 1/Samples/6.Game_Stats_V3/main.cpp")
add_executable(module_2 "D:/Users/rezaz/ClionProjects/IntroductionToSoftwareEngineering/Module 2/Samples/1.Score_Rater_V1/main.cpp" "Module 2/Samples/2.Score_Rater_V2/main.cpp")

add_executable(Play_Again_V1 "Module 3/Samples/1.Play_Again_V1/main.cpp")
add_executable(Play_Again_V2 "Module 3/Samples/2.Play_Again_V2/main.cpp")
add_executable(Finicky_Counter_V1 "Module 3/Samples/3.Finicky_Counter_V1/main.cpp")
add_executable(Designers_Network_Program "Module 3/Samples/4.Designers_Network_Program/main.cpp" "Module 3/Samples/5.Sum_of_Positive_Numbers/main.cpp")

cmake_minimum_required(VERSION 3.16)
PROJECT(QGP_home_task CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_to_cm src/lab_to_cm.cxx)
set_target_properties(lab_to_cm PROPERTIES LINKER_LANGUAGE CXX)

add_executable(cm_to_lab src/cm_to_lab.cxx)
set_target_properties(cm_to_lab PROPERTIES LINKER_LANGUAGE CXX)

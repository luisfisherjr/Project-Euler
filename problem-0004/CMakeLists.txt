include_directories(include) 

file(GLOB SOURCES "src/*.cpp")

add_executable(answer4 ${SOURCES})

file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

#include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty")

add_executable(${postfixtest} ${srcs} ${hdrs}) #Создаем проект с именем из переменной ${vectortest}, в него добавляются файлы из переменных ${srcs} и ${hdrs}
target_link_libraries(${postfixtest} ${postfixlib} gtest) #Подключаем к проекту с именем ${vector} библиотеки с именами ${vectorlib} и gtest

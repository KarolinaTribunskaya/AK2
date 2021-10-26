cmake_minimum_required(VERSION 2.8)

project(sum)			# Название проекта

add_library(
	add 
	STATIC 
	add.cpp
)	# Создание статической библиотеки с именем add

add_executable(
	main 
	main.cpp
)	# Создает исполняемый файл с именем main

target_link_libraries(main add)		# Линковка программы с библиотекой

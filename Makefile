NAME		=	Shell.o

MODULE		=	-lsfml-window\
				-lsfml-graphics\
				-lsfml-system\

FILE		=	main.cpp\
				\
				src/Window/Constructor.cpp\
				src/Window/Accessor.cpp\
				src/Window/Control.cpp\
				src/Window/Function.cpp\

cpp:
	@(g++ -o $(NAME) $(FILE) $(MODULE))

run:
	@(./$(NAME))
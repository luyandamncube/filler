NAME 		= 	lmncube.filler
FILENAMES 	= 	filler.c \
				print_object.c \
				print_point.c \
				get_data.c \
				initialize.c \
				overlap.c \
				place_piece.c \
				make_move.c \
				score_gen.c \

HDIR 		= 	./includes/
SDIR 		= 	./src/
LDIR 		=	./libft/
VMDIR 		= 	./resources/
PDIR 		= 	$(VMDIR)players/
MDIR 		= 	$(VMDIR)maps/
SRC      	= 	$(addprefix $(SDIR), $(FILENAMES))

CHAMPELY 	=   $(PDIR)champely.filler
ABANLIN 	=   $(PDIR)abanlin.filler
GRATI	 	=   $(PDIR)grati.filler
HCAO	 	=   $(PDIR)hcao.filler
CARLI	 	=   $(PDIR)carli.filler
SUPERJEANNOT =   $(PDIR)superjeannot.filler

.PHONY: all clean fclean re

HFLAGS 		= 	-I $(HDIR)
LFLAGS 		= 	-L $(LDIR) -lft
CFLAGS 		= 	-Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(SRC)
	make re -C $(LDIR)
	gcc $(CFLAGS) -o $@ $? $(HFLAGS) $(LFLAGS)
	@echo "\033[1;32;40mDone making lmncube.filler! \033[0m"

clean:
	@echo removing filler...
	@rm -f $(NAME)
	@rm -f filler.trace
	@echo Done!

fclean: clean
	@echo removing library...
	@make fclean -C $(LDIR)
	@echo Done!

re: fclean all

# v0 PLAY CHAMPELY
v00:
	$(VMDIR)./filler_vm -f $(MDIR)map00 -p1 ./$(NAME) -p2 $(CHAMPELY)	
v01:
	$(VMDIR)./filler_vm -f $(MDIR)map01 -p1 ./$(NAME) -p2 $(CHAMPELY)	
v02:
	$(VMDIR)./filler_vm -f $(MDIR)map02 -p1 ./$(NAME) -p2 $(CHAMPELY)	

# v1 PLAY HCAO
v10:
	$(VMDIR)./filler_vm -f $(MDIR)map00 -p1 ./$(NAME) -p2 $(HCAO)	
v11:
	$(VMDIR)./filler_vm -f $(MDIR)map01 -p1 ./$(NAME) -p2 $(HCAO)	
v12:
	$(VMDIR)./filler_vm -f $(MDIR)map02 -p1 ./$(NAME) -p2 $(HCAO)	

# v2 PLAY GRATI
v20:
	$(VMDIR)./filler_vm -f $(MDIR)map00 -p1 ./$(NAME) -p2 $(GRATI)	
v21:
	$(VMDIR)./filler_vm -f $(MDIR)map01 -p1 ./$(NAME) -p2 $(GRATI)	
v22:
	$(VMDIR)./filler_vm -f $(MDIR)map02 -p1 ./$(NAME) -p2 $(GRATI)	

# v3 PLAY ABANLIN
v30:
	$(VMDIR)./filler_vm -f $(MDIR)map00 -p1 ./$(NAME) -p2 $(ABANLIN)	
v31:
	$(VMDIR)./filler_vm -f $(MDIR)map01 -p1 ./$(NAME) -p2 $(ABANLIN)	
v32:
	$(VMDIR)./filler_vm -f $(MDIR)map02 -p1 ./$(NAME) -p2 $(ABANLIN)	

# v4 PLAY CARLI
v40:
	$(VMDIR)./filler_vm -f $(MDIR)map00 -p1 ./$(NAME) -p2 $(CARLI)	
v41:
	$(VMDIR)./filler_vm -f $(MDIR)map01 -p1 ./$(NAME) -p2 $(CARLI)	
v42:
	$(VMDIR)./filler_vm -f $(MDIR)map02 -p1 ./$(NAME) -p2 $(CARLI)	

# v5 PLAY SUPERJEANNOT
v50:
	$(VMDIR)./filler_vm -f $(MDIR)map00 -p1 ./$(NAME) -p2 $(SUPERJEANNOT)	
v51:
	$(VMDIR)./filler_vm -f $(MDIR)map01 -p1 ./$(NAME) -p2 $(SUPERJEANNOT)	
v52:
	$(VMDIR)./filler_vm -f $(MDIR)map02 -p1 ./$(NAME) -p2 $(SUPERJEANNOT)	
play:
	@echo "LEVEL\tNUMBER\tPLAYER"
	@echo "\033[1;32;40m[EASY]\t\033[0m 0\t" $(CHAMPELY)
	@echo "\033[1;32;40m[EASY]\t\033[0m 1\t" $(HCAO)
	@echo "\033[1;32;40m[EASY]\t\033[0m 2\t" $(GRATI)
	@echo "\033[1;34;40m[MED]\t\033[0m 3\t"	$(ABANLIN)
	@echo "\033[1;34;40m[MED]\t\033[0m 4\t" $(CARLI)
	@echo "\033[1;31;40m[HARD]\t\033[0m 5\t" $(SUPERJEANNOT)
	@echo "\nUSAGE: \033[1;36;40mmake v00\033[0m will play champely.filler on map00"
	@echo "USAGE: \033[1;36;40mmake v32\033[0m will play abanlin.filler on map02"
norm: 
	@echo Norming includes folder...
	norminette $(HDIR)
	@echo Norming sources...
	norminette $(SDIR)

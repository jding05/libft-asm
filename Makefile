LIBFT := libftasm.a

LFLAGS := -L. -lfts

NASM := ~/.brew/Cellar/nasm/2.13.03/bin/nasm

NASMFLAGS := -f macho64

ASMFILES := ft_isprint.s ft_isascii.s ft_isdigit.s ft_isalpha.s ft_tolower.s \
			ft_isalnum.s ft_bzero.s ft_strlen.s ft_puts.s ft_memset.s ft_memcpy.s \
			ft_strcpy.s ft_strcat.s ft_strnew.s ft_strdup.s ft_cat.s ft_toupper.s \
			ft_putchar.s ft_putstr.s ft_putchar_fd.s ft_putstr_fd.s

ASMSRC := $(addprefix src/, $(ASMFILES))

NASMOBJ := $(ASMFILES:%.s=obj/%.o)

all: $(LIBFT)

$(LIBFT) : $(NASMOBJ)
	ar rcs $@ $^

obj/%.o: src/%.s
	@mkdir -p obj/
	$(NASM) $(NASMFLAGS) $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -rf $(LIBFT)

re: fclean all

test:
	gcc -Wextra -Werror -Wall main.c -L. -lftasm && ./a.out

cat:
	gcc -Wextra -Werror -Wall ft_cat_main.c -L. -lftasm && ./a.out

.PHONY: all clean fclean re test cat

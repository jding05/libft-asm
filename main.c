#include <stdio.h>
#include "includes/libfts.h"
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

int main(void)
{
	printf("\n%s[========== part one ============]%s\n", YELLOW, RESET);
	char test[6] = "abcde";
	char test00[6] = "abcde";
	char *s00, *s01;
	printf("\n________ ft_bzero ___________\n");
	ft_bzero(test,0);
	bzero(test00, 0);
	printf("ft_bzero -> %s\n", s00 = test);
	printf("   bzero -> %s\n", s01 = test00);
	ft_bzero(test, 6);
	bzero(test00, 6);
	char c00, c01;
	printf("ft_bzero -> %c\n", c00 = test[3]);
	printf("   bzero -> %c\n", c01 = test00[3]);
	(strcmp(test, test00) || c00 != c01) ? printf("%sft_bzero failed%s\n", RED, RESET) :
			printf("%sft_bzero passed%s\n", GREEN, RESET);

	char tests1[20] = "12345";
	char tests2[6] = "abcde";
	char tests3[20] = "12345";
	char *s3, *s4;
	printf("\n________ ft_strcat ___________\n");
	printf("ft_strcat -> %s\n", s3 = ft_strcat(tests1, tests2));
	printf("   strcat -> %s\n", s4 = strcat(tests3, tests2));
	strcmp(s3, s4) ? printf("%sft_strcat failed%s\n", RED, RESET) :
					 printf("%sft_strcat passed%s\n", GREEN, RESET);

	printf("\n________ ft_isalpha ___________\n");
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
	printf("ft_isalpha output\n");
	printf("0  -> %d\n", d1 = ft_isalpha(0));
	printf("91 -> %d\n", d2 = ft_isalpha(91));
	printf("65 -> %d\n", d3 = ft_isalpha(65));
	printf("66 -> %d\n", d4 = ft_isalpha(66));
	printf("97 -> %d\n", d5 = ft_isalpha(97));

	printf("isalpha output\n");
	printf("0  -> %d\n", d6 = isalpha(0));
	printf("91 -> %d\n", d7 = isalpha(91));
	printf("65 -> %d\n", d8 = isalpha(65));
	printf("66 -> %d\n", d9 = isalpha(66));
	printf("97 -> %d\n", d10 = isalpha(97));

	if (d1 != d6 || d2 != d7 || d3 != d8 || d4 != d9 || d5 != d10)
		printf("%sft_isalpha failed%s\n", RED, RESET);
	else
		printf("%sft_isalpha passed%s\n", GREEN, RESET);

	printf("\n________ ft_isdigit ___________\n");
	printf("ft_isdigit output\n");
	printf("65 -> %d\n", d1 = ft_isdigit(65));
	printf("48 -> %d\n", d2 = ft_isdigit(48));
	printf("isdigit output\n");
	printf("65 -> %d\n", d3 = isdigit(65));
	printf("48 -> %d\n", d4 = isdigit(48));
	(d1 != d3 || d2 != d4) ? printf("%sft_isdigit failed%s\n", RED, RESET) :
							 printf("%sft_isdigit passed%s\n", GREEN, RESET);

	printf("\n________  ft_isalnum  ___________\n");
	printf("ft_isalnum output\n");
	printf("91 -> %d\n", d1 = ft_isalnum(91));
	printf("48 -> %d\n", d2 = ft_isalnum(48));
	printf("65 -> %d\n", d3 = ft_isalnum(65));
	printf("97 -> %d\n", d4 = ft_isalnum(97));
	printf("   isalnum output\n");
	printf("91 -> %d\n", d5 = isalnum(91));
	printf("48 -> %d\n", d6 = isalnum(48));
	printf("65 -> %d\n", d7 = isalnum(65));
	printf("97 -> %d\n", d8 = isalnum(97));
	if (d1 != d5 || d2 != d6 || d3 != d7 || d4 != d8)
		printf("%sft_isalnum failed%s\n", RED, RESET);
	else
		printf("%sft_isalnum passed%s\n", GREEN, RESET);

	printf("\n________ ft_isascii ___________\n");
	printf("ft_isascii output\n");
	printf("-1 -> %d\n", d1 = ft_isascii(-1));
	printf("65 -> %d\n", d2 = ft_isascii(65));
	printf("   isascii output\n");
	printf("-1 -> %d\n", d3 = isascii(-1));
	printf("65 -> %d\n", d4 = isascii(65));
	(d1 != d3 || d2 != d4) ? printf("%sft_isascii failed%s\n", RED, RESET) :
							 printf("%sft_isascii passed%s\n", GREEN, RESET);

	printf("\n________ ft_isprint ___________\n");
	printf("ft_isprint output\n");
	printf("0  -> %d\n", d1 = ft_isprint(0));
	printf("65 -> %d\n", d2 = ft_isprint(65));
	printf("   isprint output\n");
	printf("0  -> %d\n", d3 = isprint(0));
	printf("65 -> %d\n", d4 = isprint(65));
	(d1 != d3 || d2 != d4) ? printf("%sft_isprint failed%s\n", RED, RESET) :
							 printf("%sft_isprint passed%s\n", GREEN, RESET);

	printf("\n________ ft_tolower ___________\n");
	char c1, c2, c3, c4, c5, c6;
	printf("ft_tolower output\n");
	printf("\'a\'-> %c\n", c1 = ft_tolower('a'));
	printf("\'A\'-> %c\n", c2 = ft_tolower('A'));
	printf("\'*\' -> %c\n", c3 = ft_tolower('*'));
	printf("   tolower output\n");
	printf("\'a\'-> %c\n", c4 = tolower('a'));
	printf("\'A\'-> %c\n", c5 = tolower('A'));
	printf("\'*\' -> %c\n", c6 = tolower('*'));
	(c1 != c4 || c2 != c5 || c3 != c6) ? printf("%sft_tolower failed%s\n", RED, RESET) :
							 printf("%sft_tolower passed%s\n", GREEN, RESET);

	printf("\n________ ft_toupper ___________\n");
 	printf("ft_toupper output\n");
 	printf("\'a\'-> %c\n", c1 = ft_toupper('a'));
 	printf("\'A\'-> %c\n", c2 = ft_toupper('A'));
	printf("\'*\' -> %c\n", c3 = ft_toupper('*'));
 	printf("   tolower output\n");
 	printf("\'a\'-> %c\n", c4 = toupper('a'));
 	printf("\'A\'-> %c\n", c5 = toupper('A'));
	printf("\'*\' -> %c\n", c6 = toupper('*'));
 	(c1 != c4 || c2 != c5 || c3 != c6) ? printf("%sft_toupper failed%s\n", RED, RESET) :
 							 printf("%sft_toupper passed%s\n", GREEN, RESET);

	printf("\n%s[========== part two ============]%s\n", YELLOW, RESET);
	printf("\n________ ft_strlen ___________\n");
	char *test0 = "strlen";
	unsigned int u1, u2;
	printf("ft_strlen -> %u\n", u1 = ft_strlen(test0));
	printf("   strlen -> %u\n", u2 = strlen(test0));
	u1 != u2 ?  printf("%sft_strlen failed%s\n", RED, RESET) :
 				printf("%sft_strlen passed%s\n", GREEN, RESET);

	char test1[6] = "test1";
	char test2[6] = "test1";
	char *s1, *s2;
	printf("\n________ ft_memset ____________\n");
	printf("ft_memeset-> %s\n", s1 = ft_memset(test1, 65, 3));
	printf("   memeset-> %s\n", s2 = memset(test2, 65, 3));
	strcmp(s1, s2) ? printf("%sft_memeset failed%s\n", RED, RESET) :
 					 printf("%sft_memeset passed%s\n", GREEN, RESET);

	char test3[11] = "0123456789";
	char test4[11] = "0123456789";
	printf("\n________ ft_memcpy ____________\n");
	s1 = ft_memcpy(test3, test3 +3, 5);
	s2 = memcpy(test4, test4 + 3, 5);
	printf("ft_memcpy -> %s\n", s1);
	printf("   memcpy -> %s\n", s2);
	strcmp(s1, s2) ? printf("%sft_memcpy failed%s\n", RED, RESET) :
					 printf("%sft_memcpy passed%s\n", GREEN, RESET);

	printf("\n________ ft_strdup ____________\n");
	char *test5 = ft_strdup("hello");
	printf("ft_strdup -> %s\n", s1 = test5);
	printf("strlen should be -> %u\n", u1 = strlen(test5));
	free(test5);
	char *test6 = strdup("hello");
	printf("strdup -> %s\n", s2 = test6);
	printf("strlen should be -> %u\n", u2 = strlen(test6));
	free(test6);
	(strcmp(s1, s2) || u1 != u2) ? printf("%sft_strdup failed%s\n", RED, RESET) :
					 				printf("%sft_strdup passed%s\n", GREEN, RESET);

	printf("\n________ ft_puts ___________\n");
	char test12[7] = "strlen";
	printf("- - ft_puts - -\n");
	printf("ft_puts return -> %d\n", d1 = ft_puts(test12));

	char test13[7] = "strlen";
	printf("- - puts - -\n");
	printf("   puts return -> %d\n", d2 = puts(test13));
	d1 != d2 ? printf("%sft_puts failed%s\n", RED, RESET) :
			   printf("%sft_puts passed%s\n", GREEN, RESET);

	printf("\n%s[========== Bonus ++============]%s\n", YELLOW, RESET);
	printf("\n________ ft_strcpy ____________\n");
	char test7[11] = "0123456789";
	char test8[6] = "abcde";
	char test9[11] = "0123456789";
	printf("ft_strcpy -> %s,{%c}%c%c%c%c\n", s1 = ft_strcpy(test7, test8), test7[5], test7[6],test7[7], test7[8], test7[9]);
	printf("strcpy -> %s,{%c}%c%c%c%c\n", s2 = strcpy(test9, test8), test9[5], test9[6],test9[7], test9[8], test9[9]);
	strcmp(s1, s2) ? printf("%sft_strcpy failed%s\n", RED, RESET) :
					 				printf("%sft_strcpy passed%s\n", GREEN, RESET);

	printf("\n________ ft_strnew ____________\n");
	char *test10 = ft_strnew(6);
	char *test11 = malloc(6);
	ft_strcpy(test10, "12345");
	strcpy(test11, "12345");
	printf("ft_strnew -> |%s|\n", s1 = test10);
	printf("strlen -> %u\n", u1 = strlen(test10));
	printf("   malloc -> |%s|\n", s2 = test11);
	printf("strlen -> %u\n", u2 = strlen(test11));
	(strcmp(s1, s2) || u1 != u2) ? printf("%sft_strnew failed%s\n", RED, RESET) :
					 			   printf("%sft_strnew passed%s\n", GREEN, RESET);
	free(test10);
	free(test11);

	printf("\n________ ft_putchar ____________\n");
	write(1, "ft_putchar output: ", 20);
	d1 = ft_putchar('A');
	write(1, "     write output: ", 20);
	d2 = write(1, "A", 1);
	printf("\nft_putchar -> %d\n", d1);
	printf("     write -> %d\n", d2);
	d1 != d2 ? printf("%sft_putchar failed%s\n", RED, RESET) :
			   printf("%sft_putchar passed%s\n", GREEN, RESET);

	printf("\n________ ft_putstr ____________\n");
   	write(1, "ft_putstr output: ", 19);
   	d1 = ft_putstr("Hello");
   	write(1, "    write output: ", 19);
   	d2 = write(1, "Hello", 5);
   	printf("\nft_putchar -> %d\n", d1);
   	printf("     write -> %d\n", d2);
   	d1 != d2 ? printf("%sft_putchar failed%s\n", RED, RESET) :
   			   printf("%sft_putchar passed%s\n", GREEN, RESET);

 	printf("\n________ ft_putstr_fd ____________\n");
	int fds = open("test_fd", O_WRONLY);
	char he[6];
	ft_putstr_fd("hello", fds);
	close(fds);
	fds = open("test_fd", O_RDONLY);
	read(fds, he, 6);
	strcmp(he, "hello") ? printf("%sft_putstr_fd failed%s\n", RED, RESET) :
   			   printf("%sft_putstr_fd passed%s\n", GREEN, RESET);

	printf("\n%s[========== part three ============]%s\n", YELLOW, RESET);
	printf("\n________ ft_cat ___________\n");
	int fd = open("test_cat", O_WRONLY);
	ft_cat(fd);
	close(fd);
	printf("%sft_cat passed for fd%s\n", GREEN, RESET);
	printf("\nbelow are ft_cat for fd = 0\nplease type anything, it will repeat what you typed\n");
	printf("--> end ft_cat by %s[crtl + D]%s\n", YELLOW, RESET);
	ft_cat(0);
	printf("%sft_cat passed for stdin%s\n", GREEN, RESET);
	return 0;
}

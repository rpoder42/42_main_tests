#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	//printf("IS ALPHA result is: %d\n", ft_isalpha('2'));
	//printf("IS DIGIT result is: %d\n", ft_isdigit('1'));
	//printf("IS ALNUM result is: %d\n", ft_isalnum('Z'));
	//printf("IS ASCII result is: %d\n", ft_isascii(178));
	//printf("IS PRINTABLE result is: %d\n", ft_isprint('n'));
	//printf("STRLEN result is: %zu\n", ft_strlen("coucou"));


	//memset
	/*int array [] = { 54, 85, 20, 63, 21 };
	  size_t size = sizeof( int ) * 5;
	  int length;

	  char *ptr = memset( array, 1, size );

	  printf("retour ft: %p\n", ptr);

	  for( length=0; length<5; length++) {
	  printf( "%d ", array[ length ] );
	  }*/

	//char *test_src = "lorem ipsum dolor sit amet";
	//char test_dst[15] = "rrrrrrrrrrrrrr";

	//bzero
	/*
	   printf("not modified: %s\n", test_src);
	   ft_bzero(test_src, 2);
	   printf("modified: %s\n", test_src);
	   */

	//strlcpy
	/*
	   printf("dest: %s\n", test_dst);
	   size_t retour = strlcpy(test_dst, test_src, 5);
	   printf("%zu\n", retour);
	   printf("modified dest: %s\n", test_dst);
	   */

	//memcpy
	/*	
		printf("dest: %s\n", test_dst);
		char * retour = memcpy(test_dst, test_src, 0);
		printf("%s\n", retour);
		printf("modified dest: %s\n", test_dst);
		*/

	//strlcat
/*	
	   printf("dest: %s\n", test_dst);
	   size_t retour = strlcat(test_dst, test_src, 0);
	   printf("modified dest: %s\n", test_dst);
	   printf("retour=%zu\n", retour);
	   
*/

	/*dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);*/
/*
	char dest[20] = "salutccool";

	printf("dest:%s\n", dest);
	size_t retour = ft_strlcat(dest, "lorem ipsum dolor", 15);
	printf("retour:%zu\n", retour);
	printf("dest:%s\n", dest);
*/
	//toupper
	//printf("retour=%c", ft_toupper('r'));

	//tolower
	//printf("retour=%c", ft_tolower('R'));

	//strchr
	//printf("retour=%s", strrchr("hello", '\0'));

	//strncmp
	//printf("retour=%d", strncmp("hello", "hel", 6));

	//memchr
	//char test[7] = "hello a";
	//printf("retour=%s", memchr(test, 'y',100));

	//memcmp
	//char test1[18] = "FF your";
	//char test2[6] = "hello";
	//int result =  ft_memcmp(test1, test2, 7);
	//printf("retour=%d", result);

	//memmove
	/*	printf("Non modifiés \nsrc= %s \ndest= %s  \n\n", test_src, test_dst);
		memmove(test_dst, test_src, 3);
		printf("Modifiés \ndest= %s  \n", test_dst);
		*/

	//strnstr
	//char * result = ft_strnstr(test1, test2, 100);
	//printf("retour=%s", result);
	//

	//atoi
	//printf("retour atoi: %d", ft_atoi("  -+46879"));

	//atoi
	//int result = ft_atoi("7623");
	//printf("retour=%d", result);

	//calloc
	//char *ptr = (char *)calloc(2,2);
	//printf("%d", ptr[4]);

	//strdup
	//char *ptr = ft_strdup(test1);
	//printf("retour: %s", ptr);

	//substr
	//char *ptr = ft_substr(test1, 5, 2);
	//printf("retour:%s", ptr);


	//strjoin
	//printf("retour strjoin: %s", ft_strjoin(test1, test2));

	//strtrim
/*
	   char *s1 = "     ";
	   char *set = " ";
	   printf("retour strtrim:%s", ft_strtrim(s1, set));
*/	  

	//itoa
	/*
	   int    main(void)
	   {
	   printf("retour:%s", ft_itoa(1160869371));
	   }*/

	/*
	   int	main(void)
	   {
	   int i;
	   i = 0;
	   char **tab = NULL;
	   char *str = "           split    this       olol";
	   tab = ft_split(str, " ");
	   while (tab[i])
	   {
	   printf("%s\n", tab[i]);
	   i++;
	   }
	   }*/

	//lstaddfront
/*	char	*str="coucou";

	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("%s\n", elem->content);
*/
/*
	t_list	*begin;

	begin = ft_lstnew("coucou");
	ft_lstadd_front(&begin, ft_lstnew(("hey"))
	*/

	t_list *l;
	//int	size;
	t_list	retour;

	l = ft_lstnew(strdup("1"));
	l->next = ft_lstnew(strdup("2"));
	l->next->next = ft_lstnew(strdup("3"));

	retour = *ft_lstlast(l);
	printf("size = %p", retour);
}


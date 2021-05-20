#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"


int main () {
   //test variables 
   
   char str[50];
   char s = '7';
   int n = 7;

   printf("************************************\n");
   printf("\nmemset:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   memset(str,s,n);
   puts(str);

   printf("\nft_memset:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   ft_memset(str, s, n);
   puts(str);
   printf("\n************************************\n");

   // =========================function 2===================

   //test variables 
   n = 0;

   printf("\nbzero:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   bzero(str, n);
   printf("%s\n\n", str);

   printf("ft_bzero:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   ft_bzero(str, n);
   puts(str);
   
   printf("\n************************************\n");

   // =========================function 3===================

   struct {
      char name[40];
      int age;
   } person, person_copy;

   char myname[] = "Pierre de Fermat";
   n = 33;

   printf("\nmemcpy:\n");
   /* using memcpy to copy string: */
   memcpy (person.name, myname, n);
   //ft_memcpy(person.name, myname, 100);
   person.age = 46;
   /* using memcpy to copy structure: */
   memcpy (&person_copy, &person, sizeof(person));
   printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age);

   printf("\nft_memcpy:\n");
   /* using memcpy to copy string: */
   ft_memcpy(person.name, myname, n);
   person.age = 46;
   /* using memcpy to copy structure: */
   ft_memcpy (&person_copy, &person, sizeof(person));
   printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age);
   printf("\n************************************\n");

   // =========================function 4 ===================

   n = 16;
   s = 'F';
   printf("\nmemccpy:\n");
   char src[] = "Pierre de Fermat";
   char dst[] = "Linux Mint V03";
   memccpy(&dst, &src, s, n);
   printf("dest: %s\n", dst);
   memccpy(&dst, &src, 'U', 30);
   printf("dest: %s\n", dst);

   printf("\nft_memccpy:\n");
   char src1[] = "Pierre de Fermat";
   char dst1[] = "Linux Mint V03";
   ft_memccpy(&dst1, &src1, s, n);
   printf("dest: %s\n", dst1);
   ft_memccpy(&dst1, &src1, 'U', 30);
   printf("dest: %s\n", dst1);
   printf("\n************************************\n");

   // =========================function 4 ===================
   
   printf("\nmemmove:\n");
   char strt[] = "memmove can be very useful......";
   memmove(strt+20,strt+15,11);
   printf("output: %s\n",strt);
   char	dest3[] = "lorem ipsum dolor sit amet";
	char	src3[] = "memmove can";
   memmove(dest3, src3, 10);
   printf("output SF: %s\n",dest3);

   printf("\nft_memmove:\n");
   char ft_strt[] = "memmove can be very useful......";
   memmove(ft_strt+20,ft_strt+15,11);
   printf("output: %s\n",ft_strt);
   char	ft_dest3[] = "lorem ipsum dolor sit amet";
	char	ft_src3[] = "memmove can";
   ft_memmove(ft_dest3, ft_src3, 10);
   printf("output SF: %s\n",ft_dest3);
   printf("\n************************************\n");

   // =========================function===================
   printf("\nmemchr:\n");
   const char str4[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   ret = memchr(str4, ch, strlen(str4));
   printf("String after |%c| is - |%s|\n", ch, ret);
   ret = memchr(str4, 'G', strlen(str4));
   printf("String after |G| is - |%s|\n", ret);

   printf("\nft_memchr:\n");
   const char ft_str4[] = "http://www.tutorialspoint.com";
   const char ft_ch = '.';
   char *ft_ret;
   ft_ret = ft_memchr(ft_str4, ft_ch, strlen(ft_str4));
   printf("String after |%c| is - |%s|\n", ft_ch, ft_ret);
   ft_ret = ft_memchr(ft_str4, 'G', strlen(ft_str4));
   printf("String after |G| is - |%s|\n", ft_ret);
   printf("\n************************************\n");

   // =========================function===================

   printf("\nmemcmp:\n");
   char str1[15];
   char str2[15];
   int output;
   memcpy(str1, "AB/0ZXZ", 7);
   memcpy(str2, "AB/0/t/t/t/t/zXZ", 7);
   output = memcmp(str1, str2, 6);
   printf("output: %i\n", output);
   output = memcmp(str1, str2, 2);
   printf("output: %i\n", output);

   printf("\nft_memcmp:\n");
   char ft_str1[15];
   char ft_str2[15];
   int ft_output;
   ft_memcpy(ft_str1, "AB/0ZXZ", 7);
   ft_memcpy(ft_str2, "AB/0/t/t/t/t/zXZ", 7);
   ft_output = ft_memcmp(ft_str1, ft_str2, 6);
   printf("output: %i\n", ft_output);
   ft_output = ft_memcmp(ft_str1, ft_str2, 2);
   printf("output: %i\n", ft_output);
   printf("\n************************************\n");

   // =========================function===================

   size_t len;
	char *t = "papibaquígrafo\t\tis a brazi\0lian word";

   printf("\nstrlen:\n");
	len = strlen(t);
	printf("output: |%s| has |%zu| characters\n", t, len);

   printf("\nft_strlen:\n");
	len = strlen(t);
	printf("output: |%s| has |%zu| characters\n", t, len);
   printf("\n************************************\n");

   // =========================function===================

   char source[] = "Copy Source"; //11
	char destn[] = "Destination0";

	char source2[] = "Copy Source";
	char destn2[] = "Destination0";

	unsigned int n1 = 8;
	int n2 = 8;

	int tam1;
	int tam2;

   printf("\nstrlcpy\n");
	tam2 = strlcpy(destn2, source2, n2);
	printf("outputs: Source = %s e Destination = %s\n", source2, destn2);
	printf("output:  Return size Source = %d\n", tam2);

	printf("\nft_strlcpy:\n");
	tam1 = ft_strlcpy(destn, source, n1);
	printf("outputs: Source = %s e Destination = %s\n", source, destn);
	printf("output:  Return size Source = %d\n", tam1);
   printf("\n************************************\n");

   // =========================function===================
   	
   char src4[] = "April 2021";
	char dest4[] = "Ecole 42 basecamp";
	char source1[] = "April 2021"; //10
	char destn1[] = "Ecole 42 basecamp"; //17
	n = 20;

   printf("\nValue unsigned: %u\n", n);
   printf("\nstrlcat:\n");
	printf("output before: Source = |%s|  Destination = |%s| \n", src4, dest4);
	output = strlcat(dest4, src4, n);
	printf("output after:  Destination = |%s| Source Length: |%d|\n", dest4, output);

	printf("\nft_strlcat:\n");
	printf("output before: Source = |%s|  Destination = |%s| \n" , source1, destn1);
	output = ft_strlcat(destn1, source1, n);
	printf("output after:  Destination = |%s| Source Length: |%d|\n\n", destn1, output);
   printf("\n************************************\n");
   
   // =========================function===================

   //str4 = "http://www.tutorialspoint.com";
   printf("\nstrchr:\n");
   const char ch1 = '\0';
   ret = strchr(str4, ch1);
   printf("String after |%c| is -  |%s|\n", ch1, ret);
   ret = strchr(str4, 's');
   printf("String after |s| is - |%s|\n", ret);

   printf("\nft_strchr:\n");
   ft_ret = ft_strchr(str4, ch1);
   printf("String after |%c| is -  |%s|\n", ch1, ft_ret);
   ft_ret = ft_strchr(ft_str4, 's');
   printf("String after |s| is - |%s|\n", ft_ret);
   printf("\n************************************\n");
   // =========================function===================

   printf("\nstrrchr:\n");
   const char ch2 = '\0';
   ret = strrchr(str4, ch2);
   printf("String after |%c| is -  |%s|\n", ch2, ret);
   ret = strrchr(str4, 'G');
   printf("String after |s| is - |%s|\n", ret);
   ret = strrchr(str4, 'w');
   printf("String after |s| is - |%s|\n", ret);

   printf("\nft_strrchr:\n");
   ft_ret = ft_strrchr(str4, ch2);
   printf("String after |%c| is -  |%s|\n", ch2, ft_ret);
   ft_ret = ft_strrchr(ft_str4, 'G');
   printf("String after |s| is - |%s|\n", ft_ret);
   ft_ret = ft_strrchr(ft_str4, 's');
   printf("String after |s| is - |%s|\n", ft_ret);
   printf("\n************************************\n");
   
   // =========================function===================

   const char *largestring = "Hoo Bar Bar Baz";
   const char *smallstring = "oo\0";
   const char *smallstring2 = "oo/\0";
   n = 150;

	char *ptr;

	printf("\nstrnstr:\n");
	ptr = strnstr(largestring, smallstring, n);
	printf("output: %s\n", ptr);
   ptr = strnstr(largestring, smallstring2, n);
	printf("output: %s\n", ptr);

	printf("\nft_strnstr:\n");
	ptr  = ft_strnstr(largestring, smallstring, n);
	printf("output: %s\n", ptr);
   ptr  = ft_strnstr(largestring, smallstring2, n);
	printf("output: %s\n", ptr);
   printf("\n************************************\n");
   // =========================function===================

   const char *f1 = "Abc";
   const char *f2 = "AbC";
   const char *f3 = "Ab";
   n = 2;

	printf("\nstrcmp:\n");
	printf("output: %d\n", strncmp(f1, f2, n));
	printf("output: %d\n", strncmp(f1, f2, 4));
	printf("output: %d\n", strncmp(f1, f3, 4));

   printf("\nft_strncmp\n");
	printf("output: %d\n", ft_strncmp(f1, f2, n));
	printf("output: %d\n", ft_strncmp(f1, f2, 4));
   printf("output: %d\n", ft_strncmp(f1, f3, 4));
   printf("\n************************************\n");

   // =========================function===================

   const char *str5 = " \n \t\f\r \v +1234b67asd";
   const char *str6 = "-1+-41";
   const char *str7 = " \n \t\f\r \v -\v1234b67asd";
   

   printf("\natoi:\n");
   printf("output: %d\n", atoi(str5));
   printf("output: %d\n", atoi(str6));
   printf("output: %d\n", atoi(str7));

   printf("\nft_atoi:\n");
   printf("output: %d\n", ft_atoi(str5));
   printf("output: %d\n", ft_atoi(str6));
   printf("output: %d\n", ft_atoi(str7));
   printf("\n************************************\n");

// =========================function===================

   printf("\nisupper:\n");
   printf("output: %d\n", isupper('g'));
   printf("output: %d\n", isupper('A'));
   printf("output: %d\n", isupper('9'));

   printf("\nft_isupper:\n");
   printf("output: %d\n", ft_isupper('g'));
   printf("output: %d\n", ft_isupper('A'));
   printf("output: %d\n", ft_isupper('9'));
   printf("\n************************************\n");

   // =========================function===================

   printf("\nislower:\n");
   printf("output: %d\n", islower('g'));
   printf("output: %d\n", islower('A'));
   printf("output: %d\n", islower('9'));

   printf("\nft_islower:\n");
   printf("output: %d\n", ft_islower('g'));
   printf("output: %d\n", ft_islower('A'));
   printf("output: %d\n", ft_islower('9'));
   printf("\n************************************\n");
   // =========================function===================

   printf("\nisalpha:\n");
   printf("output: %d\n", isalpha('g'));
   printf("output: %d\n", isalpha('A'));
   printf("output: %d\n", isalpha('9'));

   printf("\nft_isalpha:\n");
   printf("output: %d\n", ft_isalpha('g'));
   printf("output: %d\n", ft_isalpha('A'));
   printf("output: %d\n", ft_isalpha('9'));
   printf("\n************************************\n");

    // =========================function===================

   printf("\nisalnum:\n");
   printf("output: %d\n", isalnum('g'));
   printf("output: %d\n", isalnum('/'));
   printf("output: %d\n", isalnum('9'));

   printf("\nft_isalnum:\n");
   printf("output: %d\n", ft_isalnum('g'));
   printf("output: %d\n", ft_isalnum('/'));
   printf("output: %d\n", ft_isalnum('9'));
   // =========================function===================
   // =========================function===================
   // =========================function===================
   // =========================function===================
   // =========================function===================
   // =========================function===================
   // =========================function===================
   return(0);
}
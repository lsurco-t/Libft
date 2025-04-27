/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:48:30 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 22:38:12 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define FAILURE "❌"
#define SUCCESS "✅"

void test_strlcat_cases(char *dst, char *src, size_t size)
{
    char dst2[50];

    strcpy(dst2, dst);

    ft_strlcat(dst, src, size);
    strlcat(dst2, src, size);

    if (strcmp(dst, dst2) == 0)
    {
		printf(GREEN "%s Both functions copied successfully: \"%s\"" RESET "\n\n", SUCCESS, dst2);
	}
    else
    {
        printf(RED "%s Different values!" RESET "\n", FAILURE);
        printf("Recreated string: %s\n", dst);
        printf("Original function: %s\n", dst2);
    }
}

int main(void)
{
    char dst1[50] = "here goes a ";
    char src1[] = "test string";
    test_strlcat_cases(dst1, src1, 20);

    char dst2[50] = "here goes a ";
    char src2[] = "test string";
    test_strlcat_cases(dst2, src2, 10);

    char dst3[50] = "here goes a ";
    char src3[] = "";
    test_strlcat_cases(dst3, src3, 20);

    char dst4[50] = "";
    char src4[] = "test string";
    test_strlcat_cases(dst4, src4, 20);

    char dst5[50] = "here goes a ";
    char src5[] = "test string";
    test_strlcat_cases(dst5, src5, 50);

    char dst6[50] = "here goes a ";
    char src6[] = "this is a much longer test string to exceed the buffer";
    test_strlcat_cases(dst6, src6, 30);

	char dst7[11] = "Hello";
	char src7[] = "World";
	test_strlcat_cases(dst7, src7, 11);

	char dst8[10] = "Hi";
	char src8[] = "There";
	test_strlcat_cases(dst8, src8, 5);

	char dst9[5] = "abc";
	char src9[] = "def";
	test_strlcat_cases(dst9, src9, 1000);

	char dst10[10] = "Test";
	char src10[] = "12345";
	test_strlcat_cases(dst10, src10, -5);

    char	dst[5];
	char	*src = "Hello, World!";
    strcpy(dst, "Hi");
    size_t dstsize = 5;
    size_t result = ft_strlcat(dst, src, sizeof(dst));
	if (result >= dstsize)
	{
		printf(GREEN"✅ Correct: Buffer overflow detected. Return value: -1\n" RESET);
	}
	else
	{
		printf(RED"❌ Incorrect: No overflow detected. Return value: %zu\n" RESET, result);
	}

    return (0);
}

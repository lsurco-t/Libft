/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsurco-t <lsurco-t@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:45:31 by lsurco-t          #+#    #+#             */
/*   Updated: 2025/04/27 21:26:52 by lsurco-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define FAILURE "❌"
#define SUCCESS "✅"

void test_strtrim(char *str1, char *set)
{
    char *str2 = ft_strtrim(str1, set);

    if (str2)
    {
        printf(GREEN "%s Trimmed Result: %s\n" RESET, SUCCESS, str2);
        free(str2);
    }
    else
    {
        printf(RED "%s Error or NULL result\n" RESET, FAILURE);
    }
}

int main(void)
{
    
    printf("\nTest Case 1: Trim characters from both sides\n");
    char *str1 = "herethereis astree";
    char *set = "re";
    printf("Original String: %s\n", str1);
    printf("Characters to remove: %s\n", set);
    test_strtrim(str1, set);
	
    printf("\nTest Case 2: No characters to trim\n");
    str1 = "hello world";
    set = "xyz";
    printf("Original String: %s\n", str1);
    printf("Characters to remove: %s\n", set);
    test_strtrim(str1, set); 
	
    printf("\nTest Case 3: Trim only leading characters\n");
    str1 = "xxhello world";
    set = "x";
    printf("Original String: %s\n", str1);
    printf("Characters to remove: %s\n", set);
    test_strtrim(str1, set); 
	
    printf("\nTest Case 4: Trim only trailing characters\n");
    str1 = "hello worldxx";
    set = "x";
    printf("Original String: %s\n", str1);
    printf("Characters to remove: %s\n", set);
    test_strtrim(str1, set);
	
    printf("\nTest Case 5: Trim all characters\n");
    str1 = "xxxxxx";
    set = "x";
    printf("Original String: %s\n", str1);
    printf("Characters to remove: %s\n", set);
    test_strtrim(str1, set); 
	
    printf("\nTest Case 6: Set contains characters not in the string\n");
    str1 = "hello world";
    set = "xyz";
    printf("Original String: %s\n", str1);
    printf("Characters to remove: %s\n", set);
    test_strtrim(str1, set); 
	
	printf("\nTest Case 7: Empty string\n");
    str1 = "";
    set = "xyz";
    printf("Original String: %s\n", str1);
    printf("Characters to remove: %s\n", set);
    test_strtrim(str1, set); 
    return (0);

	printf("\nTest Case 8: NULL value\n");
    str1 = NULL;
    set = "xyz";
    printf("Original String: %s\n", str1);
    printf("Characters to remove: %s\n", set);
    test_strtrim(str1, set); 
    return (0);
}

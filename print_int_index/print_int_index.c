/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epaksoy <epaksoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:31:03 by epaksoy           #+#    #+#             */
/*   Updated: 2023/03/02 11:50:05 by epaksoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int full_len(int x)
{
    int n = 0;
    while(x > 0)
    {
        n++;
        x/=10;
    }
    return n;
}

int get_nth_num(int nbr, int n)
{
    int len = full_len(nbr); // 123
    int i = 0;
    int t = nbr;

    len--;
    if (n < 0)
        return -1;
    if (n > len)
        return -1;
    while(len-n >= i+1)
    {
        t /= 10;
        i++;
    }
    return (t%10);
}
int main(int ac, char **av)
{
    printf("%d",get_nth_num(atoi(av[1]), atoi(av[2])));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bit_shifting.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <akalimol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:45:34 by akalimol          #+#    #+#             */
/*   Updated: 2023/07/31 12:14:46 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*  Test:   Check the nature of shifting    */

/*  In nature is something related to bits  */
/*  But in human language, multiplication by 2 */

int main(void)
{
    int num;

    num = 3 << 4;   // 3 * 2^4
    std::cout << "My num is " << num << std::endl;
    
    float   num2;
    num2 = 1 << 4;   // 3 * 2^4
    std::cout << "My num2 is " << num2 << std::endl;
    
    return (0);
}
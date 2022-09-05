/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:33:04 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 21:38:06 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(){
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instace.publicFoo: " << instance.publicFoo << std::endl;
	//instance._privateFoo = 42;
	// std::cout << "instance._privateFoo: " << instance._privateFoo << std::end;

	instance.publicBar();
	//instance._privateBar();
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:29:58 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 23:35:33 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(){
	Sample instance;
	Sample* instancep = &instance;

	int Sample::*p = NULL;
	void (Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();
	return 0;
}

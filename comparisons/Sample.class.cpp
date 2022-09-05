/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:52:47 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 22:56:27 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(int v) : _foo(v){
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

int Sample::getFoo(void) const{
	return this->_foo;
}

int Sample::compare(Sample * other) const{
	if(this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}

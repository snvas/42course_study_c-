/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:27:09 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 21:36:51 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicaFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->privateaFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::publicBar(void) const {
	std::cout << "Member fuction publicBar called" << std::endl;
	return;
}

void Sample::_privateBar(void) const{
	std::cout << "PrivateBar called" << std::endl;
	return;
}
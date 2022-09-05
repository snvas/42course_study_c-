/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:10:39 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 23:29:29 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : foo(0){

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void){

	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::bar(void) const{

	std::cout << "Member fuction bar called" << std::endl;
	return;
}

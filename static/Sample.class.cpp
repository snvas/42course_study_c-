/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:10:42 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 23:19:47 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
	return;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

int Sample::getNbInst(void){
	return Sample::_nbInst;
}

int Sample::_nbInst = 0;

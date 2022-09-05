/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:20:54 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 23:23:39 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void f0(void){
	Sample instace;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	return;
}

void f1(void){
	Sample instace;
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f0();
	return;
}

int main(){

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 23:08:35 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 23:09:59 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample{
	public:
		Sample(void);
		~Sample(void);

		static int getNbInst(void);
	private:
		static int _nbInst;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:59:35 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 18:02:00 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample{

	public:
		int	publicFoo;
		Sample(void);
		~Sample(void);

		void publicBar(void) const;

	private:
		int _privateFoo;
		void _privateBar(void) const;
};

#endif
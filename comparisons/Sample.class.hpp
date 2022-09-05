/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:12:56 by snovaes           #+#    #+#             */
/*   Updated: 2022/09/04 22:52:03 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample{
	public:
		Sample(int v);
		~Sample(void);

		int getFoo(void) const;
		int compare(Sample * other) const;;

	private:
		int _foo;
};

#endif
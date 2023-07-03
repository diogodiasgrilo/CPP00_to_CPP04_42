/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dropped.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:20:10 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 19:45:32 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DROPPED_H
#define DROPPED_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

struct Node
{
	Node(AMateria *materia);
	AMateria *item;
	struct Node *next;
};

class LinkedList 
{
	private:
		Node* head;

	public:
		LinkedList();
		LinkedList(const LinkedList &src);
        LinkedList &operator=(LinkedList const &src);
        ~LinkedList();
		void addFront(AMateria *materia);
		Node* cloneList(Node* head);
		void clear();
};

#endif
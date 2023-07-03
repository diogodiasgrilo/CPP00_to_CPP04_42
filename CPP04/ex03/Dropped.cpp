/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dropped.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:23:02 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 19:49:15 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dropped.hpp"

Node::Node(AMateria *materia) : item(materia), next(NULL) {}

LinkedList::LinkedList() : head(NULL) {}

LinkedList::LinkedList(const LinkedList &src)
{
	*this = src;
}

LinkedList &LinkedList::operator=(LinkedList const &src)
{
	if (this != &src)
		this->head = cloneList(src.head);
    return *this;
}

Node* LinkedList::cloneList(Node* first) {
    if (first == NULL) {
        return NULL;
    }

    Node* clonedHead = new Node(first->item);
    Node* clonedNode = clonedHead;
    Node* currentNode = first->next;

    while (currentNode != NULL) {
        clonedNode->next = new Node(currentNode->item);
        clonedNode = clonedNode->next;
        currentNode = currentNode->next;
    }

    return clonedHead;
}

void LinkedList::addFront(AMateria *materia) 
{
	Node* newNode = new Node(materia);
	newNode->next = head;
	head = newNode;
}

void LinkedList::clear() 
{
	Node* currentNode = head;
	while (currentNode != NULL) {
		Node* nextNode = currentNode->next;
		// std::cout << "CLEARED HERE " << currentNode->item->getType() << " " << std::endl;
		delete currentNode->item;
		delete currentNode;
		currentNode = nextNode;
	}
	head = NULL;
}

LinkedList::~LinkedList() {}

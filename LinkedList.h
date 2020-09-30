#ifndef LinkedList_H
#define LinkedList_H
#include "Node.h"
class LinkedList{
  private:
    Node * head;
    int size;
  public:
    LinkedList();
    void append(const int& datum);
    void create(const int& datum, int index);
    void del(int index);
    int getSize()const;
    void push(const int& datum);
    int read(int index);
    void update(const int& datum, int index);
};

LinkedList::LinkedList():head(nullptr),size(0){}

void LinkedList::append(const int& datum){
  Node * pnewboy = new Node(datum);
  Node * pcurrentboy = head;
  if(!head){
    head=pnewboy;
  }
  else {
    while(pcurrentboy->nextboy){
      pcurrentboy=pcurrentboy->nextboy;
    }
    pcurrentboy->nextboy = pnewboy;
  }
  ++size;
}

void LinkedList::create(const int& datum, int index){
	Node * pnewboy = new Node(datum);
	Node * pauxboy = head;
	Node * pauxholder = nullptr;
	while(index--){
		pauxholder=pauxboy;
		if(!pauxboy->nextboy){
			if(index>0) this->append(0);
			else{
				this->append(datum);
				return;
			}
		}
		pauxboy=pauxboy->nextboy;
	}
	if(pauxboy == head){
		pnewboy->nextboy=head;
		head=pnewboy;
	}
	else{
		pauxholder->nextboy=pnewboy;
		pnewboy->nextboy=pauxboy;
	}
	++size;
}

void LinkedList::del(int index){
	Node * pauxboy = head;
	Node * pauxholder = nullptr;
	while(index--){
		pauxholder=pauxboy;
		if(!pauxboy->nextboy) return;
		pauxboy=pauxboy->nextboy;
	}
	if(pauxboy == head) head=head->nextboy;
	else pauxholder->nextboy=pauxboy->nextboy;
	--size;
}

int LinkedList::getSize()const{
  return size;
}

void LinkedList::push(const int& datum){
  Node * pnewboy=new Node(datum);
  pnewboy->nextboy=head;
  head=pnewboy;
  size++;
}

int LinkedList::read(int index){
	Node * pauxboy = head;
	while(index--){
		if(!pauxboy->nextboy) return 0;
		pauxboy=pauxboy->nextboy;
	}
	return pauxboy->content;
}

void LinkedList::update(const int& datum, int index){
	Node * pauxboy = head;
	while(index--) pauxboy=pauxboy->nextboy;
	pauxboy->content=datum;
}
#endif

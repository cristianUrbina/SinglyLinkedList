#include<iostream>
#include "LinkedList.h"
using namespace std;

int main(){
  LinkedList myList = LinkedList();
  myList.push(19);
  myList.push(25);
  myList.push(42);
  myList.push(69);
  myList.append(15);
  myList.del(1);
  myList.create(35,3);
  myList.update(12,2);
  cout<<"Final List: ";
  for(int i = 0; i<myList.getSize();++i){
  	cout<<myList.read(i)<<" ";
  }
  
  return 0;
}

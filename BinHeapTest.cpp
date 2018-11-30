/* Bin heap tester
 */

#include "BinaryHeap.h"
#include <iostream>
using namespace std;

int main(){
  BinaryHeap<int> heap = BinaryHeap<int>();
  heap.insert(8);
  heap.insert(10);
  heap.insert(2);
  heap.insert(7);
  heap.insert(20);
  heap.insert(5);
  heap.insert(93);
  heap.insert(15);
  heap.printHeap();
  heap.remove();
  heap.remove();
  heap.printHeap();
  
}

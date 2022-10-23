#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){

	//larger = NULL;
	//smaller = NULL;

	if(head == nullptr){ //either head is empty or end of head list
		smaller = nullptr;
		larger = nullptr;
		return;
	}else if(head != nullptr){
		if(head->val <= pivot){ //add value to smaller list
			smaller = head;
			llpivot(head->next, smaller->next, larger, pivot);
		}else if(head->val > pivot){ //add value to larger list
			larger = head;
			llpivot(head->next, smaller, larger->next, pivot);
		}
	}

	return;

	// else if(larger->next != NULL || smaller->next != NULL){
	// 	llpivot(head, smaller->next, larger->next, pivot);	
	// }

}

void shift(int k) {
	// TODO: Add your code here
	if (k == 0 || mSize <= 1) return;
	if (k > 0) {
		// A B C D E -> B C D E A
		for (int i = 0; i < k; i++) {
			node *first = mHeader->next;
			node *last = mHeader->prev;

			mHeader->next = first->next;
			mHeader->next->prev = mHeader;

			first->next = mHeader;
			mHeader->prev = first;

			last->next = first;
			first->prev = last;
		}
	} else if (k < 0) {
		// A B C D E -> E A B C D
		for (int i = 0; i > -k; i--) {
			node *first = mHeader->next;
            node *last = mHeader->prev;
            
			mHeader->next = last;
			mHeader->prev = last->prev;
			last->prev->next = mHeader;

			last->next = first;
			last->prev = mHeader;

			first->prev = last;
		}
	}
}
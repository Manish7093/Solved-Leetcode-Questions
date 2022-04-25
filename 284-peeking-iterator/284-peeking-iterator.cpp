/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    int next_val;
    bool hasnext;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    hasnext=Iterator::hasNext();
        if(hasnext)
            next_val=Iterator::next();
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return next_val;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int cur_val=next_val;
        hasnext=Iterator::hasNext();
        if(hasnext)
            next_val=Iterator::next();
        return cur_val ;
	}
	
	bool hasNext() const {
	    return hasnext;
	}
};
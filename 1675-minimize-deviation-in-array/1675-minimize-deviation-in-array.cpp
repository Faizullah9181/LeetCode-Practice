class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
	{
	priority_queue<int> pq;

	int minn = INT_MAX;

	for(auto i:nums)
	{
		if(i%2==1)
			i*=2;
		minn = min(minn,i);
		pq.push(i);
	}

	int diff = INT_MAX;

	while(pq.top()%2==0)
	{
		int mx = pq.top();
		pq.pop();
		diff = min(diff,mx-minn);
		minn=min(minn,mx/2);
		pq.push(mx/2);
	}


	return min(diff,pq.top()-minn);
	}
};

/* 
Idea:

The main idea is to convert every element if odd to even (as only once an odd can be multiplied by 2 then becomes even)
Now the whole array has the maximum possible form of each element 
Now calculate the minimum to find the deviation 

Use a priority queue (max-heap) and push all the elements in it
Now max-element if even can be reduced to smaller form but if odd it cannot and 
thus if the priority queue contains odd number as its max-element then it is the final max-element used to calculate deviation along with the current min-element
We do this in a loop till we encounter max-odd-element at the top of the priority queue by simultaneously keeping track of the minimum element and the resulting deviation

*/

/*
First create a priority queue so that we can easily access the max element in the array.
The idea is to :-
Double all the odd values and make them even
find minimum of all values after/while doing step 1.
Also Store all values inside priority queue.
Traverse the priority queue and find new diff min(diff,pq.top()-min).
also change the minimum as we are going to reinsert the values after dividing them by 2 ( min(pq.top()/2, minimum of all value )
push the halfed value in step 5 to priority queue.
*/
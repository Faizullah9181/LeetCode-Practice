class MyCircularDeque
{
    public:
    int *arr;
    int n;
    int front;
    int end;
    MyCircularDeque(int k)
    {
        arr = new int[k];
        n = k;
        front = -1;
        end = -1;
    }

    bool insertFront(int x)
    {
        if (isFull()) return false;

        if (isEmpty())
        {
            front = n - 1;
            end = n - 1;
        }
        else if (front == 0 && end != n - 1)
        {
            front = n - 1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool insertLast(int x)
    {
        if (isFull()) return false;

        if (isEmpty())
        {
            front = end = 0;
        }
        else if (end == n - 1 && front != 0)
        {
            end = 0;
        }
        else
        {
            end++;
        }
        arr[end] = x;
        return true;
    }

    bool deleteFront()
    {
        if (isEmpty()) return false;
        int ans = arr[front];
        arr[front] = -1;
        if (front == end)
        {
            front = -1;
            end = -1;
        }
        else if (front == n - 1) front = 0;
        else front++;
        return true;
    }

    bool deleteLast()
    {
        if (isEmpty()) return false;
        int ans = arr[end];
        arr[end] = -1;
        if (front == end)
        {
            front = -1;
            end = -1;
        }
        else if (end == 0) end = n - 1;
        else end--;
        return true;
    }

    int getFront()
    {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear()
    {
        if (isEmpty()) return -1;
        return arr[end];
    }

    bool isEmpty()
    {
        if (front == -1) return true;
        return false;
    }

    bool isFull()
    {
        if ((front == 0 && end == n - 1) || (front != 0 && end == (front - 1) % (n - 1))) return true;
        return false;
    }
};

/**
 *Your MyCircularDeque object will be instantiated and called as such:
 *MyCircularDeque* obj = new MyCircularDeque(k);
 *bool param_1 = obj->insertFront(value);
 *bool param_2 = obj->insertLast(value);
 *bool param_3 = obj->deleteFront();
 *bool param_4 = obj->deleteLast();
 *int param_5 = obj->getFront();
 *int param_6 = obj->getRear();
 *bool param_7 = obj->isEmpty();
 *bool param_8 = obj->isFull();
 */
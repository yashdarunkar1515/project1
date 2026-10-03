class FrontMiddleBackQueue {
public:
    deque<int> q;

    FrontMiddleBackQueue() {
    }

    void pushFront(int val)
    {
        q.push_front(val);
    }

    void pushMiddle(int val)
    {
        int mid = q.size() / 2;

        q.insert(q.begin() + mid, val);
    }

    void pushBack(int val)
    {
        q.push_back(val);
    }

    int popFront()
    {
        if (q.empty())
        {
            return -1;
        }

        int x = q.front();

        q.pop_front();

        return x;
    }

    int popMiddle()
    {
        if (q.empty())
        {
            return -1;
        }

        int mid = (q.size() - 1) / 2;

        int x = q[mid];

        q.erase(q.begin() + mid);

        return x;
    }

    int popBack()
    {
        if (q.empty())
        {
            return -1;
        }

        int x = q.back();

        q.pop_back();

        return x;
    }
};

void insert(stack<int> &s, int x)
{
    if(s.empty() || s.top()<=x)
    {
        s.push(x);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,x);
    s.push(temp);
}

void SortedStack :: sort()
{
    if(s.empty()) return;
    int x=s.top();
    s.pop();
    sort();
    insert(s, x);
}
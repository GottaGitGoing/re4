void reverse(int* first, int*last)
{
    int t;
    if ((last-first)%2==0)
    {
    while ( first != last)
    {
        t = *first;
        // std::cout << t << std::endl;
        *first = *last;
        // std::cout << *start << std::endl;
        *last = t;
        
        first += 1;
        last -= 1;    
    }
    }
    else
    {
    while ( last-first !=1)
    {
        t = *first;
        // std::cout << t << std::endl;
        *first = *last;
        // std::cout << *start << std::endl;
        *last = t;
        
        first += 1;
        last -= 1;    
    } 
    t = *first;
    // std::cout << t << std::endl;
    *first = *last;
    // std::cout << *start << std::endl;
    *last = t;
    }
}


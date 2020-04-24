void reverse(int* first, int*last)
{
    int t;
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

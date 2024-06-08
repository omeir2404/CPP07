#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template<typename U>
U min(U &a, U &b){
    return (a < b) ? a : b;
}
template<typename V>
V max(V &a, V &b){
    return (a > b) ? a : b;
}
#endif
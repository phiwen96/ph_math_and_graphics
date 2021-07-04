#pragma once

//template <unsigned long long>
//struct point
//{
//    unsigned long long d;
//
//    consteval point (unsigned long long d) : d {d}
//    {
//
//    }
//
//    consteval auto operator () (auto... coords)
////    requires (sizeof... (coords) == d)
//    {
//        d = sizeof... (coords);
//        return *this;
//    }
//
//    friend std::ostream& operator<< (std::ostream& os, point const& p)
//    {
//        return os << "point <" << p.d << ">";
//    }
//};

inline auto point (auto&&... coords) 
{
    
}

//template <typename T, T A>
//consteval point operator "" d (unsigned long long a) //-> point<a>
//{
//    return {a};
//}

//point operator "" _p (point)
//{
//    return {};
//}
//auto point ()

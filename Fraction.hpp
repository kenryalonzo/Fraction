#ifndef Fraction_hpp
#define Fraction_hpp

#include <iostream>

    class Fraction
    {
    
    public:
        Fraction (int num, int dem);
        Fraction (int num);
        Fraction ();

        void print(std::ostream& flux) const;
        Fraction& operator*=(Fraction const& autre);
        bool estEgal(Fraction const& autre) const;

    private:

        int m_numerateur;
        int m_denominateur;
    };

    std :: ostream& operator << (std ::ostream& flux, Fraction const& fraction);
    Fraction operator* (Fraction const& a,Fraction const& b);
    bool operator==(Fraction const& a, Fraction const& b);
    
#endif
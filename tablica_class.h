#ifndef tablica_class_h
#define tablica_class_h

typedef int Z;


class tabela{
    unsigned int kolumny,wiersze;
    Z*mem;
    public:
    tabela(unsigned int ,unsigned int );
    ~tabela();
    
    Z& operator()(unsigned int ,unsigned int );

    bool resize (unsigned int ,unsigned int );

};








#endif 
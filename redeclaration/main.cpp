#include <iostream>

int func (int, int, int);
int func (int, int, int = 10);
int func (int, int = 20, int);


/* INVDALID
int func(int, int, int);
int func(int, int = 20, int);
int func(int, int, int = 10);
 */


int main ()
{
//    func(); //SYNTAX ERROR
    func (1);
    func (1, 2);
    func (1, 2, 3);

    return 0;
}

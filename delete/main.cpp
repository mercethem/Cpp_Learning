/**
    There is a declaration but if we want to call the function that is a SYNTAX ERROR

    It's all mean : There is a function but if you want to call the function that is a SYNTAX ERROR!!!
    These functions get to attend the Function the overload resolutions!!!!!!!!!!! BUT CAN NOT CALL!!!


    Functions, constructors, special member functions could be DELETED!!!!

    When can we use deleted functions ?
    - Answer is simply generally we can use when i do not to want to call a function with Data Type non grata :)
    !!!!Because of function overload resolution

 */

int func(int) = delete;
int func(double);

int main()
{
    //func(12); Deleted function! SYNTAX ERROR!!!
    func(12.1);

}

The unique purpose of these shifting operators are that they both perform an unique mathematcical operations, lets  discuss below 

    i) Bitwise << left shift 
        It is used to multiply an decimal a with 2^b
        when a << b

        a * 2^b

    ii) Bitwise << left shift 
        It is used to divide an decimal a with 2^b
        when a >> b
        
        that is a / 2^b

Operator precendence 
<br>

    High to low 
    !               - NOT 
    ++ , --         - Unary operator 
    * , / , %       - Multiplication , Division , Modulo 
    + , -           - Addition and Subtraction  
    & , | , ^       - Bitwise operator 
    < , > , <= , >= - Conditional operators 
    == , !=         - Equal to and Not equal to 
    &&              - Logical AND 
    ||              - Logical OR 
    =               - Assignment Operator   


    When two operators of same precedence are written together associativity is applied.

    For example a*b/c * is solve first as it has associativity from right to left 
<br>except - ! , ++ , -- and = Assignment operator have right to left associativity 

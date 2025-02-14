using System;
using System.Collections.Generic;
 
class Solution
{
    static void Main()
    {
        var inputs = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            
        if(inputs[0] <= inputs[1] && inputs[0] <= inputs[2]) Console.WriteLine("YES");
        else Console.WriteLine("NO");
    }
}
using System;
using System.Collections.Generic;
 
class Solution
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());
        while (t-- > 0)
        {
            var inputs = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            var n = inputs[0];
            if(n == 0) Console.WriteLine("1");
            else 
            {
                int total = ((n / 15) * 3) + (n % 15 == 0 ? 1 : n % 15 == 1 ? 2 : 3);
                Console.WriteLine(total);
            }
        }
    }
}
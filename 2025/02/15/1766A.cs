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
            
            int output = 0;

            for(int i = 7; i > 0; i--)
            {
                int div = 10;
                for(int j = 1; j < i; j++) 
                {
                    div = div * 10;
                }

                if(n > div) 
                {
                    output += (n / div);
                    n = div - 1;
                }
            }

            output += n;

            Console.WriteLine(output);

           
        }
    }
}
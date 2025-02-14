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
            var minDiff = inputs[2];

            if(minDiff == 0) 
            {
                if(inputs[0] == inputs[1]) Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }
            else 
            {
                int diff = inputs[0] - inputs[1];
                if (diff < 0) {
                    diff *= -1;
                } 

                int minValue = (diff - 1 + minDiff) / minDiff;
                if(inputs[0] >= minValue && inputs[1] >= minValue) Console.WriteLine("YES");
                else Console.WriteLine("NO");
            }

           
        }
    }
}
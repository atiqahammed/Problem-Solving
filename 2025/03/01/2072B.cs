using System;
using System.Collections.Generic;
 
class Solution
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());
        while (t-- > 0)
        {
            string input = Console.ReadLine();

            int underscoreCount = 0;
            int dashCount = 0;
            
            foreach (char c in input)
            {
                if (c.ToString() == "_")
                {
                    underscoreCount++;  // Increment underscore counter
                }
                else if (c.ToString() == "-")
                {
                    dashCount++;  // Increment dash counter
                }
            }


            if (underscoreCount == 0 || dashCount == 0) Console.WriteLine("0");
            else 
            {
                int n1 = dashCount / 2;
                int ceilingResult = (dashCount / 2) + (dashCount % 2 == 0 ? 0 : 1);
                Console.WriteLine(n1 * ceilingResult * underscoreCount);
            }
        }
    }
}
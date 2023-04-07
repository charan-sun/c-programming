// C# program for the above approach
using System;
 
public class Gfg {
 
    // Naive iterative solution to calculate pow(x, n)
    static long power(int x, int n)
    {
        // Initialize result by 1
        long pow = 1L;
 
        // Multiply x for n times
        for (int i = 0; i < n; i++) {
            pow = pow * x;
        }
 
        return pow;
    }
 
    // Driver code
    public static void Main(String[] args)
    {
        int x = 2;
        int n = 3;
        Console.WriteLine(power(x, n));
    }
};
 
// This code contributed by Pushpesh Raj

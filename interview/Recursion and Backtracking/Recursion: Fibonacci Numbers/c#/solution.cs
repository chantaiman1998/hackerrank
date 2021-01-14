using System;
using System.Collections.Generic;
using System.IO;

class Solution {
    
    public static int Fibonacci(int n) {
        // Write your code here.
        int[] fib = new int[2];
        fib[0] = 0;
        fib[1] = 1;
        for(int i = 2; i <= n; ++i)
        {
            fib[i % 2] = fib[0] + fib[1];
        }
        return fib[n % 2];
    }

    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine(Fibonacci(n));
    }
}

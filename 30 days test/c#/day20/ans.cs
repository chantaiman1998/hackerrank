using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        /*
        int n = Convert.ToInt32(Console.ReadLine());
        string[] a_temp = Console.ReadLine().Split(' ');
        int[] a = Array.ConvertAll(a_temp,Int32.Parse);
        */
        // Write Your Code Here
        var a = int.Parse(Console.ReadLine());
        var ar = Console.ReadLine().Split(' ');
        var arr = Array.ConvertAll(ar, int.Parse);

        int numSwaps = 0;
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < a - 1; j++)
            {
                if(arr[j] > arr[j + 1])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                    numSwaps++;
                }
            }
            if(numSwaps == 0)
            {
                break;
            }
        }

        Console.WriteLine("Array is sorted in " + numSwaps + " swaps.");
        Console.WriteLine("First Element: " + arr[0]);
        Console.WriteLine("Last Element: " + arr[arr.Length - 1]);        

    }
}

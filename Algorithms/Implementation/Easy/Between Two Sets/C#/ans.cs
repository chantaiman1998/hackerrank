using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

// class Result
// {

    /*
     * Complete the 'getTotalX' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY a
     *  2. INTEGER_ARRAY b
     */
/*
    public static int getTotalX(List<int> a, List<int> b)
    {

    }

}
*/
class Solution
{
    /*
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');

        int n = Convert.ToInt32(firstMultipleInput[0]);

        int m = Convert.ToInt32(firstMultipleInput[1]);

        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

        List<int> brr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(brrTemp => Convert.ToInt32(brrTemp)).ToList();

        int total = Result.getTotalX(arr, brr);

        textWriter.WriteLine(total);

        textWriter.Flush();
        textWriter.Close();
    }
*/
    static void Main(String[] args)
    {
        Console.ReadLine();
        var a_temp = Console.ReadLine().Split(' ');
        var setA = Array.ConvertAll(a_temp, Int32.Parse);
        var b_temp = Console.ReadLine().Split(' ');
        var setB = Array.ConvertAll(b_temp, Int32.Parse);
        int total = getTotalX(setA, setB);
        Console.WriteLine(total);
    }
    static int getTotalX(int[] a, int[] b)
    {
        var totalXs = 0;
        var maximumA = a.Max();
        var minimumB = b.Min();
        var counter = 1;
        var multipleOfMaxA = maximumA;
        
        while (multipleOfMaxA <= minimumB)
        {
            var factorOfAll = true;
            foreach(var item in a)
            {
                if(multipleOfMaxA % item != 0)
                {
                    factorOfAll = false;
                    break;
                }
            }
            
            if(factorOfAll)
            {
                foreach (var item in b)
                {
                    if(item % multipleOfMaxA != 0)
                    {
                        factorOfAll = false;
                        break;
                    }
                }
            }
            if (factorOfAll)
                totalXs++;
            
            counter++;
            multipleOfMaxA = maximumA * counter;
        }
        return totalXs;
    }
}

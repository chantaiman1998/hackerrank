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
using static System.Console;

class Solution {
/*
    // Complete the miniMaxSum function below.
    static void miniMaxSum(int[] arr) {


    }

    static void Main(string[] args) {
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), arrTemp => Convert.ToInt32(arrTemp))
        ;
        miniMaxSum(arr);
    }
*/
    static void Main(String[] args)
    {
        var numbers = ReadLine().Split(' ').Select(x => long.Parse(x)).ToList();
        var sumOfAllNumbers = 0L;
        var minimum = long.MaxValue;
        var maximum = 0L;
        for(int i = 0; i < 5; i++)
        {
            sumOfAllNumbers += numbers[i];
            if (numbers[i] < minimum)
               minimum = numbers[i];
            if (numbers[i] > maximum)
               maximum = numbers[i];  
        }
        WriteLine(string.Format("{0} {1}", sumOfAllNumbers - maximum, sumOfAllNumbers - minimum));
    }
}

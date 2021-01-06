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
    // Complete the plusMinus function below.
    static void plusMinus(int[] arr) {


    }

    static void Main(string[] args) {
        int n = Convert.ToInt32(Console.ReadLine());

        int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), arrTemp => Convert.ToInt32(arrTemp))
        ;
        plusMinus(arr);
    }
*/
    static void Main(String[] args)
    {
        var positiveNumbers = 0;
        var negativeNumbers = 0;
        var zeroNumbers = 0;
        ReadLine();
        var arr_temp = ReadLine().Split(' ');
        var arr = Array.ConvertAll(arr_temp, Int32.Parse);
        for (int arr_i = 0; arr_i < arr.Length; arr_i++)
        {
            if (arr[arr_i] > 0)
                ++positiveNumbers;
            else if (arr[arr_i] < 0)
                ++negativeNumbers;
            else
                ++zeroNumbers;
        }
        WriteLine((double)positiveNumbers / arr.Length);
        WriteLine((double)negativeNumbers / arr.Length);
        WriteLine((double)zeroNumbers / arr.Length);       
    }
}

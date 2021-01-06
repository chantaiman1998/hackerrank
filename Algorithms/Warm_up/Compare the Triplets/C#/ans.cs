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

class Solution {
/*
    // Complete the compareTriplets function below.
    static List<int> compareTriplets(List<int> a, List<int> b) {


    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        List<int> a = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(aTemp => Convert.ToInt32(aTemp)).ToList();

        List<int> b = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(bTemp => Convert.ToInt32(bTemp)).ToList();

        List<int> result = compareTriplets(a, b);

        textWriter.WriteLine(String.Join(" ", result));

        textWriter.Flush();
        textWriter.Close();
    }
*/
    static void Main(String[] args)
    {
        var tokens_a0 = Console.ReadLine().Split(' ');
        var a0 = int.Parse(tokens_a0[0]);
        var a1 = int.Parse(tokens_a0[1]);
        var a2 = int.Parse(tokens_a0[2]);
        var tokens_b0 = Console.ReadLine().Split(' ');
        var b0 = int.Parse(tokens_b0[0]);
        var b1 = int.Parse(tokens_b0[1]);  
        var b2 = int.Parse(tokens_b0[2]);
        
        int aliceTotalScore = 0;
        int bobTotalScore = 0;
        if (a0 > b0)
           aliceTotalScore++;
        else if (b0 > a0)
           bobTotalScore++;
           
        if (a1 > b1)
           aliceTotalScore++;
        else if (b1 > a1)
           bobTotalScore++;
           
        if (a2 > b2)
           aliceTotalScore++;
        else if (b2 > a2)
           bobTotalScore++;
        Console.WriteLine(aliceTotalScore + " " + bobTotalScore);                                                
    }
}


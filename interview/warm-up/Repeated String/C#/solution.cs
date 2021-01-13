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

    // Complete the repeatedString function below.
    /*
    static long repeatedString(string s, long n) {


    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        long n = Convert.ToInt64(Console.ReadLine());

        long result = repeatedString(s, n);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
    */
    static void Main(String[] args)
    {
        var s = ReadLine();
        var n = long.Parse(Console.ReadLine());
        
        var count = 0L;
        foreach (var letter in s)
        {
            if (letter == 'a')
                count++;
        }
        var possibleStringRepatitions = n / s.Length;
        count *= possibleStringRepatitions;
        var offsetStringLength = n % s.Length;
        for(int i = 0; i<offsetStringLength; i++)
        {
            if (s[i] == 'a')
                count++;
        }
        WriteLine(count);
    }
}

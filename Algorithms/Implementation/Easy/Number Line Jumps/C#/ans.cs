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

    // Complete the kangaroo function below.
    /*
    static string kangaroo(int x1, int v1, int x2, int v2) {


    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string[] x1V1X2V2 = Console.ReadLine().Split(' ');

        int x1 = Convert.ToInt32(x1V1X2V2[0]);

        int v1 = Convert.ToInt32(x1V1X2V2[1]);

        int x2 = Convert.ToInt32(x1V1X2V2[2]);

        int v2 = Convert.ToInt32(x1V1X2V2[3]);

        string result = kangaroo(x1, v1, x2, v2);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
    */
    static void Main(String[] args)
    {
        var tokens_x1 = Console.ReadLine().Split(' ');
        var x1 = Convert.ToInt32(tokens_x1[0]);
        var v1 = Convert.ToInt32(tokens_x1[1]);
        var x2 = Convert.ToInt32(tokens_x1[2]);
        var v2 = Convert.ToInt32(tokens_x1[3]);
        var result = kangaroo(x1, v1, x2, v2);
        WriteLine(result);
    }
    static string kangaroo(int x1, int v1, int x2, int v2)
    {
        var sameLocationPossible = "";
        if (x1 < x2 && v1 < v2)
            sameLocationPossible = "NO";
        else if (x2 < x1 && v2 < v1)
            sameLocationPossible = "NO";
        else if (x2 < x1)
        {
            var numberOfJumps = ((double)(x1-x2)) / (v2 - v1);
            if (numberOfJumps % 1 == 0)
                sameLocationPossible = "YES";
            else
                sameLocationPossible = "NO";
        }
        else
        {
            var numberOfJumps = ((double)(x2 - x1)) /(v1 - v2);
            if (numberOfJumps % 1 == 0)
                sameLocationPossible = "YES";
            else
                sameLocationPossible = "NO";
        }
        return sameLocationPossible;
        } 
    }

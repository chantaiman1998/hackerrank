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
    // Complete the staircase function below.
    static void staircase(int n) {


    }

    static void Main(string[] args) {
        int n = Convert.ToInt32(Console.ReadLine());

        staircase(n);
    }
*/
    static void Main(String[] args)
    {
        var n = int.Parse(ReadLine());
        for(int i = 1; i <= n; i++)
        {
            var spaces = new String(' ', n - i);
            var hashes = new String('#', i);
            WriteLine(spaces + hashes);
        }
    }    
}

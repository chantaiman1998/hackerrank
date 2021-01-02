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

    static void Main(String[] args)
    {
        var n = int.Parse(Console.ReadLine());
        Console.WriteLine(factorial(n));
    }

    // Complete the factorial function below.
    static int factorial(int n) {
        if(n == 1) return 1;
        return factorial(n - 1) * n;
    }
}

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
    static void Main(string[] args) {
        var t = int.Parse(Console.ReadLine());

        for (int tItr = 0; tItr < t; tItr++) {
            var input = Console.ReadLine().Split(' ');
            var n = int.Parse(input[0]);
            var K = int.Parse(input[1]);

            int max = 0;
            for(int j = 1; j < n; j++)
            {
                for(int k = j + 1; k <= n; k++)
                {
                    int h = j & k;
                    if(h < K && max < h) max = h;
                }   
            }
            Console.WriteLine(max);
        }
    }
}

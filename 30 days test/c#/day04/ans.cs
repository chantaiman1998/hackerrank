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
        var n = int.Parse(Console.ReadLine());
        if(n % 2 != 0) {
            Console.WriteLine("Weird");
        }
        else {
            if(n <= 5) {
                Console.WriteLine("Not Weird");
            }
            else if (n <= 20) {
                Console.WriteLine("Weird");
            }
            else {
                Console.WriteLine("Not Weird");
            }
        }
    }
}

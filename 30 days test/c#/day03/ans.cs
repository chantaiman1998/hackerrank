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
        var mealCost = double.Parse(Console.ReadLine());
        var tipPercent = int.Parse(Console.ReadLine());
        var taxPercent = int.Parse(Console.ReadLine());
        var tip = tipPercent * mealCost / 100;
        var tax = taxPercent * mealCost / 100;
        var totalCost = Math.Round(tip + tax + mealCost);
        Console.WriteLine(totalCost);
    }
};

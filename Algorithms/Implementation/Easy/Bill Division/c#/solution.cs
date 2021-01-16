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

    // Complete the bonAppetit function below.
    /*
    static void bonAppetit(List<int> bill, int k, int b) {


    }

    static void Main(string[] args) {
        string[] nk = Console.ReadLine().TrimEnd().Split(' ');

        int n = Convert.ToInt32(nk[0]);

        int k = Convert.ToInt32(nk[1]);

        List<int> bill = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(billTemp => Convert.ToInt32(billTemp)).ToList();

        int b = Convert.ToInt32(Console.ReadLine().Trim());

        bonAppetit(bill, k, b);
    }
    */
    static void Main(String[] args)
    {
        var tokens_n = ReadLine().Split(' ');
        var k = int.Parse(tokens_n[1]);
        var ar_temp = ReadLine().Split(' ');
        var ar = Array.ConvertAll(ar_temp, int.Parse);
        var billChargedToAnna = int.Parse(ReadLine());
        WriteLine(BonAppetit(k, billChargedToAnna, ar));
    }
    
    static string BonAppetit(int allergicFoodIndex, int annasChargedBill, int[] ar)
    {
        var sharedFoodItemsBill = 0;
        for(int i = 0; i < ar.Length; i++)
        {
            if (i != allergicFoodIndex)
                sharedFoodItemsBill += ar[i];
        }
        
        var annasShare = sharedFoodItemsBill / 2;
        return annasChargedBill == annasShare ? "Bon Appetit" : (annasChargedBill - annasShare).ToString();   
    }
}

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

    // Complete the migratoryBirds function below.
/*
    static int migratoryBirds(List<int> arr) {


    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int arrCount = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> arr = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList();

        int result = migratoryBirds(arr);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
*/

    static void Main(String[] args)
    {
        ReadLine();
        var ar_temp = ReadLine().Split(' ');
        var ar = Array.ConvertAll(ar_temp, int.Parse);
        var result = MigratoryBirds(ar);
        WriteLine(result);
    }
    
    static int MigratoryBirds(int[] ar)
    {
        var birdTypeCounts = new int[5];
        for (int i = 0; i < ar.Length; i++)
            birdTypeCounts[ar[i] - 1]++;
        var maxBirdTypeCount = birdTypeCounts[0];
        var maxBirdType = 1;
        
        for(int i = 1; i < 5; i++)
        {
            if(birdTypeCounts[i] > maxBirdTypeCount)
            {
                maxBirdTypeCount = birdTypeCounts[i];
                maxBirdType = i + 1;
            }
            if (birdTypeCounts[i] == maxBirdTypeCount && i + 1 < maxBirdType)
               maxBirdType = i + 1; 
        }
        return maxBirdType;
    }
}

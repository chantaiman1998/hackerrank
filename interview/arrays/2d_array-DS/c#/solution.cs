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
    static int hourglassSum(int[][] arr) {
      List<int> sums = new List<int>();
      for(int y = 1; y < 5; y++)
      {
        for(int x = 1; x < 5; x++)
        {
          int sum = arr[y-1][x-1] + arr[y-1][x] + arr[y-1][x+1] + arr[y][x] + arr[y+1][x-1] + arr[y+1][x] + arr[y+1][x+1];
          sums.Add(sum);
        }
      }
      return sums.Max();
    }
    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);
        int[][] arr = new int[6[];
        for(int i = 0; i < 6; i++) {
          arr[i] = Array.ConvertAll(Console.ReadLine().Split(' '), arrTemp => Convert.ToInt32(arrTemp));
        }
        int result = hourglassSum(arr);
        textWriter.WriteLine(result);
        textWriter.Flush();
        textWriter.Close();
    }
}
        
        
      
      
      
      

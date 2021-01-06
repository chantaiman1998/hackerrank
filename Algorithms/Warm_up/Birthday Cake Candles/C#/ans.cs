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
/*
class Result
{
*/
    /*
     * Complete the 'birthdayCakeCandles' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY candles as parameter.
     */
/*
    public static int birthdayCakeCandles(List<int> candles)
    {

    }

}
*/
class Solution
{
  /*
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int candlesCount = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> candles = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(candlesTemp => Convert.ToInt32(candlesTemp)).ToList();

        int result = Result.birthdayCakeCandles(candles);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
*/
    static void Main(String[] args)
    {
        ReadLine();
        var height_temp = ReadLine().Split(' ');
        var height = Array.ConvertAll(height_temp, int.Parse);
        var maxValue = height[0];
        var maxValueOccurence = 1;
        for(int i = 1; i < height.Length; i++)
        {
            if(height[i]==maxValue)
            {
                maxValueOccurence++;
                continue;
            }
            if(height[i] > maxValue)
            {
                maxValue = height[i];
                maxValueOccurence = 1;
            }
        }
        WriteLine(maxValueOccurence);
    }
}

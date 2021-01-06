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

// class Result
// {

    /*
     * Complete the 'gradingStudents' function below.
     *
     * The function is expected to return an INTEGER_ARRAY.
     * The function accepts INTEGER_ARRAY grades as parameter.
     */
/*
    public static List<int> gradingStudents(List<int> grades)
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

        int gradesCount = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> grades = new List<int>();

        for (int i = 0; i < gradesCount; i++)
        {
            int gradesItem = Convert.ToInt32(Console.ReadLine().Trim());
            grades.Add(gradesItem);
        }

        List<int> result = Result.gradingStudents(grades);

        textWriter.WriteLine(String.Join("\n", result));

        textWriter.Flush();
        textWriter.Close();
    }
    */
    static int[] solve(int[] grades)
    {
        for(int i = 0; i < grades.Length; i++)
        {
            var item = grades[i];
            if(item >= 38)
            {
                var diff = 5 - (item % 5);
                if(diff < 3)
                   grades[i] = item + diff;
            }
        }
        return grades;
    }
    static void Main(String[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine());
        int [] grades = new int[n];
        for (int grades_i = 0; grades_i < n; grades_i++)
            grades[grades_i] = Convert.ToInt32(Console.ReadLine());
        int[] result = solve(grades);
        Console.WriteLine(String.Join("\n", result));
    }
}

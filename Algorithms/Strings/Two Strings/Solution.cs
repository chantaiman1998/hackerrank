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

    /*
class Result
{

     * Complete the 'twoStrings' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. STRING s1
     *  2. STRING s2

    public static string twoStrings(string s1, string s2)
    {

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int q = Convert.ToInt32(Console.ReadLine().Trim());

        for (int qItr = 0; qItr < q; qItr++)
        {
            string s1 = Console.ReadLine();

            string s2 = Console.ReadLine();

            string result = Result.twoStrings(s1, s2);

            textWriter.WriteLine(result);
        }

        textWriter.Flush();
        textWriter.Close();
    }
}
     */

class Solution {
  static void Main(string[] args) {
    var testcaseCount = int.Parse(Console.ReadLine());
      while (textcaseCount > 0)
      {
        var text1nextChar = Console.Read();
        var charMap = new HashSet<int>();
        
        /*
        special handling for hacker rank execution environment.
        for line break they use '\n' whose ascii code is 10
        on my local box I use 13 which is ascii code for '\r'
        */
        
        while(text1nextChar != 10)
        {
          if(!charMap.Contains(textnextChar))
            charMap.Add(text1nextChar);
           text1nextChar = Console.Read();
        }
        var charFound = "NO";
        var text2nextChar = Console.Read();
        
        //special handling for hacker rank execution environment.
        //for end of file they use -1 which is the end of second string of last test case.
                
        while (text2nextChar != 10 && text2nextChar != -1)
        {
            if (charMap.Contains(text2nextChar) && charFound != "YES")
                charFound = "YES";
            text2nextChar = Console.Read();
        }
        
        Console.WriteLine(charFound);
        testcaseCount--;
      }
    }
  }
        


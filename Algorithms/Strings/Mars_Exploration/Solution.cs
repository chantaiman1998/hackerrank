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


     * Complete the 'marsExploration' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts STRING s as parameter.

    public static int marsExploration(string s)
    {

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        int result = Result.marsExploration(s);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
     */
     
class Solution {
    static void Main(String[] args){
          string s = Console.ReadLine().Trim();
          int changedLetters = 0;
          for(int i = 0; i < s.Length; i += 3){
              if(s[i] != 'S')
              {
                  changedLetters++;
              }
              if(s[i+1] != 'O')
              {
                  changedLetters++;
              }
              if(s[i+2] != 'S')
              {
                  changedLetters++;
              }
         }
         Console.WriteLine(changedLetters);
    }
 }
 
 

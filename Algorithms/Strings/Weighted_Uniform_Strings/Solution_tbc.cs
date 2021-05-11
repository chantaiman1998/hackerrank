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


     * Complete the 'weightedUniformStrings' function below.
     *
     * The function is expected to return a STRING_ARRAY.
     * The function accepts following parameters:
     *  1. STRING s
     *  2. INTEGER_ARRAY queries


    public static List<string> weightedUniformStrings(string s, List<int> queries)
    {

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        int queriesCount = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> queries = new List<int>();

        for (int i = 0; i < queriesCount; i++)
        {
            int queriesItem = Convert.ToInt32(Console.ReadLine().Trim());
            queries.Add(queriesItem);
        }

        List<string> result = Result.weightedUniformStrings(s, queries);

        textWriter.WriteLine(String.Join("\n", result));

        textWriter.Flush();
        textWriter.Close();
    }
}
  
  */
     
   class Solution {
      static void Main(String[] args){
          string s = Console.ReadLine();
          int n = Convert.ToInt32(Console.ReadLine());
          var hash = new HashSet<int>();
          int weight = -1;
          int count = 0;
          foreach(var ch in s)
          {
              var w = ch - 'a' + 1;
              if(weight != w)
              {
                  weight = w;
                  count = 0;
              }
              count++;
              hash.Add(weight + count);
          }
          for (int a0 = 0; a0 < n; a0++){
              int x = Convert.ToInt32(Console.ReadLine());
              Console.WriteLine(hash.Contains(x)?"Yes": "No");
          }
      }
  }
          
     
     
          {

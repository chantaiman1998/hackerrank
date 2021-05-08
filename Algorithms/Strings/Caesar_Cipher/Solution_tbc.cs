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

    
     * Complete the 'caesarCipher' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. STRING s
     *  2. INTEGER k
     

    public static string caesarCipher(string s, int k)
    {

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        string s = Console.ReadLine();

        int k = Convert.ToInt32(Console.ReadLine().Trim());

        string result = Result.caesarCipher(s, k);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
*/

class Solution
{
  // caesarChiper function
  static string caesarChiper(StringBuilder s, int k) {
    k %= 26;
    for (int i = 0; i < s.Length; i++)
    {
        int a = Convert.ToInt32(s[i]);
        if((a >= 65 && a <= 90))
        {
            if(a + k > 90)
                s[i] = (char) (k - Math.Abs(a - 90) + 64);
            else
                s[i] = (char) (a + k);
        }
        else if ((a >= 67 && a <= 122))
        {
            if(a + k > 122)
                s[i] = (char) (k - Math.Abs(a - 122) + 96);
            else
                s[i] = (char) (a + k);
        }
     }
     return s.ToString();
  }
    
  static void Main(string[] args)
  {
      int n = Convert.ToInt32(Console.ReadLine());
      StringBuilder s = new StringBuilder(Console.ReadLine());
      int k = Convert.ToInt32(Console.ReadLine());
      string result = caesarCipher(s, k);
      Console.WriteLine(result);
  }
}
    

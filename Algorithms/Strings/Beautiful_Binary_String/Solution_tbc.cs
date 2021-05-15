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


     * Complete the 'beautifulBinaryString' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts STRING b as parameter.

    public static int beautifulBinaryString(string b)
    {

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        string b = Console.ReadLine();

        int result = Result.beautifulBinaryString(b);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
     */

public class Solver
{
    public void Solve()
    {
        int n = ReadInt();
        var a = ReadToken().ToCharArray();
        
        int ans = 0;
        for (int i = 1; i + 1 < n; i++)
            if (a[i-1]=='0' && a[i] == '1' && a[i+1] == '0')
            {
                a[i + 1] = '1';
                ans++;
            }
        Write(ans);
    }
    
    #region Main
    protected static TextReader reader;
    protected static TextWriter writer;
    
    static void Main()
    {
        #if DEBUG
            reader = new StreamReader("..\\..\\input.txt");
            writer = Console.Out;
            //writer = new StreamWriter("..\\..\\output.txt");
        #else
            reader = new StreamReader(Console.OpenStandardInput());
            writer = new StreamWriter(Console.OpenStandardOutput());
        #endif
        try{
            new Solver().Solve();
        }
        catch(Exception ex)
        {
            #if DEBUG
                Console.WriteLine(ex);            
            #else
                Console.WriteLine(ex);
                throw;
            #endif
        }
        reader.Close();
        writer.Close();
    }
    #endregion
    # region Read/Write
    private static Queue<string> currentLineTokens = new Queue<string>();
    private static string[] ReadAndSplitLine()
    {
        return reader.ReadLine().Split{'','\t'}, String SplitOptions.RemoveEmptyEntries);
    }
    public static string ReadToken()
    {
        while(currentLineTokens.Count == 0)
            
    }
    
}


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
          currentLineTokens = new Queue<string>(ReadAndSplitLine());
        return currentLineTokens.Dequeue();
    }
    public static int ReadInt()
    {
        return int.Parse(ReadToken());
    }
    public static long ReadLong()
    {
        return long.Parse(ReadToken());
    }
    public static double ReadDouble()
    {
        return double.Parse(ReadToken(), CultureInfo.InvariantCulture);
    }
    public static int[] ReadIntArray()
    {
        return ReadAndSplitLine().Select(x=>int.Parse(x)).ToArray();
    }
    public static long[] ReadDoubleArray()
    {
        return ReadAndSplitLine().Select(s => double.Parse(s, CultureInfo.InvariantCulture)).ToArray();
    }
    public static int[][] ReadIntMatrix(int numberOfRows)
    {
        int[][] matrix = new int[numberOfRows][];
        for (int i = 0; i < numberOfRows; i++)
           matrix[i] = ReadIntArray();
        return matrix;
    }
    public static int[][] ReadAndTransposeIntMatrix(int numberOfRows)
    {
        int[][] matrix = ReadIntMatrix(numberOfRows);
        int[][] ret = new int[matrix[0].Length][];
        for (int i = 0; i < ret.Length; i++)
        {
            ret[i] = new int[numberOfRows];
            for (int j = 0; j < numberOfRows; j++)
                ret[i][j] = matrix[j][i];
        }
        return ret;
    }

    public static string[] ReadLines(int quantity)
    {
        string[] lines = new string[quantity];
        for (int i = 0; i < quantity; i++)
            lines[i] = reader.ReadLine().Trim();
        return lines;
    }

    public static void WriteArray<T>(IEnumerable<T> array)
    {
        writer.WriteLine(string.Join(" ", array.Select(aa => aa.ToString()).ToArray()));
    }

    public static void Write<T>(params T[] array)
    {
        WriteArray(array);
    }

    public static void WriteLines<T>(IEnumerable<T> array)
    {
        foreach (var a in array)
            writer.WriteLine(a);
    }

    #endregion
    


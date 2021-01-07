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
/*
    // Complete the breakingRecords function below.
    static int[] breakingRecords(int[] scores) {


    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine());

        int[] scores = Array.ConvertAll(Console.ReadLine().Split(' '), scoresTemp => Convert.ToInt32(scoresTemp))
        ;
        int[] result = breakingRecords(scores);

        textWriter.WriteLine(string.Join(" ", result));

        textWriter.Flush();
        textWriter.Close();
    }
*/
    static int[] getRecord(int[] gameScores)
    {
        var minRecordBroken = 0;
        var maxRecordBroken = 0;
        if(gameScores.Length > 1)
        {
            var minRecord = gameScores[0];
            var maxRecord = gameScores[0];
            for(int i = 1; i < gameScores.Length; i++)
            {
                if(gameScores[i] < minRecord)
                {
                    minRecord = gameScores[i];
                    minRecordBroken++;
                }
                if(gameScores[i] > maxRecord)
                {
                    maxRecord = gameScores[i];
                    maxRecordBroken++;
                }                
            }
        }        
        return new int[] { maxRecordBroken, minRecordBroken};
    }
    static void Main(String[] args)
    {
        Console.ReadLine();
        var s_temp = Console.ReadLine().Split(' ');
        var gameScores = Array.ConvertAll(s_temp, Int32.Parse);
        var result = getRecord(gameScores);
        Console.WriteLine(String.Join(" ", result));
    }
}

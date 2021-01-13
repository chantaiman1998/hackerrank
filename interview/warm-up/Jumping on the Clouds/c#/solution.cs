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

class Solution {

    // Complete the jumpingOnClouds function below.
    /*
    static int jumpingOnClouds(int[] c) {


    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine());

        int[] c = Array.ConvertAll(Console.ReadLine().Split(' '), cTemp => Convert.ToInt32(cTemp))
        ;
        int result = jumpingOnClouds(c);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
    */
    /*
    static void Main(String[] args)
    {
        var userInput = Console.ReadLine().Split(' ');
        var numberOfClouds = int.Parse(userInput[0]);
        var jumpSize = int.Parse(userInput[1]);
        
        userInput = Console.ReadLine().Split(' ');
        var clouds = new int[numberOfClouds];
        
        for (int i = 0; i < numberOfClouds; i++)
            clouds[i] = int.Parse(userInput[i]);
        
        var totalEnergyRemaining = 100;
        var currentCloud = 0;
        while(true)
        {
            currentCloud = (currentCloud + jumpSize) % numberOfClouds;
            if (clouds[currentCloud] == 1)
                totalEnergyRemaining -= 3;
            else
                totalEnergyRemaining--;
            
            if (currentCloud == 0)
                break;
        }
        Console.WriteLine(totalEnergyRemaining);
    }
    */
    
    static void Main(String[] args)
    {
        ReadLine();
        var c_temp = ReadLine().Split(' ');
        var clouds = Array.ConvertAll(c_temp, int.Parse);
        var emmasPosition = 0;
        var jumpCount = 0;
        while (true)
        {
            if(emmasPosition + 2 <= clouds.Length - 1 && clouds[emmasPosition + 2] == 0)
                emmasPosition = emmasPosition + 2;
            else
                emmasPosition++;
            
            jumpCount++;
            if (emmasPosition == clouds.Length - 1)
                break;
        }
        WriteLine(jumpCount);
    }
}

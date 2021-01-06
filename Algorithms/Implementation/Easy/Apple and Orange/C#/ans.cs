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
    // Complete the countApplesAndOranges function below.
    static void countApplesAndOranges(int s, int t, int a, int b, int[] apples, int[] oranges) {


    }

    static void Main(string[] args) {
        string[] st = Console.ReadLine().Split(' ');

        int s = Convert.ToInt32(st[0]);

        int t = Convert.ToInt32(st[1]);

        string[] ab = Console.ReadLine().Split(' ');

        int a = Convert.ToInt32(ab[0]);

        int b = Convert.ToInt32(ab[1]);

        string[] mn = Console.ReadLine().Split(' ');

        int m = Convert.ToInt32(mn[0]);

        int n = Convert.ToInt32(mn[1]);

        int[] apples = Array.ConvertAll(Console.ReadLine().Split(' '), applesTemp => Convert.ToInt32(applesTemp))
        ;

        int[] oranges = Array.ConvertAll(Console.ReadLine().Split(' '), orangesTemp => Convert.ToInt32(orangesTemp))
        ;
        countApplesAndOranges(s, t, a, b, apples, oranges);
    }
    */
    static void Main(String[] args)
    {
        var applesFallingOnHouse = 0;
        var orangesFallingOnHouse = 0;
        
        var tokens_s = Console.ReadLine().Split(' ');
        var houseStart = int.Parse(tokens_s[0]);
        var houseEnd = int.Parse(tokens_s[1]);
        
        var tokens_a = Console.ReadLine().Split(' ');
        var appleTreePosition = int.Parse(tokens_a[0]);
        var OrangeTreePosition = int.Parse(tokens_a[1]);
        
        Console.ReadLine();
        
        var apple_temp = Console.ReadLine().Split(' ');
        var fallingApples = Array.ConvertAll(apple_temp, Int32.Parse);
        var orange_temp = Console.ReadLine().Split(' ');
        var fallingOranges = Array.ConvertAll(orange_temp, Int32.Parse);
        
        foreach (var fallingApple in fallingApples)
        {
            var fallingApplePosition = appleTreePosition + fallingApple;
            if(fallingApplePosition >= houseStart && fallingApplePosition <= houseEnd)
                ++applesFallingOnHouse;
        }
        
        foreach (var fallingOrange in fallingOranges)
        {
            var fallingOrangePosition = OrangeTreePosition + fallingOrange;
            if(fallingOrangePosition >= houseStart && fallingOrangePosition <= houseEnd)
                ++orangesFallingOnHouse;
        }
    Console.WriteLine(applesFallingOnHouse);
    Console.WriteLine(orangesFallingOnHouse);    
}
}

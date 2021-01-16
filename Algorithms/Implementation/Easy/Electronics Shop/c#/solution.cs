using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution {

    /*
     * Complete the getMoneySpent function below.
     */
     
    //static int getMoneySpent(int[] keyboards, int[] drives, int b) {
        /*
         * Write your code here.
         */
/*
    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string[] bnm = Console.ReadLine().Split(' ');

        int b = Convert.ToInt32(bnm[0]);

        int n = Convert.ToInt32(bnm[1]);

        int m = Convert.ToInt32(bnm[2]);

        int[] keyboards = Array.ConvertAll(Console.ReadLine().Split(' '), keyboardsTemp => Convert.ToInt32(keyboardsTemp))
        ;

        int[] drives = Array.ConvertAll(Console.ReadLine().Split(' '), drivesTemp => Convert.ToInt32(drivesTemp))
        ;
        /*
         * The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
         */
/*
        int moneySpent = getMoneySpent(keyboards, drives, b);

        textWriter.WriteLine(moneySpent);

        textWriter.Flush();
        textWriter.Close();
    }
*/
    static int getMoneySpent(int[] keyboards, int[] drives, int totalMoneyAvailable)
    {
        var sortedKeyboardPrices = from keyboard in keyboards
        orderby keyboard descending
        select keyboard;
        
        var sortedDrivePrices = from drive in drives
                                orderby drive ascending
                                select drive;
        var maxMoneySpendable = -1;
        
        foreach(var keyboard in sortedKeyboardPrices)
        {
            foreach(var drive in sortedDrivePrices)
            {
                if(keyboard + drive <= totalMoneyAvailable)
                {
                    if(keyboard + drive > maxMoneySpendable)
                    maxMoneySpendable = keyboard + drive;
                }
                else
                    break;
            }
        }
        return maxMoneySpendable;
    }
    
    static void Main(String[] args) {
        string[] tokens_s = Console.ReadLine().Split(' ');
        int s = Convert.ToInt32(tokens_s[0]);
        string[] keyboards_temp = Console.ReadLine().Split(' ');
        int[] keyboards = Array.ConvertAll(keyboards_temp,Int32.Parse);
        string[] drives_temp = Console.ReadLine().Split(' ');
        int[] drives = Array.ConvertAll(drives_temp, Int32.Parse);
        int moneySpent = getMoneySpent(keyboards, drives,s);
        Console.WriteLine(moneySpent);
    }

}

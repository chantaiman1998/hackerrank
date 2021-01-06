using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using static System.Console;

class Solution {

    /*
     * Complete the timeConversion function below.
     */
    // static string timeConversion(string s) {
        /*
         * Write your code here.
         */

    // }

    static void Main(string[] args) {
        /*
        TextWriter tw = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        string result = timeConversion(s);

        tw.WriteLine(result);

        tw.Flush();
        tw.Close();
    }
    */
    var time = ReadLine();
    var amOrPm = time.Substring(8);
    var hourComponent = time.Substring(0, 2);
    var remainingTimeComponent = time.Substring(2, 6);
    if(amOrPm == "AM" && hourComponent == "12")
    {
        hourComponent = "00";
    }
    else if(amOrPm == "PM")
    {
        var numericHourComponent = int.Parse(hourComponent);
        if(numericHourComponent != 12)
        {
            hourComponent = Convert.ToString(12 + numericHourComponent);
        }
    }
    WriteLine(hourComponent + remainingTimeComponent);   
    }
}

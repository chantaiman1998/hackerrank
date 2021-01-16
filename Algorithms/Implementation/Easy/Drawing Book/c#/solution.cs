using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution {
    /*
     * Complete the pageCount function below.
     */
    // static int pageCount(int n, int p) {
        /*
         * Write your code here.
         */
/*
    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine());

        int p = Convert.ToInt32(Console.ReadLine());

        int result = pageCount(n, p);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
*/
    static int solve(int totalPagesInBook, int targetPageNumber){
        var minimumPagesToTurn = 0;
        
        if (targetPageNumber == 1 || targetPageNumber == totalPagesInBook)
           return minimumPagesToTurn;
        
        if (totalPagesInBook % 2 != 0 && targetPageNumber == totalPagesInBook - 1)
           return minimumPagesToTurn;
           
        if(totalPagesInBook % 2 == 0)
        {
            if(targetPageNumber <=totalPagesInBook / 2)
            {
                minimumPagesToTurn = targetPageNumber / 2;
            }
            else
            {
                double d = ((double)(totalPagesInBook - targetPageNumber)) / 2;
                minimumPagesToTurn = (int)Math.Ceiling(d);
            }
        }   
        else
        {
        if (targetPageNumber == (totalPagesInBook/2)+1 && totalPagesInBook % 4 == 3)
        {
           minimumPagesToTurn = (totalPagesInBook - targetPageNumber) / 2; 
        }
        else
        {
            if(targetPageNumber <= ((totalPagesInBook/2) + 1))
            {
                minimumPagesToTurn = targetPageNumber / 2;
            }
            else
            {
                minimumPagesToTurn = (totalPagesInBook - targetPageNumber) / 2;
            }
        }
    }
    return minimumPagesToTurn;
}
    static void Main(String[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        int p = Convert.ToInt32(Console.ReadLine());
        int result = solve(n, p);
        Console.WriteLine(result);        
    }
}

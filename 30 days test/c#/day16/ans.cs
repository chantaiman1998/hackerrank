using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        // string S = Console.ReadLine();
        var str = Console.ReadLine();
        try {
            int num = int.Parse(str);
            Console.WriteLine(num);
        }
        catch(Exception)
        {
            Console.WriteLine("Bad String");
        }
    }
}

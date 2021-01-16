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

    // Complete the catAndMouse function below.
    /*
    static string catAndMouse(int x, int y, int z) {


    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int q = Convert.ToInt32(Console.ReadLine());

        for (int qItr = 0; qItr < q; qItr++) {
            string[] xyz = Console.ReadLine().Split(' ');

            int x = Convert.ToInt32(xyz[0]);

            int y = Convert.ToInt32(xyz[1]);

            int z = Convert.ToInt32(xyz[2]);

            string result = catAndMouse(x, y, z);

            textWriter.WriteLine(result);
        }

        textWriter.Flush();
        textWriter.Close();
    }
    */
    static void Main(String[] args)
    {
        var output = "Mouse C";
            var q = int.Parse(Console.ReadLine());
            for(int a0 = 0; a0 < q; a0++)
            {
                var tokens_x = Console.ReadLine().Split(' ');
                var catALocation = int.Parse(tokens_x[0]);
                var catBLocation = int.Parse(tokens_x[1]);
                var mouseLocation = int.Parse(tokens_x[2]);
                if(catALocation < catBLocation)
                {
                    if(catBLocation <= mouseLocation)
                    {
                        output = "Cat B";
                    }
                    else
                    {
                        if(mouseLocation > catALocation)
                        {
                            if (mouseLocation - catALocation > catBLocation - mouseLocation)
                                output = "Cat B";
                            else if(mouseLocation - catALocation < catBLocation - mouseLocation)
                                output = "Cat A";
                            else
                                output = "Mouse C";
                        }
                        else
                        {
                            output = "Cat A";
                        }
                    }
                }
                else if (catALocation > catBLocation)
                {
                    if(catALocation <= mouseLocation)
                    {
                        output = "Cat A";
                    }
                    else
                    {
                        if(mouseLocation > catBLocation)
                        {
                            if (catALocation - mouseLocation > mouseLocation - catBLocation)
                               output = "Cat B";
                            else if (catALocation - mouseLocation < mouseLocation - catBLocation)
                               output = "Cat A"; 
                            else
                               output = "Mouse C";
                        }
                        else
                        {
                            output = "Cat B";
                        }
                    }
                }
                else
                {
                    output = "Mouse C";
                }
                Console.WriteLine(output);
            }
    }
}



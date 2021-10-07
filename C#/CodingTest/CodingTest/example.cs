using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace CodingTest
{
    class Solution_10718
    {
        public static void Solution()
        {
            System.Console.WriteLine("강한친구 대한육군\n강한친구 대한육군");
        }
    }

    class Solution_10171
    {
        public static void Solution()
        {
            System.Console.Write(@"\    /\
 )  ( ')
(  /  )
 \(__)|");
        }
    }

    class Solution_10172
    {
        public static void Solution()
        {
            System.Console.WriteLine(@"|\_/|
|q p|   /}
( 0 )""""""\
|""^""`    |
||_/=\\__|");
        }
    }

    class Solution_1000
    {
        public static void Solution()
        {
            var x = ReadLine().Split(); Write(int.Parse(x[0]) + int.Parse(x[1]));
            /*
            int A, B;
            int.TryParse(System.Console.ReadLine(), out A);
            int.TryParse(System.Console.ReadLine(), out B);
            System.Console.WriteLine("{0}", A + B);
            */
        }
    }

    class Solution_1001
    {
        public static void Solution()
        {
            var x = ReadLine().Split(); Write(int.Parse(x[0]) - int.Parse(x[1]));
        }
    }

    class Solution_1002
    {
        public static void Solution()
        {
            var x = ReadLine().Split(); Write(int.Parse(x[0])*int.Parse(x[1]));
        }
    }

    class Solution_1003
    {
        public static void Solution()
        {
            var x = ReadLine().Split(); Write( (double)int.Parse(x[0]) / int.Parse(x[1]));
        }
    }

    class Solution_10869
    {
        public static void Solution()
        {
            var x = ReadLine().Split();
            WriteLine(int.Parse(x[0]) + int.Parse(x[1]));
            WriteLine(int.Parse(x[0]) - int.Parse(x[1]));
            WriteLine(int.Parse(x[0]) * int.Parse(x[1]));
            WriteLine(int.Parse(x[0]) / int.Parse(x[1]));
            WriteLine(int.Parse(x[0]) % int.Parse(x[1]));
        }
    }

    class Solution_11021
    {
        public static void Solution()
        {
            int num = Int32.Parse(ReadLine());

            for (int i = 1; i <= num; i++)
            {
                string[] strArray = ReadLine().Split();
                WriteLine($"Case #{i}: {Int32.Parse(strArray[0]) + Int32.Parse(strArray[1])}");
            }
        }
    }
}

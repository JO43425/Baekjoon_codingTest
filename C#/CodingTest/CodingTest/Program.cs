using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CodingTest
{
    [System.Serializable]
    public class C
    {
        public int a;
    }

    [System.Serializable]
    public class B
    {
        public C c;
    }

    [System.Serializable]
    public class A
    {
        public B _b;
        public C _B
        { get
            {
                return _b?.c;
            }
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            A a = new A { _b = null };
            C c = a._B;

            if (c == null)
            {
                System.Console.WriteLine("null");
            }
        }
    }
}

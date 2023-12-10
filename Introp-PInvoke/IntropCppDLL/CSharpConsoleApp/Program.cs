using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpConsoleApp
{
    class Program
    {
        [DllImport("IntropCppDLL.dll", CallingConvention = CallingConvention.Cdecl, SetLastError = true)]
        static extern int TestNadim([MarshalAs(UnmanagedType.LPStr)] string data);
        static void Main(string[] args)
        {
            int x = TestNadim("Hello Nadim");
        }
    }
}

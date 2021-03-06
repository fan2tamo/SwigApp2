using System.Diagnostics;

namespace CsharpApp
{

    public class MyCallback : CallbackBase
    {
        public override void Callback(string str, FloatVector fVect)
        {
            int i = 0;
            Debug.WriteLine($"callback : str = {str}");
            foreach (float value in fVect)
            {
                Debug.WriteLine($"callback :  [{i}] :value = {value}");
                i += 1;
            }
        }
    }        
        
    class Program
    {
        static void Main(string[] args)
        {
             MyCallback myCallbackObj = new MyCallback();
            CppClass instance = MyDLL.CreateInstance();

            string str = "テストHello World!";
            instance.SetString(str);
            Debug.WriteLine($"str = {instance.GetString()}");

            FloatVector v = new FloatVector();
            v.Add((float)-0.1);
            v.Add((float)-1);
            v.Add((float)-10);
            int i = 0;
            instance.SetVector(v);
            FloatVector buf = instance.GetVector();
            foreach (float value in buf)
            {
                Debug.WriteLine($"[{i}] :value = {value}");
                i += 1;
            }

            instance.SetCallback(myCallbackObj);
            instance.ExeCallback();
        }
    }
}


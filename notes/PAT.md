1. to_string()函数

   将数值转化为字符串，返回对应的字符串。

   函数原型：

   ```c++
   string to_string (int val);
   string to_string (long val);
   string to_string (long long val);
   string to_string (unsigned val);
   string to_string (unsigned long val);
   string to_string (unsigned long long val);
   string to_string (float val);
   string to_string (double val);
   string to_string (long double val);
   ```

   使用：

   ```c++
   int a, b;
   cin >> a >> b;
   string c = to_string(a + b);
   ```

2. 输入与输出的使用

   - `scanf`和`printf`

     `scanf("格式控制", 变量地址)`

     例如：`scanf("%d", &n);`

     `printf("格式控制", 变量名称);`

     例如：`scanf("%f", f);`

     **注：输出时前面不用加&；**

     常见数据类型变量的格式符：

     | 变量类型 | 格式符                  |
     | -------- | ----------------------- |
     | `int`    | `%d`                    |
     | `float`  | `%f`                    |
     | `double` | `输入：%lf    输出：%f` |
     | `char`   | `%c`                    |
     | `字符串` | `%s`                    |

   - `cin`和`cout`

   - 两者的使用：

     - 有格式控制的输出使用`printf`较好；

       例如：Please be accurate to 1 decimal place.保留一位小数：`printf("%.1f", f);`

     - `scanf比cin快`；


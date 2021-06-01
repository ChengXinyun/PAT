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

   将数字字符转化为数字：`str[i] - '0';`与字母一样的思路；

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

   - `getline`:输入一行字符串，可以包含空格；但是假如之前用`scanf`输入时，记得在`scanf`里面加入`\n`换行;

     ```c++
  scanf("%d\n", &n);
     getline(cin, str);
  ```
   
   - 两者的使用：
   
     - 有格式控制的输出使用`printf`较好；
   
       例如：Please be accurate to 1 decimal place.保留一位小数：`printf("%.1f", f);`
   
     - `scanf比cin快`；
     
     - 最好都使用`scanf`输入吧，1065我用`cin`输入`long long`类型的数提交之后样例有的过不了；
     
     - `scanf`输入的时候不要忘记&！！！！！！！！！；
     
     - 输入字符串的时候使用`cin`输入；
     
     - 格式化输入的时候使用`scanf`较为方便，例如："`HH:MM:SS`"；
   
3. `double和float`

4. 循环输出的时候，次数为n次，如果输出的需要输出序号，例如#1，#2....，可以使用for循环；其他情况可以使用while循环；

5. 变量的声明：作用域在哪一块，就在那一块声明变量；

6. 使用辅助数组时，确定它的范围；相加还是原来数组大小，乘积会扩大一倍；

7. %和/的使用，+1，-1，对边界一定要仔细检查；

8. 简化问题，模拟题不要一直按着题目，死板的一直写，可以简化，例如1042，可以对编号进行打乱，然后编号对应相应的牌即可；

9. 超时的话，想一些简便的计算方法；

10. 标准库的使用

   - vector的使用；

     -  vector的初始化：

     ```c++
     vector()//创建一个空vector
     vector(int nSize)//创建一个vector,元素个数为nSize，初始化默认值为0
     vector(int nSize,const t& t)//创建一个vector，元素个数为nSize,且值均为t
     ```

   - swap()函数，min()函数 

11. 比较大小：最大值与最小值

    头文件：`#include <climits>`

    使用： `INT_MIN，INT_MAX`；

    不用将第一个与之后的比较，减少循环之前的数据输入，全部放到循环里面去做。最小值设为INT_MAX，最大值设为INT_MIN；

12. 判断字符类型函数：

    ```c++
    isalpha();//判断一个字符是否为字母；
    isalnum();//判断一个字符是否为数字或字母；
    islower();//a~z;
    isupper();//A~Z;
    tolower();//把字符串都转化为小写字母；
    toupper();//把字符串都转化为大写字母；
    ```

13. ```c++
    #include <algorithm>
    reverse(str.begin(), str.end());//倒置字符串；
    ```

14. `substr(start, length);`分割字符串；从string的start位置开始提取字符串 ，length:要提取字符串的长度

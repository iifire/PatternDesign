状态模式

初始 num：1
调用状态1

状态1 : 
   while(true) {
      num *= 2;
      if (num > 16) {
         调用状态2
      }
   }
  
  
状态2 ：
   while(true) {
      num += 3;
      if (num > 40) {
         调用状态3
      }
   } 
   
状态3：
   num /= 10;
   调用状态1
   
https://www.pianshen.com/article/5268106309/
https://www.jb51.net/article/80713.htm
这些都需要循环引用。我这个不需要
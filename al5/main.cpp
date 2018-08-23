#include <string>
using  namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int length=s.size();
        int flag=-1;//表示奇偶
        int center=-1;//中心位置
        int count=0;//长度
        int maxcount=0;
        int tempmax=0;//当前的最长长度
        int max=0;//段落中最长的长度
        int node=0;//可能的最长的距离
        char *str=new char [length];
        for (int k = 0; k < length ; ++k) {
            str[k]=s[k];
        }
        for (int i = 0; i <length ; ++i) {
            count=0;
            if((i)>(length-i-1)) node=length-i-1;
            else node = i;
            for (int j = 1; j <=node ; ++j) {
                if(str[i-j]==str[i+j]){
                    count++;
                    tempmax=1+2*count;
                    if(tempmax>=max){
                        max=tempmax;
                        flag=1;//表示奇数
                        center=i;
                        maxcount=count;
                    }
                } else break;
            }//奇数个
            //if(s.size()%2==1) node--;
            count=0;
            for (int m = 0; m <= node; ++m) {
                if(str[i-m]==str[i+m+1]){
                    count++;
                    tempmax=2*count;
                    if(tempmax>=max){
                        max=tempmax;
                        flag=0;
                        center=i;
                        maxcount=count;
                    }
                } else break;
            }//偶数个
        }
        if(flag==1){
            string result;
            char *res=new char[max];
            for (int i = 0; i < max; ++i) {
                res[i]=str[center-maxcount+i];
            }
            result=res;
            return result;
        } else if(flag==0){
            string result;
            char *res=new char[max];
            for (int i = 0; i < max; ++i) {
                res[i]=str[center-maxcount+1+i];
            }
            result=res;
            return result;

        } else{
            string result;
            char res[1];
            res[0]=str[length-1];
            result=res;
            return result;


        }

    }
};
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    //part 1：计算输入数字每一位的和
    int sum = 0;
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        switch (ch)
        {
        case '1':
            sum += 1;
            break;
        case '2':
            sum += 2;
            break;
        case '3':
            sum += 3;
            break;
        case '4':
            sum += 4;
            break;
        case '5':
            sum += 5;
            break;
        case '6':
            sum += 6;
            break;
        case '7':
            sum += 7;
            break;
        case '8':
            sum += 8;
            break;
        case '9':
            sum += 9;
            break;
        default:
            sum += 0;
            break;
        }
        ch = getchar();
    }
 
 
 
 
    //part 2：难点：char和指针的使用
 
    //sum每一位对应翻译成拼音，存入指针数组中，但是这是逆序！
    char *result[100];
    int digit_count = 0;
    while(sum != 0)
    {
        int digit = sum % 10;
        switch (digit)
        {
        case 0:
            result[digit_count] = "ling";
            break;
        case 1:
            result[digit_count] = "yi";
            break;
        case 2:
            result[digit_count] = "er";
            break;
        case 3:
            result[digit_count] = "san";
            break;
        case 4:
            result[digit_count] = "si";
            break;
        case 5:
            result[digit_count] = "wu";
            break;
        case 6:
            result[digit_count] = "liu";
            break;
        case 7:
            result[digit_count] = "qi";
            break;
        case 8:
            result[digit_count] = "ba";
            break;
        case 9:
            result[digit_count] = "jiu";
            break;
        default:
            break;
        }
        sum = sum / 10;
        digit_count++;
    }
 
 
 
    //逆序输出指针数组中的内容，注意加空格，以及最后一个拼音后面不加空格
    char result_string[100] = "";
    for (int i = digit_count - 1; i >= 0; i--)
    {
        if(i==0)
            strcat(result_string, result[0]);
            
        else
        {
            char p[10];
            strcpy(p, result[i]);
            strcat(p, " ");
            strcat(result_string, p);
        }
    }
 
    printf("%s", result_string);
 
    return 0;
}
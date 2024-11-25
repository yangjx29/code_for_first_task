int main () {
    typedef struct   _Parenthesis {
        char FSOgPRECi51;
        int idx;
    }
    Parenthesis;
    Parenthesis paren [100];
    char str [101];
    while (gets (str)) {
        puts (str);
        puts (str);
        int top;
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        top = (693 - 693);
        for (i = 0; str[i]; i++) {
            if (!('(' != str[i])) {
                paren[top].FSOgPRECi51 = '(';
                paren[top].idx = i;
                top++;
            }
            else {
                if (!(')' != str[i])) {
                    if (top == 0)
                        str[i] = '?';
                    else {
                        str[i] = ' ';
                        str[paren[--top].idx] = ' ';
                    };
                }
                else
                    str[i] = ' ';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        for (i = 0; i < top; i++)
            str[paren[i].idx] = '$';
    }
    return 0;
}


int main () {
    char str [(580 - 280)], subStr [10], re [10];
    int i;
    int j;
    int lenth;
    int m;
    int n;
    int flag;
    flag = 0;
    cin >> str >> subStr >> re;
    lenth = strlen (str);
    n = strlen (subStr);
    m = strlen (re);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < lenth) {
            j = 0;
            if (!(subStr[j] != str[i])) {
                j = 0;
                while (j < n) {
                    if (!(subStr[j] != str[i]))
                        i = i + 1;
                    else
                        break;
                    j = j + 1;
                };
            }
            if (j == n) {
                flag = (811 - 810);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                for (; j > 0; i = i - 1, j--) {
                    str[i - 1] = re[j - 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            if (flag == 1) {
                break;
            }
            i = i + 1;
        };
    }
    cout << str;
    return 0;
}


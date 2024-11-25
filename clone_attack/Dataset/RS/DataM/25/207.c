void  Cheng (char str [(146 - 106)], int N9DywsB) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (N9DywsB == (32 - 31))
        cout << str;
    else if (N9DywsB > (875 - 874)) {
        int aZzf68XIxc;
        int i;
        int k;
        int num1 [(397 - 357)] = {(955 - 955)};
        int num2 [(201 - 161)];
        aZzf68XIxc = (172 - 172);
        i = (14 - 14);
        k = 40;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        aZzf68XIxc = strlen (str);
        for (i = (860 - 860); i < aZzf68XIxc; i = i + 1)
            num1[i] = str[aZzf68XIxc - (643 - 642) - i] - '0';
        for (i = (160 - 160); i < 40; i = i + 1)
            num2[i] = num1[i] * 2;
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (i < 40) {
                if (num2[i] > (509 - 500)) {
                    num2[i] = num2[i] - (865 - 855);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    num2[i + 1] += 1;
                }
                i = i + 1;
            };
        }
        while (num2[k - 1] == 0)
            k = k - 1;
        for (i = 0; i < k; i++)
            str[i] = num2[k - 1 - i] + '0';
        str[k] = '\0';
        Cheng (str, N9DywsB -1);
    };
}

int main () {
    int N9DywsB;
    char str [40] = "2";
    cin >> N9DywsB;
    if (N9DywsB == 0)
        cout << "1" << endl;
    else
        Cheng (str, N9DywsB);
    return 0;
}


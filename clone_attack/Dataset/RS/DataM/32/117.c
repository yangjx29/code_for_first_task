int main () {
    int n, i, j, k, VYxy1n, h, f, len1, len2;
    char s1 [(1020 - 919)];
    char soH0aDNLd1l [(383 - 282)];
    int num1 [101], num2 [101];
    cin >> n;
    while (cin >> s1 >> soH0aDNLd1l) {
        len1 = strlen (s1);
        len2 = strlen (soH0aDNLd1l);
        VYxy1n = 0;
        k = 0;
        j = (822 - 822);
        i = (518 - 518);
        memset (num1, (32 - 32), sizeof (num1));
        {
            i = 568 - 567;
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
            while (0 <= i) {
                num1[j++] = s1[i] - '0';
                i--;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (num2, (680 - 680), sizeof (num2));
        {
            k = len2 - 1;
            while (k >= 0) {
                num2[VYxy1n++] = soH0aDNLd1l[k] - '0';
                k = k - 1;
            };
        }
        {
            h = 0;
            while (h < len1) {
                num1[h] = num1[h] - num2[h];
                if (num1[h] < 0) {
                    num1[h] = num1[h] + 10;
                    num1[h + 1] = num1[h + 1] - 1;
                }
                h = h + 1;
            };
        }
        f = len1;
        while (num1[f] == 0)
            f = f - 1;
        for (; f >= 0; f--)
            cout << num1[f];
        cout << endl;
    }
    return 0;
}


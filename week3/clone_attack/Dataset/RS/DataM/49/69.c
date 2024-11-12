int main () {
    char str [(1373 - 873)];
    int i, j, k;
    int nhuiwen, len;
    cin >> str;
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
    len = strlen (str);
    {
        nhuiwen = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len >= nhuiwen) {
            char buf1 [500] = {'\0'}, buf2 [500] = {'\0'};
            {
                i = 0;
                while (len > i + nhuiwen - 1) {
                    int n;
                    int m;
                    n = nhuiwen;
                    m = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    {
                        j = i;
                        while (i + nhuiwen - 1 >= j) {
                            buf1[--n] = str[j];
                            buf2[m++] = str[j];
                            j++;
                        };
                    }
                    i++;
                    buf1[nhuiwen] = '\0';
                    buf2[nhuiwen] = '\0';
                    if (strcmp (buf1, buf2) == 0) {
                        {
                            k = 0;
                            while (k < nhuiwen) {
                                cout << buf1[k];
                                k++;
                            };
                        }
                        cout << endl;
                    };
                };
            }
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
            nhuiwen = nhuiwen + 1;
        };
    }
    return 0;
}


int main () {
    char a [100000];
    int gzpnLi;
    int i;
    int j;
    int flag;
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
    int len;
    getchar ();
    scanf ("%d", &gzpnLi);
    for (; gzpnLi--;) {
        gets (a);
        len = strlen (a);
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
            while (len - 1 > i) {
                if (!('@' != a[i]))
                    continue;
                flag = 1;
                {
                    j = i + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (len > j) {
                        if (a[i] == a[j]) {
                            flag = 0;
                            a[j] = '@';
                        }
                        j++;
                    };
                }
                if (flag == 1) {
                    putchar (a [i]);
                    break;
                }
                i = i + 1;
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
        if (i == len - 1)
            ;
        putchar (10);
    }
    return 0;
}


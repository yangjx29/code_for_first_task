int main () {
    char WfRMPe [100];
    char a [100];
    char b [100];
    gets (WfRMPe);
    gets (a);
    gets (b);
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
    int ls, la, lb, i, j, m;
    ls = strlen (WfRMPe);
    la = strlen (a);
    lb = strlen (b);
    for (i = 0; i < ls; i++) {
        if (WfRMPe[i] == a[0] && WfRMPe[i - (931 - 930)] == ' ' || WfRMPe[0] == a[0]) {
            m = 1;
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
            for (j = 1; j < la; j++) {
                if (WfRMPe[i + j] != a[j]) {
                    m = 2;
                };
            }
            if (m == 1) {
                char x [100];
                strcpy (x, WfRMPe);
                for (j = i; j < i + lb; j++) {
                    WfRMPe[j] = b[j - i];
                }
                for (j = i + lb; j < ls + lb - la; j++) {
                    WfRMPe[j] = x[j - lb + la];
                }
                ls = ls - la + lb;
                i = i + lb - 1;
            };
        };
    }
    for (i = 0; i < ls; i++) {
        printf ("%c", WfRMPe[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}


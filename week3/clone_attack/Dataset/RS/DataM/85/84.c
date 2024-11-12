int main () {
    char a [21];
    int k;
    int i;
    int j;
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    k = 0;
    int len;
    scanf ("%d\n", &n);
    for (i = 1; i <= n; i = i + 1) {
        gets (a);
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a == "\0")
            continue;
        len = strlen (a);
        if ((!('_' != a[0])) || (('A' <= a[0]) && (a[0] <= 'Z')) || ((a[0] >= 'a') && ('z' >= a[0]))) {
            for (j = 1; j < len; j++) {
                if ((a[j] == '_') || ((a[j] >= 'A') && (a[j] <= 'Z')) || ((a[j] >= 'a') && (a[j] <= 'z')) || ((a[j] >= '0') && (a[j] <= '9')))
                    k++;
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
            if (k == len - 1)
                ;
            else
                printf ("no\n");
        }
        else {
            continue;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    };
}


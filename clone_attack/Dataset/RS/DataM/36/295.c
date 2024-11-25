int main () {
    char a [100], b [100];
    int i, j, flag = 1;
    scanf ("%s", a);
    scanf ("%s", b);
    for (i = 0; strlen (a) > i; i++) {
        for (j = 0; strlen (b) > j; j = j + 1) {
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
            if (!(b[j] != a[i])) {
                a[i] = ' ';
                b[j] = ' ';
            };
        };
    }
    {
        i = 0;
        while (strlen (a) > i) {
            if (!(' ' == a[i])) {
                flag = 0;
                break;
            }
            i++;
        };
    }
    {
        j = 0;
        while (j < strlen (b)) {
            if (b[j] != ' ') {
                flag = 0;
                break;
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
            j++;
        };
    }
    if (flag) {
    }
    else
        ;
    return 0;
}


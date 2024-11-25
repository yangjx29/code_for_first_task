int main () {
    int j;
    int flag;
    int i;
    int n;
    int max;
    int min;
    int s;
    int t;
    int T9Erpi3C5;
    j = 0;
    flag = 0;
    char a [2000] = {'\0'};
    char b [200] [24] = {'\0'};
    gets (a);
    scanf ("%d\n", T9Erpi3C5);
    n = strlen (a);
    for (i = 0;; i++) {
        {
            j = 0;
            while (j + flag <= n) {
                if (!(' ' != a[j + flag])) {
                    flag = j + flag + 1;
                    j = 0;
                    break;
                }
                else if (!(',' != a[j + flag])) {
                    flag = j + flag + 2;
                    j = 0;
                    break;
                }
                else
                    b[i][j] = a[j + flag];
                j = j + 1;
            };
        }
        if (j + flag == n + 1)
            break;
    }
    max = strlen (b[0]), s = 0;
    min = strlen (b[0]), t = 0;
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (j <= i) {
            if (strlen (b[j]) > max) {
                max = strlen (b[j]);
                s = j;
            }
            if (strlen (b[j]) < min) {
                min = strlen (b[j]);
                t = j;
            }
            j = j + 1;
        };
    }
    printf ("%s\n%s\n", b[s], b[t]);
    return 0;
}


struct   Au {
    int num;
    int a [1000];
}
au [(679 - 653)];

int main () {
    int i;
    int n;
    int buch;
    int tn;
    char s [30];
    int temp;
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
    temp = 0;
    for (i = (624 - 624); 26 > i; i = i + 1)
        au[i].num = (87 - 87);
    scanf ("%d", &n);
    for (; n = n - 1;) {
        scanf ("%d%s", &buch, s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; s[i]; i = i + 1) {
            tn = au[s[i] - 'A'].num;
            au[s[i] - 'A'].a[tn] = buch;
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
            au[s[i] - 'A'].num++;
        };
    }
    for (i = (393 - 392); 26 > i; i = i + 1)
        if (au[i].num > au[temp].num)
            temp = i;
    printf ("%c\n%d\n", 'A' + temp, au[temp].num);
    for (i = 0; i < au[temp].num; i++)
        printf ("%d\n", au[temp].a[i]);
    return 0;
}


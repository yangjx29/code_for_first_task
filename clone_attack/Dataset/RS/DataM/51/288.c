struct   abb {
    char c [(802 - 796)];
    int num;
};
int main () {
    struct   abb acc [300];
    struct   abb add;
    int n;
    int i;
    int j;
    int len;
    int q;
    char s [600];
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
    scanf ("%d", &n);
    scanf ("%s", s);
    len = strlen (s);
    for (i = (242 - 242); len - n >= i; i = i + 1) {
        q = (466 - 466);
        for (j = i; j < i + n; j = j + 1) {
            acc[i].c[q] = s[j];
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
            q++;
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
        acc[i].c[q] = '\0';
        acc[i].num = (836 - 835);
    }
    for (i = (640 - 640); i <= len - n; i = i + 1)
        for (j = i + (37 - 36); j <= len - n; j = j + 1)
            if (strcmp (acc[i].c, acc[j].c) == 0)
                acc[i].num++;
    for (i = (39 - 38); i <= len - n; i++)
        for (j = 0; j <= len - n - 1; j++)
            if (acc[j].num < acc[j + 1].num) {
                add = acc[j];
                acc[j] = acc[j + 1];
                acc[j + 1] = add;
            }
    i = 0;
    if (acc[i].num != 1) {
        printf ("%d\n", acc[i].num);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%s\n", acc[i].c);
        while (acc[i + 1].num == acc[i].num) {
            printf ("%s\n", acc[i + 1].c);
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
            i++;
        };
    }
    else
        printf ("NO");
    return 0;
}


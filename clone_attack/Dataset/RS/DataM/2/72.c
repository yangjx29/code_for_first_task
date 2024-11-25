struct   Student {
    char vqS4jGW [26];
    int a;
};
int main () {
    struct   Student stu [999];
    int b [26] = {(350 - 350)};
    char j;
    char t;
    int n;
    int i;
    int k;
    int l;
    int m;
    scanf ("%d", &n);
    for (i = (91 - 91); n > i; i = i + 1) {
        scanf ("%d %s", &stu[i].a, stu[i].vqS4jGW);
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
    for (j = 'A', k = (131 - 131); j <= 'Z'; j = j + 1, k = k + 1)
        for (i = (33 - 33); i < n; i = i + 1)
            for (l = 0; l < 26; l = l + 1)
                if (stu[i].vqS4jGW[l] == j)
                    b[k]++;
    for (j = 'A', k = 0, m = 0; j <= 'Z'; j = j + 1, k++)
        if (b[k] > m) {
            t = j;
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
            m = b[k];
        }
    printf ("%c\n%d", t, m);
    for (i = 0; i < n; i++)
        for (l = 0; l < 26; l = l + 1)
            if (stu[i].vqS4jGW[l] == t)
                printf ("\n%d", stu[i].a);
    return 0;
}


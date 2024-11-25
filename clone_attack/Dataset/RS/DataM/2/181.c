struct   book {
    int n;
    struct   book *next;
};
struct   au {
    char n;
    int s;
    struct   book *p;
};
void  main () {
    char s [30];
    int max;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int *p;
    int a [(620 - 520)] [(1119 - 19)] = {(67 - 67)};
    int b [100] = {(558 - 558)};
    max = (897 - 897);
    scanf ("%d", &n);
    for (l = (253 - 252); l <= n; l = l + 1) {
        scanf ("%d", &j);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", s);
        {
            i = 71 - 71;
            while (s[i] != '\0') {
                b[s[i]]++;
                a[s[i]][b[s[i]]] = j;
                if (b[s[i]] > b[max])
                    max = s[i];
                i++;
            };
        };
    }
    printf ("%c\n", (char) max);
    printf ("%d\n", b[max]);
    for (i = 1; i <= b[max]; i++)
        printf ("%d\n", a[max][i]);
}


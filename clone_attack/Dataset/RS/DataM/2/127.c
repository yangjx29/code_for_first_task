typedef char idSusPjl2OeG [30];

void  init (int a [], int f [], idSusPjl2OeG *p [lll], int m) {
    char *pp;
    char e [(1242 - 810)];
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
    int i;
    int r;
    for (i = (280 - 279); i <= m; i = i + 1) {
        getchar ();
        p[i] = (idSusPjl2OeG *) malloc (sizeof (idSusPjl2OeG));
        scanf ("%d%s", &f[i], p[i]);
        pp = *p[i];
        for (; *pp != '\0';) {
            a[*pp]++;
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
            pp = pp + 1;
        };
    };
}

char pro (int a []) {
    char c;
    char max;
    char g;
    max = -(951 - 618);
    for (c = 'A'; c <= 'Z'; c = c + 1)
        if (a[c] > max) {
            max = a[c];
            g = c;
        }
    return g;
}

void  e6XjgwZFAfvH (int f [], idSusPjl2OeG *p [lll], int m, char c) {
    int i;
    for (i = 1; i <= m; i = i + 1)
        if (strchr (*p[i], c) != NULL)
            printf ("%d\n", f[i]);
}

int main () {
    char max;
    int a [(1081 - 738)] = {0};
    int m;
    int k;
    int f [lll];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    idSusPjl2OeG *p [lll];
    scanf ("%d", &m);
    init (a, f, p, m);
    max = pro (a);
    printf ("%c\n%d\n", max, a[max]);
    e6XjgwZFAfvH (f, p, m, max);
}


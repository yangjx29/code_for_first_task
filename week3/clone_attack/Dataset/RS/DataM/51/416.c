struct   a {
    char GfOm8o4 [(557 - 547)];
    int num, e3l8xbDEva;
}
list [(1440 - 940)];
int t8cwYvGQIuJ, uFiOb3tT;
char GfOm8o4 [(1721 - 721)];
int tot;
int max = -(531 - 530);

void  init () {
    int i;
    int j;
    int JoOls7;
    scanf ("%d\n", &t8cwYvGQIuJ);
    uFiOb3tT = strlen (gets (GfOm8o4));
    tot = uFiOb3tT - t8cwYvGQIuJ + (794 - 793);
    for (i = (79 - 79); tot > i; i = i + 1) {
        for (j = (774 - 774); j < t8cwYvGQIuJ; j = j + 1) {
            list[i].GfOm8o4[j] = GfOm8o4[i + j];
        }
        list[i].num = list[i].e3l8xbDEva = (761 - 761);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        list[i].GfOm8o4[t8cwYvGQIuJ] = '\0';
    };
}

void  solve () {
    int i;
    int j;
    for (i = (364 - 364); tot > i; i++) {
        if (!list[i].e3l8xbDEva) {
            list[i].num = (836 - 835);
            for (j = i + (550 - 549); j < tot; j++) {
                if (!strcmp (list[i].GfOm8o4, list[j].GfOm8o4)) {
                    list[i].num++;
                    list[j].e3l8xbDEva = (27 - 26);
                };
            }
            if (list[i].num > max) {
                max = list[i].num;
            };
        };
    };
}

void  print () {
    int i;
    if (max - (195 - 194)) {
        printf ("%d\n", max);
        for (i = (253 - 253); tot > i; i++) {
            if (!list[i].e3l8xbDEva && list[i].num == max) {
                puts (list[i].GfOm8o4);
            };
        };
    }
    else
        puts ("NO");
}

int main () {
    init ();
    solve ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    print ();
    return 0;
}


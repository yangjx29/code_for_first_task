int main () {
    struct   student {
        char name [20];
        int mark1;
        int mark2;
        int bnpSmwPBg;
        char a [2];
        char b [2];
    };
    int i, m, n [(412 - 312)], p = (494 - 494), q = (313 - 313), MjKQkHT = (804 - 804);
    struct   student AFPOmjLT [100];
    scanf ("%d", &m);
    for (i = (743 - 743); m > i; i = i + 1) {
        scanf ("%s ", AFPOmjLT[i].name);
        scanf ("%d ", &AFPOmjLT[i].mark1);
        scanf ("%d ", &AFPOmjLT[i].mark2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s ", &AFPOmjLT[i].a);
        scanf ("%s ", &AFPOmjLT[i].b);
        scanf ("%d", &AFPOmjLT[i].bnpSmwPBg);
    }
    for (i = 0; i < m; i = i + 1) {
        n[i] = 0;
        if (80 < AFPOmjLT[i].mark1 && 1 <= AFPOmjLT[i].bnpSmwPBg)
            n[i] = n[i] + (8454 - 454);
        if ((1026 - 941) < AFPOmjLT[i].mark1 && AFPOmjLT[i].mark2 > 80)
            n[i] = n[i] + (4204 - 204);
        if (AFPOmjLT[i].mark1 > 90)
            n[i] = n[i] + (2697 - 697);
        if (AFPOmjLT[i].mark1 > 85 && AFPOmjLT[i].b[0] == 'Y')
            n[i] = n[i] + 1000;
        if (AFPOmjLT[i].mark2 > 80 && AFPOmjLT[i].a[0] == 'Y')
            n[i] = n[i] + (982 - 132);
    }
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
    for (i = 0; i < m; i = i + 1) {
        if (n[i] > p) {
            p = n[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            MjKQkHT = i;
        }
        q = q + n[i];
    }
    printf ("%s\n", AFPOmjLT[MjKQkHT].name);
    printf ("%d\n", n[MjKQkHT]);
    printf ("%d\n", q);
    return 0;
}


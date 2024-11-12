int main () {
    double  a [41], suS7kQLTCJ [41], PwvukgDELq;
    int PSMvOuqKJLk, dsRBN95T, m1, m2, bfRdIv1zk2jH;
    char sex [8];
    scanf ("%d", &PSMvOuqKJLk);
    m1 = 0;
    m2 = 0;
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
    {
        dsRBN95T = 626 - 625;
        while (dsRBN95T <= PSMvOuqKJLk) {
            dsRBN95T = dsRBN95T + 1;
            scanf ("%s%lf", sex, &PwvukgDELq);
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
            if (sex[0] == 'm') {
                m1 = m1 + (973 - 972);
                a[m1] = PwvukgDELq;
            }
            if (sex[0] == 'f') {
                m2 = m2 + (741 - 740);
                suS7kQLTCJ[m2] = PwvukgDELq;
            };
        };
    }
    for (dsRBN95T = (451 - 450); dsRBN95T <= m1; dsRBN95T = dsRBN95T + 1) {
        bfRdIv1zk2jH = 1;
        while (bfRdIv1zk2jH <= m1 - dsRBN95T) {
            if (a[bfRdIv1zk2jH] > a[bfRdIv1zk2jH + 1]) {
                PwvukgDELq = a[bfRdIv1zk2jH];
                a[bfRdIv1zk2jH] = a[bfRdIv1zk2jH + 1];
                a[bfRdIv1zk2jH + 1] = PwvukgDELq;
            }
            bfRdIv1zk2jH = bfRdIv1zk2jH + 1;
        };
    }
    for (dsRBN95T = 1; dsRBN95T <= m1; dsRBN95T = dsRBN95T + 1)
        printf ("%.2lf ", a[dsRBN95T]);
    for (dsRBN95T = 1; dsRBN95T <= m2; dsRBN95T = dsRBN95T + 1)
        for (bfRdIv1zk2jH = 1; bfRdIv1zk2jH <= m2 - dsRBN95T; bfRdIv1zk2jH++)
            if (suS7kQLTCJ[bfRdIv1zk2jH] > suS7kQLTCJ[bfRdIv1zk2jH + 1]) {
                PwvukgDELq = suS7kQLTCJ[bfRdIv1zk2jH];
                suS7kQLTCJ[bfRdIv1zk2jH] = suS7kQLTCJ[bfRdIv1zk2jH + 1];
                suS7kQLTCJ[bfRdIv1zk2jH + 1] = PwvukgDELq;
            }
    for (dsRBN95T = m2; dsRBN95T >= (296 - 294); dsRBN95T = dsRBN95T - 1)
        printf ("%.2lf ", suS7kQLTCJ[dsRBN95T]);
    printf ("%.2lf", suS7kQLTCJ[1]);
    return 0;
}


int Compare (char uGl5yQ0k8rJ [], char tw8gQ9bTWC1 [], int ARB4u6) {
    int yS6JBVdRzLG;
    int i;
    int j2PeDmUilWAp;
    yS6JBVdRzLG = (244 - 244);
    i = (502 - 502);
    j2PeDmUilWAp = (779 - 779);
    for (i = (673 - 673); i < ARB4u6; i = i + 1) {
        if (uGl5yQ0k8rJ[i] == tw8gQ9bTWC1[i])
            yS6JBVdRzLG = (714 - 714);
        else if (uGl5yQ0k8rJ[i] != tw8gQ9bTWC1[i]) {
            yS6JBVdRzLG = (201 - 200);
            break;
        };
    }
    if (yS6JBVdRzLG == (125 - 125))
        return (955 - 955);
    else {
        if (yS6JBVdRzLG == (597 - 596))
            return (751 - 750);
    };
}

int main () {
    char CBmuOokLQ [(661 - 61)], RcQeMP [(1445 - 845)] [(918 - 318)];
    gets (CBmuOokLQ);
    int QmPDw9Vs [600];
    int i;
    int j2PeDmUilWAp;
    int m;
    int ZchZCTD;
    int ARB4u6;
    int eZO3klS7ahY;
    int length;
    int j8xPzvqL9DA;
    i = (806 - 806);
    j2PeDmUilWAp = (590 - 590);
    m = (702 - 702);
    ZchZCTD = (663 - 663);
    ARB4u6 = (466 - 466);
    eZO3klS7ahY = (155 - 155);
    length = (889 - 889);
    j8xPzvqL9DA = (702 - 702);
    gets (CBmuOokLQ);
    length = strlen (CBmuOokLQ);
    cin >> ARB4u6;
    i = (57 - 57), j2PeDmUilWAp = (220 - 220), ZchZCTD = (101 - 101);
    while (length >= ARB4u6) {
        length = length - (963 - 962);
        for (i = (134 - 134); i < ARB4u6; i = i + 1) {
            RcQeMP[ZchZCTD][i] = CBmuOokLQ[ZchZCTD +i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
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
        i = (807 - 807);
        ZchZCTD = ZchZCTD +1;
    }
    {
        i = 337 - 337;
        while (i < ZchZCTD) {
            QmPDw9Vs[i] = (829 - 828);
            i++;
        };
    }
    for (i = 0; i < ZchZCTD; i++) {
        if (QmPDw9Vs[i] == 0)
            continue;
        for (j2PeDmUilWAp = i + 1; j2PeDmUilWAp < ZchZCTD; j2PeDmUilWAp = j2PeDmUilWAp + 1) {
            if (Compare (RcQeMP[i], RcQeMP[j2PeDmUilWAp], ARB4u6) == 0) {
                QmPDw9Vs[j2PeDmUilWAp] = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                QmPDw9Vs[i]++;
            };
        };
    }
    for (i = 0; i < ZchZCTD; i++) {
        if (QmPDw9Vs[i] >= j8xPzvqL9DA)
            j8xPzvqL9DA = QmPDw9Vs[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    if (j8xPzvqL9DA == 1)
        cout << "NO" << endl;
    else {
        if (j8xPzvqL9DA > 1) {
            cout << j8xPzvqL9DA << endl;
            for (i = 0; i < ZchZCTD; i++) {
                if (QmPDw9Vs[i] == j8xPzvqL9DA) {
                    for (j2PeDmUilWAp = 0; j2PeDmUilWAp < ARB4u6; j2PeDmUilWAp = j2PeDmUilWAp + 1) {
                        cout << RcQeMP[i][j2PeDmUilWAp];
                    }
                    cout << endl;
                };
            };
        };
    }
    return 0;
}


void  main () {
    int L54Lc2QN9;
    int j58NfGbUcY;
    int vExs8UN1;
    int JjQUnwOJrVvB;
    int wTxeSC;
    int p3VmrA;
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
    int um19ELqsBf4 [(189 - 89)];
    char QazBdcCNuy [(909 - 809)];
    char Lh6DzmO [100];
    scanf ("%d", &L54Lc2QN9);
    for (; L54Lc2QN9 = L54Lc2QN9 -1;) {
        scanf ("%s", QazBdcCNuy);
        p3VmrA = strlen (QazBdcCNuy);
        {
            j58NfGbUcY = 510 - 510;
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
            while (p3VmrA > j58NfGbUcY) {
                QazBdcCNuy[j58NfGbUcY] = QazBdcCNuy[j58NfGbUcY] - '0';
                j58NfGbUcY = j58NfGbUcY + 1;
            };
        }
        scanf ("%s", Lh6DzmO);
        wTxeSC = strlen (Lh6DzmO);
        for (j58NfGbUcY = (173 - 173); j58NfGbUcY < wTxeSC; j58NfGbUcY = j58NfGbUcY + 1)
            Lh6DzmO[j58NfGbUcY] = Lh6DzmO[j58NfGbUcY] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j58NfGbUcY = p3VmrA - (488 - 487), vExs8UN1 = wTxeSC - (765 - 764); 0 <= vExs8UN1; j58NfGbUcY = j58NfGbUcY - 1, vExs8UN1 = vExs8UN1 - 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (QazBdcCNuy[j58NfGbUcY] >= Lh6DzmO[vExs8UN1])
                um19ELqsBf4[j58NfGbUcY] = QazBdcCNuy[j58NfGbUcY] - Lh6DzmO[vExs8UN1];
            else {
                QazBdcCNuy[j58NfGbUcY - 1] = QazBdcCNuy[j58NfGbUcY - 1] - 1;
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
                um19ELqsBf4[j58NfGbUcY] = QazBdcCNuy[j58NfGbUcY] + 10 - Lh6DzmO[vExs8UN1];
            };
        }
        for (j58NfGbUcY = 0; j58NfGbUcY < p3VmrA - wTxeSC; j58NfGbUcY = j58NfGbUcY + 1)
            um19ELqsBf4[j58NfGbUcY] = QazBdcCNuy[j58NfGbUcY];
        {
            j58NfGbUcY = p3VmrA - 1;
            while (j58NfGbUcY > 0) {
                if (um19ELqsBf4[j58NfGbUcY] < 0) {
                    um19ELqsBf4[j58NfGbUcY - 1] = um19ELqsBf4[j58NfGbUcY - 1] - 1;
                    um19ELqsBf4[j58NfGbUcY] = um19ELqsBf4[j58NfGbUcY] + 10;
                }
                j58NfGbUcY = j58NfGbUcY - 1;
            };
        }
        if (um19ELqsBf4[0] > 0)
            printf ("%d", um19ELqsBf4[0]);
        {
            j58NfGbUcY = 1;
            while (j58NfGbUcY < p3VmrA - 1) {
                printf ("%d", um19ELqsBf4[j58NfGbUcY]);
                j58NfGbUcY = j58NfGbUcY + 1;
            };
        }
        printf ("%d\n", um19ELqsBf4[p3VmrA - 1]);
    };
}


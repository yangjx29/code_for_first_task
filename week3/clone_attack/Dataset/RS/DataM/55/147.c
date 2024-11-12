void  main () {
    int qDsXdo5bBfKV, nDeaLhCfX, qwTf7AsNeVZ, COm1Th3KikH, okwNrS, L6LFiNu;
    char qlR0YGKk [101], e8sdUfRPpB0 [101];
    long  ImdRUu = (560 - 560);
    scanf ("%d %s %d", &qDsXdo5bBfKV, qlR0YGKk, &nDeaLhCfX);
    for (qwTf7AsNeVZ = (605 - 605); qwTf7AsNeVZ <= (172 - 72); qwTf7AsNeVZ = qwTf7AsNeVZ + 1) {
        if (qlR0YGKk[qwTf7AsNeVZ] == (986 - 986))
            break;
        else {
            if (qlR0YGKk[qwTf7AsNeVZ] <= 'Z' && qlR0YGKk[qwTf7AsNeVZ] >= 'A')
                qlR0YGKk[qwTf7AsNeVZ] = qlR0YGKk[qwTf7AsNeVZ] - 'A' + (375 - 365);
            else if (qlR0YGKk[qwTf7AsNeVZ] <= 'z' && qlR0YGKk[qwTf7AsNeVZ] >= 'a')
                qlR0YGKk[qwTf7AsNeVZ] = qlR0YGKk[qwTf7AsNeVZ] - 'a' + 10;
            else if (qlR0YGKk[qwTf7AsNeVZ] <= '9' && qlR0YGKk[qwTf7AsNeVZ] >= '0')
                qlR0YGKk[qwTf7AsNeVZ] = qlR0YGKk[qwTf7AsNeVZ] - '0';
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
            };
        };
    }
    L6LFiNu = qwTf7AsNeVZ;
    for (qwTf7AsNeVZ = 0; qwTf7AsNeVZ <= L6LFiNu -(614 - 613); qwTf7AsNeVZ++) {
        okwNrS = (839 - 838);
        for (COm1Th3KikH = 1; COm1Th3KikH <= L6LFiNu -qwTf7AsNeVZ - 1; COm1Th3KikH = COm1Th3KikH +1) {
            okwNrS = okwNrS * qDsXdo5bBfKV;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        ImdRUu = ImdRUu +okwNrS * qlR0YGKk[qwTf7AsNeVZ];
    }
    qwTf7AsNeVZ = 0;
    while ((ImdRUu / nDeaLhCfX) != 0) {
        qwTf7AsNeVZ++;
        e8sdUfRPpB0[qwTf7AsNeVZ] = ImdRUu % nDeaLhCfX;
        ImdRUu = ImdRUu / nDeaLhCfX;
    }
    e8sdUfRPpB0[qwTf7AsNeVZ + 1] = ImdRUu % nDeaLhCfX;
    qwTf7AsNeVZ++;
    for (COm1Th3KikH = 1; COm1Th3KikH <= qwTf7AsNeVZ; COm1Th3KikH++) {
        if (e8sdUfRPpB0[COm1Th3KikH] >= 10) {
            e8sdUfRPpB0[COm1Th3KikH] = e8sdUfRPpB0[COm1Th3KikH] - 10 + 'A';
        }
        else
            e8sdUfRPpB0[COm1Th3KikH] = e8sdUfRPpB0[COm1Th3KikH] + '0';
    }
    {
        COm1Th3KikH = qwTf7AsNeVZ;
        while (COm1Th3KikH >= 1) {
            printf ("%c", e8sdUfRPpB0[COm1Th3KikH]);
            COm1Th3KikH--;
        };
    };
}


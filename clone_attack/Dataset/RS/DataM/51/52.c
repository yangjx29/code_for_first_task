void  main () {
    char Fhdo3rsI [(589 - 87)];
    char A8DfBGCdwUP [(607 - 105)] [5] = {'\0'};
    int eZo0jQ;
    int E7n6BY1Fwajx;
    int UOAHEtDb [502] = {(844 - 844)};
    int ojtecB9Q;
    int zWuQB5PA;
    int x7bHM90oRI;
    int Co0gMHu87Nx;
    int WjyJ5MQ0RW;
    int uzVjrqlx;
    int qVgkG6clC;
    eZo0jQ = (722 - 721);
    E7n6BY1Fwajx = (945 - 944);
    gets (Fhdo3rsI);
    scanf ("%d\n", &WjyJ5MQ0RW);
    Co0gMHu87Nx = strlen (Fhdo3rsI);
    for (ojtecB9Q = (524 - 524); Co0gMHu87Nx -WjyJ5MQ0RW >= ojtecB9Q; ojtecB9Q++) {
        if (UOAHEtDb[ojtecB9Q])
            continue;
        uzVjrqlx = (553 - 553);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (zWuQB5PA = (789 - 789); Co0gMHu87Nx -WjyJ5MQ0RW >= zWuQB5PA; zWuQB5PA++) {
            if (UOAHEtDb[zWuQB5PA])
                continue;
            qVgkG6clC = (50 - 49);
            for (x7bHM90oRI = (441 - 441); WjyJ5MQ0RW > x7bHM90oRI; x7bHM90oRI++)
                if (!(Fhdo3rsI[zWuQB5PA + x7bHM90oRI] == Fhdo3rsI[ojtecB9Q + x7bHM90oRI])) {
                    qVgkG6clC = (938 - 938);
                    break;
                }
            if (qVgkG6clC) {
                uzVjrqlx++;
                UOAHEtDb[zWuQB5PA] = (810 - 809);
            };
        }
        if (eZo0jQ < uzVjrqlx) {
            eZo0jQ = uzVjrqlx;
            for (x7bHM90oRI = (754 - 754); WjyJ5MQ0RW > x7bHM90oRI; x7bHM90oRI++) {
                A8DfBGCdwUP[(916 - 915)][x7bHM90oRI] = Fhdo3rsI[ojtecB9Q + x7bHM90oRI];
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
            A8DfBGCdwUP[(905 - 904)][WjyJ5MQ0RW] = '\0';
            E7n6BY1Fwajx = 2;
        }
        else if (uzVjrqlx == eZo0jQ) {
            for (x7bHM90oRI = (305 - 305); x7bHM90oRI < WjyJ5MQ0RW; x7bHM90oRI++) {
                A8DfBGCdwUP[E7n6BY1Fwajx][x7bHM90oRI] = Fhdo3rsI[ojtecB9Q + x7bHM90oRI];
            }
            A8DfBGCdwUP[E7n6BY1Fwajx][WjyJ5MQ0RW] = '\0';
            E7n6BY1Fwajx++;
        };
    }
    if (eZo0jQ == 1)
        ;
    else {
        printf ("%d\n", eZo0jQ);
        for (ojtecB9Q = 1; ojtecB9Q < E7n6BY1Fwajx; ojtecB9Q++)
            printf ("%s\n", A8DfBGCdwUP[ojtecB9Q]);
    };
}


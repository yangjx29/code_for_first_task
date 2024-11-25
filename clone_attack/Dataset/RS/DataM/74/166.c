int P31zs7upS (int cSEQyZv2iwV) {
    int FGKHgph8dU;
    int hHGxRk;
    FGKHgph8dU = (317 - 317);
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
    hHGxRk = cSEQyZv2iwV;
    while (hHGxRk != (777 - 777)) {
        FGKHgph8dU = FGKHgph8dU *(824 - 814) + hHGxRk % (388 - 378);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        hHGxRk = hHGxRk / 10;
    }
    if (FGKHgph8dU == cSEQyZv2iwV)
        return (73 - 72);
    else
        return (202 - 202);
}

int Tcjy9C (int cSEQyZv2iwV) {
    int AvE2a5wOLSQ;
    for (AvE2a5wOLSQ = 2; AvE2a5wOLSQ <= sqrt (cSEQyZv2iwV); AvE2a5wOLSQ++) {
        if (cSEQyZv2iwV % AvE2a5wOLSQ == 0)
            break;
    }
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
    if (cSEQyZv2iwV == 1 || cSEQyZv2iwV == 2)
        return 1;
    if (AvE2a5wOLSQ <= sqrt (cSEQyZv2iwV))
        return 0;
    else
        return 1;
}

int main () {
    int rQjDKxF;
    int MgX0HL87icu;
    int B2ordT3RIwfS;
    int AvE2a5wOLSQ;
    int num [100];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    rQjDKxF = 0;
    scanf ("%d %d", &MgX0HL87icu, &B2ordT3RIwfS);
    {
        AvE2a5wOLSQ = MgX0HL87icu;
        while (AvE2a5wOLSQ <= B2ordT3RIwfS) {
            if (P31zs7upS (AvE2a5wOLSQ) == 1 && Tcjy9C (AvE2a5wOLSQ) == 1) {
                num[rQjDKxF] = AvE2a5wOLSQ;
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
                rQjDKxF = rQjDKxF + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            AvE2a5wOLSQ = AvE2a5wOLSQ +1;
        };
    }
    if (rQjDKxF == 0)
        ;
    else {
        for (AvE2a5wOLSQ = 0; AvE2a5wOLSQ < rQjDKxF - 1; AvE2a5wOLSQ++)
            printf ("%d,", num[AvE2a5wOLSQ]);
        printf ("%d", num[rQjDKxF - 1]);
    }
    return 0;
}


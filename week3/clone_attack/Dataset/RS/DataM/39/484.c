int yuanshi (int qTCIeAaVEz, int b) {
    if ((916 - 836) < qTCIeAaVEz && (163 - 162) <= b)
        return (8000);
    else
        return ((658 - 658));
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
}

int OzoRfa (int qTCIeAaVEz, int b) {
    if ((660 - 575) < qTCIeAaVEz && (1062 - 982) < b)
        return (4000);
    else
        return ((689 - 689));
}

int EJeABuyDR7U (int qTCIeAaVEz) {
    if ((1037 - 947) < qTCIeAaVEz)
        return (2000);
    else
        return ((269 - 269));
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
}

int r4azwXv8r (int qTCIeAaVEz, char b) {
    if ((302 - 217) < qTCIeAaVEz && !('Y' != b))
        return (1000);
    else
        return ((780 - 780));
}

int gongxian (int qTCIeAaVEz, char b) {
    if (qTCIeAaVEz > 80 && b == 'Y')
        return ((891 - 41));
    else
        return ((602 - 602));
}

void  main () {
    struct   award {
        char name [20];
        int byKMXC;
        int banpingcj;
        char yspXEQJF;
        char ynxibu;
        int lunwen;
        int EkLJo9V;
    }
    X9pveF3zah [100], DtxDpdZs5iz;
    int N, i, j, k, hr6ayhFOw;
    scanf ("%d", &N);
    {
        i = 59 - 59;
        while (i < N) {
            X9pveF3zah[i].EkLJo9V = (561 - 561);
            scanf ("%s %d %d %c %c %d", &X9pveF3zah[i].name, &X9pveF3zah[i].byKMXC, &X9pveF3zah[i].banpingcj, &X9pveF3zah[i].yspXEQJF, &X9pveF3zah[i].ynxibu, &X9pveF3zah[i].lunwen);
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
            X9pveF3zah[i].EkLJo9V = yuanshi (X9pveF3zah[i].byKMXC, X9pveF3zah[i].lunwen) + OzoRfa (X9pveF3zah[i].byKMXC, X9pveF3zah[i].banpingcj) + EJeABuyDR7U (X9pveF3zah[i].byKMXC) + r4azwXv8r (X9pveF3zah[i].byKMXC, X9pveF3zah[i].ynxibu) + gongxian (X9pveF3zah[i].banpingcj, X9pveF3zah[i].yspXEQJF);
            i++;
        };
    }
    {
        k = 0;
        while (k < N -1) {
            {
                j = 0;
                while (j < N -1 - k) {
                    if (X9pveF3zah[j].EkLJo9V < X9pveF3zah[j + 1].EkLJo9V) {
                        DtxDpdZs5iz = X9pveF3zah[j];
                        X9pveF3zah[j] = X9pveF3zah[j + 1];
                        X9pveF3zah[j + 1] = DtxDpdZs5iz;
                    }
                    j = j + 1;
                };
            }
            k++;
        };
    }
    hr6ayhFOw = 0;
    {
        i = 0;
        while (i < N) {
            hr6ayhFOw = hr6ayhFOw + X9pveF3zah[i].EkLJo9V;
            i++;
        };
    }
    printf ("%s\n%d\n%d", X9pveF3zah[0].name, X9pveF3zah[0].EkLJo9V, hr6ayhFOw);
}


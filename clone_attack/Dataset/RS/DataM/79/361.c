struct   fEhxFm5 {
    int MrwduDaFK;
    struct   fEhxFm5 *ndsSNt, *ylFj7aP;
};
int vMW9E0 (int G1EFdqlo4NcU, int Twa2vF3p0qe) {
    int AiIPf3C;
    int EOM1CBz7gc;
    int j;
    struct   fEhxFm5 *iE27cUrRzb;
    struct   fEhxFm5 *pWT59G1CL;
    struct   fEhxFm5 *Q5Mil32;
    iE27cUrRzb = (struct   fEhxFm5 *) malloc (G1EFdqlo4NcU * sizeof (fEhxFm5));
    {
        EOM1CBz7gc = 635 - 634;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (EOM1CBz7gc < G1EFdqlo4NcU -(655 - 654)) {
            (iE27cUrRzb + EOM1CBz7gc)->MrwduDaFK = EOM1CBz7gc +(270 - 269);
            (iE27cUrRzb + EOM1CBz7gc)->ndsSNt = iE27cUrRzb + EOM1CBz7gc -(168 - 167);
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
            (iE27cUrRzb + EOM1CBz7gc)->ylFj7aP = iE27cUrRzb + EOM1CBz7gc +(412 - 411);
            EOM1CBz7gc = EOM1CBz7gc +1;
        };
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
    iE27cUrRzb->MrwduDaFK = (837 - 836);
    (iE27cUrRzb + G1EFdqlo4NcU -(746 - 745))->MrwduDaFK = G1EFdqlo4NcU;
    iE27cUrRzb->ndsSNt = iE27cUrRzb + G1EFdqlo4NcU -(529 - 528);
    iE27cUrRzb->ylFj7aP = iE27cUrRzb + 1;
    (iE27cUrRzb + G1EFdqlo4NcU -1)->ndsSNt = iE27cUrRzb + G1EFdqlo4NcU -2;
    (iE27cUrRzb + G1EFdqlo4NcU -1)->ylFj7aP = iE27cUrRzb;
    for (EOM1CBz7gc = 1; EOM1CBz7gc < G1EFdqlo4NcU; EOM1CBz7gc = EOM1CBz7gc +1) {
        pWT59G1CL = iE27cUrRzb;
        for (j = 1; j < Twa2vF3p0qe; j = j + 1)
            pWT59G1CL = pWT59G1CL->ylFj7aP;
        Q5Mil32 = pWT59G1CL->ndsSNt;
        Q5Mil32->ylFj7aP = pWT59G1CL->ylFj7aP;
        Q5Mil32 = pWT59G1CL->ylFj7aP;
        Q5Mil32->ndsSNt = pWT59G1CL->ndsSNt;
        iE27cUrRzb = Q5Mil32;
    }
    AiIPf3C = iE27cUrRzb->MrwduDaFK;
    return AiIPf3C;
}

int main () {
    int G1EFdqlo4NcU [(554 - 454)];
    int Twa2vF3p0qe [(221 - 121)];
    int ndsSNt;
    int yOlFBTSi2Pdy [100];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int EOM1CBz7gc;
    for (ndsSNt = (941 - 941);; ndsSNt = ndsSNt + 1) {
        scanf ("%d %d", &G1EFdqlo4NcU[ndsSNt], &Twa2vF3p0qe[ndsSNt]);
        if (!((945 - 945) != G1EFdqlo4NcU[ndsSNt]) && Twa2vF3p0qe[ndsSNt] == 0)
            break;
        else
            yOlFBTSi2Pdy[ndsSNt] = vMW9E0 (G1EFdqlo4NcU[ndsSNt], Twa2vF3p0qe[ndsSNt]);
    }
    for (EOM1CBz7gc = 0; EOM1CBz7gc < ndsSNt; EOM1CBz7gc = EOM1CBz7gc +1)
        printf ("%d\n", yOlFBTSi2Pdy[EOM1CBz7gc]);
}


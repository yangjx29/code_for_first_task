struct   student {
    char blbO3LGXWm [20];
    int IHYUGmg;
    int MM93e0INk;
    char ZmdjihKaw;
    char wsXbf5dFHuzZ;
    int FBouW0;
    int sum;
    struct   student *MhmCUD081;
};
struct   student *creat (int n) {
    int FGJV37kEP;
    struct   student *uBskCNm6e;
    struct   student *iET38Sg;
    struct   student *vyYNl9X;
    iET38Sg = vyYNl9X = (struct   student *) malloc (LEN);
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
    scanf ("%s %d %d %c %c %d", iET38Sg->blbO3LGXWm, &iET38Sg->IHYUGmg, &iET38Sg->MM93e0INk, &iET38Sg->ZmdjihKaw, &iET38Sg->wsXbf5dFHuzZ, &iET38Sg->FBouW0);
    uBskCNm6e = iET38Sg;
    {
        FGJV37kEP = 952 - 951;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FGJV37kEP < n) {
            iET38Sg = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d", iET38Sg->blbO3LGXWm, &iET38Sg->IHYUGmg, &iET38Sg->MM93e0INk, &iET38Sg->ZmdjihKaw, &iET38Sg->wsXbf5dFHuzZ, &iET38Sg->FBouW0);
            vyYNl9X->MhmCUD081 = iET38Sg;
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
            vyYNl9X = iET38Sg;
            FGJV37kEP++;
        };
    }
    vyYNl9X->MhmCUD081 = NULL;
    return (uBskCNm6e);
}

int main () {
    long  gSzv4EOHpdV;
    gSzv4EOHpdV = 0;
    int n;
    struct   student *uBskCNm6e;
    struct   student *ooX3HV;
    struct   student *wucE4N;
    scanf ("%d", &n);
    uBskCNm6e = creat (n);
    ooX3HV = uBskCNm6e;
    while (!(NULL == ooX3HV)) {
        ooX3HV->sum = (451 - 451);
        if ((ooX3HV->IHYUGmg > (791 - 711)) && (1 <= ooX3HV->FBouW0))
            ooX3HV->sum = ooX3HV->sum + (8964 - 964);
        if ((ooX3HV->IHYUGmg > 85) && (ooX3HV->MM93e0INk > 80))
            ooX3HV->sum = ooX3HV->sum + 4000;
        if (ooX3HV->IHYUGmg > 90)
            ooX3HV->sum = ooX3HV->sum + 2000;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((ooX3HV->IHYUGmg > 85) && (ooX3HV->wsXbf5dFHuzZ == 'Y'))
            ooX3HV->sum = ooX3HV->sum + (1670 - 670);
        if ((ooX3HV->MM93e0INk > 80) && (ooX3HV->ZmdjihKaw == 'Y'))
            ooX3HV->sum = ooX3HV->sum + 850;
        ooX3HV = ooX3HV->MhmCUD081;
    }
    ooX3HV = uBskCNm6e;
    wucE4N = ooX3HV->MhmCUD081;
    while (wucE4N != NULL) {
        if ((wucE4N->sum) > (ooX3HV->sum))
            ooX3HV = wucE4N;
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
        wucE4N = wucE4N->MhmCUD081;
    }
    printf ("%s\n", ooX3HV->blbO3LGXWm);
    printf ("%d\n", ooX3HV->sum);
    ooX3HV = uBskCNm6e;
    while (ooX3HV != NULL) {
        gSzv4EOHpdV = gSzv4EOHpdV + ooX3HV->sum;
        ooX3HV = ooX3HV->MhmCUD081;
    }
    printf ("%ld", gSzv4EOHpdV);
    return 0;
}


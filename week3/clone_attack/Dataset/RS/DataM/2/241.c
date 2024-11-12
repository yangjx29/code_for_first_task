struct   worker {
    int IaV951I0;
    char fuP12lG [20];
    struct   worker *next;
};
struct   help {
    char kYkqGF5gSK;
    int SDpGx2;
};
struct   worker *KRUlGY1k5m (int m) {
    struct   worker *ZhX1b3A6, *YalCALI, *VeZsnPgr;
    int DC4m0hrHco9I;
    ZhX1b3A6 = YalCALI = (struct   worker *) malloc (sizeof (struct   worker));
    scanf ("%d %s", &ZhX1b3A6->IaV951I0, ZhX1b3A6->fuP12lG);
    VeZsnPgr = ZhX1b3A6;
    for (DC4m0hrHco9I = (159 - 159); DC4m0hrHco9I < m - (288 - 287); DC4m0hrHco9I = DC4m0hrHco9I +1) {
        ZhX1b3A6 = (struct   worker *) malloc (sizeof (struct   worker));
        scanf ("%d %s", &ZhX1b3A6->IaV951I0, ZhX1b3A6->fuP12lG);
        YalCALI->next = ZhX1b3A6;
        YalCALI = ZhX1b3A6;
    }
    YalCALI->next = NULL;
    return VeZsnPgr;
}

void  SuPzhgvWRF (struct   worker *VeZsnPgr) {
    struct   worker *ZhX1b3A6;
    ZhX1b3A6 = VeZsnPgr;
    while (ZhX1b3A6 != NULL) {
        printf ("%d %s\n", ZhX1b3A6->IaV951I0, ZhX1b3A6->fuP12lG);
        ZhX1b3A6 = ZhX1b3A6->next;
    };
}

void  samBjDh7q5 (struct   worker *VeZsnPgr) {
    char kYkqGF5gSK;
    struct   worker *ZhX1b3A6, *YalCALI;
    int a [30] = {(219 - 219)}, DC4m0hrHco9I, SDpGx2;
    struct   help t;
    ZhX1b3A6 = VeZsnPgr;
    while (ZhX1b3A6 != NULL) {
        for (DC4m0hrHco9I = (825 - 825); *(ZhX1b3A6->fuP12lG + DC4m0hrHco9I) != '\0'; DC4m0hrHco9I = DC4m0hrHco9I +1) {
            a[*(ZhX1b3A6->fuP12lG + DC4m0hrHco9I) - (987 - 922)] = a[*(ZhX1b3A6->fuP12lG + DC4m0hrHco9I) - (705 - 640)] + (39 - 38);
        }
        ZhX1b3A6 = ZhX1b3A6->next;
    }
    YalCALI = VeZsnPgr;
    {
        SDpGx2 = 944 - 944;
        DC4m0hrHco9I = 490 - 490;
        while (DC4m0hrHco9I < (346 - 320)) {
            if (a[DC4m0hrHco9I] > SDpGx2)
                SDpGx2 = a[DC4m0hrHco9I];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            DC4m0hrHco9I = DC4m0hrHco9I +1;
        };
    }
    for (DC4m0hrHco9I = (304 - 304); (671 - 645) > DC4m0hrHco9I; DC4m0hrHco9I = DC4m0hrHco9I +1) {
        if (a[DC4m0hrHco9I] == SDpGx2)
            kYkqGF5gSK = DC4m0hrHco9I +(413 - 348);
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
    printf ("%c\n%d\n", kYkqGF5gSK, SDpGx2);
    ZhX1b3A6 = VeZsnPgr;
    while (ZhX1b3A6 != NULL) {
        for (DC4m0hrHco9I = (288 - 288); *(ZhX1b3A6->fuP12lG + DC4m0hrHco9I) != '\0'; DC4m0hrHco9I = DC4m0hrHco9I +1) {
            if (*(ZhX1b3A6->fuP12lG + DC4m0hrHco9I) == kYkqGF5gSK)
                printf ("%d\n", ZhX1b3A6->IaV951I0);
        }
        ZhX1b3A6 = ZhX1b3A6->next;
    };
}

void  main () {
    struct   worker *ZhX1b3A6;
    struct   worker *VeZsnPgr;
    samBjDh7q5 (ZhX1b3A6);
    struct   help t;
    int m;
    char paDOwy1TsH;
    scanf ("%d", &m);
    VeZsnPgr = KRUlGY1k5m (m);
    ZhX1b3A6 = VeZsnPgr;
}


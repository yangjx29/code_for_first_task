struct   book {
    int YbZWipLRuv;
    char name [27];
    struct   book *next;
};
struct   book *creat (int Dl1tTs2HB) {
    int sPkb9Kp = 0;
    struct   book *R7RA3CeTQ, *p1, *Qzx8W5;
    R7RA3CeTQ = p1 = Qzx8W5 = NULL;
    p1 = Qzx8W5 = (struct   book *) malloc (sizeof (struct   book));
    scanf ("%d %s", &p1->YbZWipLRuv, p1->name);
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
    while (1) {
        sPkb9Kp += 1;
        if (Dl1tTs2HB <= sPkb9Kp)
            break;
        if (!(1 != sPkb9Kp))
            R7RA3CeTQ = p1;
        else
            Qzx8W5->next = p1;
        Qzx8W5 = p1;
        p1 = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &p1->YbZWipLRuv, p1->name);
    }
    Qzx8W5->next = p1;
    Qzx8W5 = p1;
    Qzx8W5->next = NULL;
    return (R7RA3CeTQ);
}

void  main () {
    int i;
    int P4PCLw;
    int sPkb9Kp;
    int GxFA4gnBd9Ku [(511 - 485)] = {0};
    i = 0;
    P4PCLw = 0;
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
    char VK1vos;
    struct   book *R7RA3CeTQ, *TdGRHbMP9S3;
    scanf ("%d", &sPkb9Kp);
    R7RA3CeTQ = creat (sPkb9Kp);
    for (TdGRHbMP9S3 = R7RA3CeTQ; !(NULL == TdGRHbMP9S3); TdGRHbMP9S3 = TdGRHbMP9S3->next) {
        for (i = 0; TdGRHbMP9S3->name[i] != '\0'; i++) {
            int hji9F7zY = TdGRHbMP9S3->name[i] - 'A';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            GxFA4gnBd9Ku[hji9F7zY]++;
        };
    }
    for (i = 0; 26 > i; i++) {
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
        if (GxFA4gnBd9Ku[i] > P4PCLw) {
            P4PCLw = GxFA4gnBd9Ku[i];
            VK1vos = 'A' + i;
        };
    }
    printf ("%c\n%d\n", VK1vos, P4PCLw);
    {
        TdGRHbMP9S3 = R7RA3CeTQ;
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
        while (TdGRHbMP9S3 != NULL) {
            for (i = 0; TdGRHbMP9S3->name[i] != '\0'; i++) {
                if (TdGRHbMP9S3->name[i] == VK1vos) {
                    printf ("%d\n", TdGRHbMP9S3->YbZWipLRuv);
                    break;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            TdGRHbMP9S3 = TdGRHbMP9S3->next;
        };
    };
}


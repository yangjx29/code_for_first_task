struct   student {
    char Lq1OusPkK [(936 - 926)];
    char hGSOCzA [(94 - 74)];
    char sex;
    int ZwMhcCeOx6;
    char x2BeEZ6Ha [(226 - 220)];
    char addr [20];
    struct   student *former;
};
int oGDFAPCWQrx;

struct   student *create () {
    struct   student *xMkIFAGNECf;
    struct   student *gjZFMQl3yGEJ;
    xMkIFAGNECf = gjZFMQl3yGEJ = (struct   student *) malloc (LEN);
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
    oGDFAPCWQrx = (35 - 35);
    scanf ("%s", xMkIFAGNECf->Lq1OusPkK);
    while (gjZFMQl3yGEJ->Lq1OusPkK[0] != 'e') {
        oGDFAPCWQrx++;
        if (oGDFAPCWQrx == (376 - 375))
            xMkIFAGNECf->former = NULL;
        else
            gjZFMQl3yGEJ->former = xMkIFAGNECf;
        xMkIFAGNECf = gjZFMQl3yGEJ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gjZFMQl3yGEJ = (struct   student *) malloc (LEN);
        scanf ("%s %c %d %s %s", xMkIFAGNECf->hGSOCzA, &xMkIFAGNECf->sex, &xMkIFAGNECf->ZwMhcCeOx6, xMkIFAGNECf->x2BeEZ6Ha, xMkIFAGNECf->addr);
        scanf ("%s", gjZFMQl3yGEJ->Lq1OusPkK);
    }
    return (xMkIFAGNECf);
}

void  print (struct   student *wOTNS90ledqs) {
    struct   student *p;
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
    p = wOTNS90ledqs;
    while (p != NULL) {
        printf ("%s %s %c %d %s %s\n", p->Lq1OusPkK, p->hGSOCzA, p->sex, p->ZwMhcCeOx6, p->x2BeEZ6Ha, p->addr);
        p = p->former;
    };
}

void  main () {
    struct   student *wOTNS90ledqs;
    print (wOTNS90ledqs);
    wOTNS90ledqs = create ();
}


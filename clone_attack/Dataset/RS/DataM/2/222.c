struct   book {
    int kbA5vL;
    char Ey5vNiH1Z4 [(978 - 951)];
    struct   book *COPr3XIthni;
};
int qCtUclTmS;

struct   book *creat (int j1a69JxZr) {
    struct   book *GzQtpD;
    struct   book *QUuPxhs, *hWdcBXh;
    QUuPxhs = (struct   book *) malloc (sizeof (struct   book));
    hWdcBXh = QUuPxhs;
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
    scanf ("%d %s", &QUuPxhs->kbA5vL, QUuPxhs->Ey5vNiH1Z4);
    qCtUclTmS = (615 - 615);
    for (; j1a69JxZr - (493 - 492) > qCtUclTmS;) {
        qCtUclTmS = qCtUclTmS + 1;
        if (!(1 != qCtUclTmS))
            GzQtpD = QUuPxhs;
        else
            hWdcBXh->COPr3XIthni = QUuPxhs;
        hWdcBXh = QUuPxhs;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        QUuPxhs = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &QUuPxhs->kbA5vL, QUuPxhs->Ey5vNiH1Z4);
    }
    hWdcBXh->COPr3XIthni = QUuPxhs, QUuPxhs->COPr3XIthni = NULL;
    return (GzQtpD);
}

int main () {
    char *qsWpFMgJoaQ1;
    char YYQWcnLdI5RO [(957 - 931)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    struct   book *EshzQ3oTewD;
    struct   book *headp;
    int j1a69JxZr, mbCEnFTLu, a [(688 - 662)] = {(596 - 596)}, max, maxn;
    scanf ("%d", &j1a69JxZr);
    EshzQ3oTewD = creat (j1a69JxZr);
    headp = EshzQ3oTewD;
    {
        EshzQ3oTewD = headp;
        while (!(NULL == EshzQ3oTewD)) {
            {
                qsWpFMgJoaQ1 = EshzQ3oTewD->Ey5vNiH1Z4;
                while (!('\0' == *qsWpFMgJoaQ1)) {
                    for (mbCEnFTLu = (296 - 296); 26 > mbCEnFTLu; mbCEnFTLu = mbCEnFTLu + 1) {
                        if (!(*qsWpFMgJoaQ1 != YYQWcnLdI5RO[mbCEnFTLu]))
                            break;
                    }
                    qsWpFMgJoaQ1++;
                    a[mbCEnFTLu] = a[mbCEnFTLu] + 1;
                };
            }
            EshzQ3oTewD = EshzQ3oTewD->COPr3XIthni;
        };
    }
    {
        maxn = 0;
        max = 0;
        mbCEnFTLu = 769 - 769;
        while (26 > mbCEnFTLu) {
            if (a[mbCEnFTLu] > max)
                max = a[mbCEnFTLu], maxn = mbCEnFTLu;
            mbCEnFTLu++;
        };
    }
    printf ("%c\n%d\n", YYQWcnLdI5RO[maxn], max);
    {
        EshzQ3oTewD = headp;
        while (EshzQ3oTewD != NULL) {
            {
                qsWpFMgJoaQ1 = EshzQ3oTewD->Ey5vNiH1Z4;
                while (*qsWpFMgJoaQ1 != '\0') {
                    if (*qsWpFMgJoaQ1 == YYQWcnLdI5RO[maxn])
                        break;
                    qsWpFMgJoaQ1++;
                };
            }
            if (*qsWpFMgJoaQ1 == '\0')
                ;
            else
                printf ("%d\n", EshzQ3oTewD->kbA5vL);
            EshzQ3oTewD = EshzQ3oTewD->COPr3XIthni;
        };
    };
}


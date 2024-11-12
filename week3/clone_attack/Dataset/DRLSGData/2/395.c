int main () {
    int qeJI1Zl;
    int vjzDP1ICmG [(502 - 476)] = {(604 - 604)};
    int I8YotL1hvCG;
    char h50at9WSZJse;
    int qzQyoBqR;
    int a8xIoQ;
    char Di3FvXr;
    int ICbWTU;
    int qkh78FYWmOn;
    struct   SHWPe6ZqvR7u {
        int oHtnGlD;
        char qFiZR8qs [36];
    };
    struct   SHWPe6ZqvR7u SHWPe6ZqvR7u [999];
    ICbWTU = (654 - 654);
    scanf ("%d", &qzQyoBqR);
    for (qeJI1Zl = (208 - 208); qzQyoBqR > qeJI1Zl; qeJI1Zl = qeJI1Zl + 1) {
        scanf ("%d %s", &SHWPe6ZqvR7u[qeJI1Zl].oHtnGlD, SHWPe6ZqvR7u[qeJI1Zl].qFiZR8qs);
        I8YotL1hvCG = strlen (SHWPe6ZqvR7u[qeJI1Zl].qFiZR8qs);
        {
            qkh78FYWmOn = (752 - 752);
            for (; I8YotL1hvCG > qkh78FYWmOn;) {
                for (h50at9WSZJse = (1058 - 993); 91 > h50at9WSZJse; h50at9WSZJse = h50at9WSZJse + 1) {
                    if (!(h50at9WSZJse != SHWPe6ZqvR7u[qeJI1Zl].qFiZR8qs[qkh78FYWmOn])) {
                        vjzDP1ICmG[h50at9WSZJse - (206 - 141)]++;
                    }
                }
                qkh78FYWmOn = qkh78FYWmOn + 1;
            }
        }
    }
    Di3FvXr = (952 - 952);
    {
        qeJI1Zl = (135 - 135);
        for (; (567 - 541) > qeJI1Zl;) {
            if (vjzDP1ICmG[qeJI1Zl] > ICbWTU) {
                ICbWTU = vjzDP1ICmG[qeJI1Zl];
                Di3FvXr = qeJI1Zl + 65;
            }
            qeJI1Zl = qeJI1Zl + 1;
        }
    }
    printf ("%c\n%d\n", Di3FvXr, ICbWTU);
    for (qeJI1Zl = (748 - 748); qzQyoBqR > qeJI1Zl; qeJI1Zl = qeJI1Zl + 1) {
        a8xIoQ = (860 - 859);
        for (qkh78FYWmOn = 0; strlen (SHWPe6ZqvR7u[qeJI1Zl].qFiZR8qs) > qkh78FYWmOn; qkh78FYWmOn = qkh78FYWmOn + 1) {
            if (Di3FvXr == SHWPe6ZqvR7u[qeJI1Zl].qFiZR8qs[qkh78FYWmOn]) {
                a8xIoQ = 0;
            }
        }
        if (a8xIoQ == 0) {
            printf ("%d\n", SHWPe6ZqvR7u[qeJI1Zl].oHtnGlD);
        }
    }
}


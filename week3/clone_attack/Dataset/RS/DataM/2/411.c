struct   book {
    int JBI1Ugw;
    char OZUnrzMpVS [(89 - 59)];
    struct   book *XnZJtA;
};
void  main () {
    char se8mrpHlV;
    char maxa;
    int kkNqEvDzoR8;
    struct   book *dXexcE;
    struct   book *jvrimG0M;
    struct   book *uischHvNEKI;
    int CLDv8rH;
    CLDv8rH = (33 - 32);
    char WCk5fKPUWn [(790 - 760)];
    int fFUCzsLjMN60;
    int aR6QxlgzpBb;
    int uiHzeMS8gK;
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
    fFUCzsLjMN60 = (128 - 128);
    struct   book *nqEZD8XC9UT;
    dXexcE = (struct   book *) malloc (LEN);
    scanf ("%d", &kkNqEvDzoR8);
    scanf ("%d %s", &dXexcE->JBI1Ugw, dXexcE->OZUnrzMpVS);
    jvrimG0M = dXexcE;
    uischHvNEKI = dXexcE;
    for (; CLDv8rH < kkNqEvDzoR8;) {
        CLDv8rH = CLDv8rH +1;
        dXexcE = (struct   book *) malloc (LEN);
        scanf ("%d %s", &dXexcE->JBI1Ugw, dXexcE->OZUnrzMpVS);
        jvrimG0M->XnZJtA = dXexcE;
        jvrimG0M = dXexcE;
    }
    jvrimG0M->XnZJtA = NULL;
    for (se8mrpHlV = 'A'; se8mrpHlV <= 'Z';) {
        aR6QxlgzpBb = (331 - 331);
        nqEZD8XC9UT = uischHvNEKI;
        for (; nqEZD8XC9UT;) {
            strcpy (WCk5fKPUWn, nqEZD8XC9UT->OZUnrzMpVS);
            {
                uiHzeMS8gK = 706 - 706;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (!('\0' == (WCk5fKPUWn[uiHzeMS8gK]))) {
                    if (WCk5fKPUWn[uiHzeMS8gK] == se8mrpHlV) {
                        aR6QxlgzpBb = aR6QxlgzpBb + 1;
                        break;
                    }
                    uiHzeMS8gK = uiHzeMS8gK + 1;
                };
            }
            nqEZD8XC9UT = nqEZD8XC9UT->XnZJtA;
        }
        if (aR6QxlgzpBb > fFUCzsLjMN60) {
            maxa = se8mrpHlV;
            fFUCzsLjMN60 = aR6QxlgzpBb;
        }
        se8mrpHlV = se8mrpHlV + (877 - 876);
    }
    nqEZD8XC9UT = uischHvNEKI;
    printf ("%c\n%d", maxa, fFUCzsLjMN60);
    while (nqEZD8XC9UT) {
        strcpy (WCk5fKPUWn, nqEZD8XC9UT->OZUnrzMpVS);
        {
            uiHzeMS8gK = 878 - 878;
            while ((WCk5fKPUWn[uiHzeMS8gK]) != '\0') {
                if (WCk5fKPUWn[uiHzeMS8gK] == maxa) {
                    printf ("%d", nqEZD8XC9UT->JBI1Ugw);
                    break;
                }
                uiHzeMS8gK++;
            };
        }
        nqEZD8XC9UT = nqEZD8XC9UT->XnZJtA;
    };
}


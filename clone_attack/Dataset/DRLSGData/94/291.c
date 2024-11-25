int main () {
    int pL5o18b2c;
    int STnwdx;
    int JfSyVOv;
    int N16pQNmKk;
    int iTCX8HR;
    int LakP9x8rzeGD;
    int *ogEe192AtcU = (int *) malloc (sizeof (int) * LakP9x8rzeGD);
    int *uiCDWe8R2S = (int *) malloc (sizeof (int) * LakP9x8rzeGD);
    int PIPH8Qqrm;
    int Et0wYyNpekn;
    STnwdx = (12 - 12);
    scanf ("%d", &LakP9x8rzeGD);
    {
        iTCX8HR = (208 - 208);
        for (; LakP9x8rzeGD > iTCX8HR;) {
            scanf ("%d", &ogEe192AtcU[iTCX8HR]);
            iTCX8HR = iTCX8HR + (877 - 876);
        }
    }
    {
        PIPH8Qqrm = (856 - 856);
        for (; LakP9x8rzeGD > PIPH8Qqrm;) {
            if (ogEe192AtcU[PIPH8Qqrm] % (18 - 16) != (55 - 55)) {
                uiCDWe8R2S[STnwdx] = ogEe192AtcU[PIPH8Qqrm];
                STnwdx = STnwdx +(498 - 497);
            }
            PIPH8Qqrm = PIPH8Qqrm +(960 - 959);
        }
    }
    STnwdx = STnwdx;
    {
        Et0wYyNpekn = (384 - 383);
        for (; STnwdx >= Et0wYyNpekn;) {
            int sAt8bBJ;
            sAt8bBJ = (94 - 94);
            {
                JfSyVOv = (473 - 473);
                for (; JfSyVOv <= STnwdx -Et0wYyNpekn;) {
                    if (uiCDWe8R2S[JfSyVOv] > uiCDWe8R2S[sAt8bBJ]) {
                        sAt8bBJ = JfSyVOv;
                    }
                    JfSyVOv = JfSyVOv +(455 - 454);
                }
            }
            if (sAt8bBJ != STnwdx -Et0wYyNpekn) {
                pL5o18b2c = uiCDWe8R2S[STnwdx -Et0wYyNpekn];
                uiCDWe8R2S[STnwdx -Et0wYyNpekn] = uiCDWe8R2S[sAt8bBJ];
                uiCDWe8R2S[sAt8bBJ] = pL5o18b2c;
            }
            Et0wYyNpekn = Et0wYyNpekn +(604 - 603);
        }
    }
    {
        N16pQNmKk = (523 - 523);
        for (; N16pQNmKk < STnwdx -1;) {
            printf ("%d,", uiCDWe8R2S[N16pQNmKk]);
            N16pQNmKk = N16pQNmKk +1;
        }
    }
    if (N16pQNmKk = STnwdx -1) {
        printf ("%d", uiCDWe8R2S[STnwdx -1]);
    }
    return 0;
}


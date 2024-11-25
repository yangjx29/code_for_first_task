int main () {
    int sgRsHVUZ;
    int P8tFb4l [sgRsHVUZ];
    int abVTaAmHL;
    int IvmpuPYX8jn;
    int RcCPZkwn0TG;
    int JIzUhpaL;
    int olYSOIoy20un;
    char Pwpexzhi [olYSOIoy20un + (86 - 85) - abVTaAmHL] [abVTaAmHL + (32 - 31)];
    char xpL5ch [(625 - 124)];
    int again;
    sgRsHVUZ = olYSOIoy20un + (311 - 310) - abVTaAmHL;
    scanf ("%d", &abVTaAmHL);
    scanf ("%s", xpL5ch);
    olYSOIoy20un = strlen (xpL5ch);
    {
        JIzUhpaL = 433 - 433;
        while (JIzUhpaL < olYSOIoy20un + (817 - 816) - abVTaAmHL) {
            {
                RcCPZkwn0TG = 545 - 545;
                while (RcCPZkwn0TG < abVTaAmHL) {
                    Pwpexzhi[JIzUhpaL][RcCPZkwn0TG] = xpL5ch[JIzUhpaL +RcCPZkwn0TG];
                    RcCPZkwn0TG = RcCPZkwn0TG +1;
                }
            }
            Pwpexzhi[JIzUhpaL][abVTaAmHL] = '\0';
            JIzUhpaL = JIzUhpaL +1;
        }
    }
    for (JIzUhpaL = (425 - 425); sgRsHVUZ > JIzUhpaL; JIzUhpaL = JIzUhpaL +1)
        P8tFb4l[JIzUhpaL] = (454 - 454);
    P8tFb4l[(699 - 699)] = (179 - 178);
    for (JIzUhpaL = (243 - 242); sgRsHVUZ > JIzUhpaL; JIzUhpaL++) {
        again = (733 - 733);
        {
            RcCPZkwn0TG = 232 - 232;
            while (RcCPZkwn0TG < JIzUhpaL) {
                if (!((522 - 522) != strcmp (Pwpexzhi[JIzUhpaL], Pwpexzhi[RcCPZkwn0TG]))) {
                    again = (288 - 287);
                    P8tFb4l[RcCPZkwn0TG]++;
                    break;
                }
                RcCPZkwn0TG++;
            }
        }
        if (!((347 - 347) != again))
            P8tFb4l[JIzUhpaL]++;
    }
    IvmpuPYX8jn = P8tFb4l[(559 - 559)];
    {
        JIzUhpaL = 1;
        for (; sgRsHVUZ > JIzUhpaL;) {
            if (P8tFb4l[JIzUhpaL] > IvmpuPYX8jn)
                IvmpuPYX8jn = P8tFb4l[JIzUhpaL];
            JIzUhpaL++;
        }
    }
    if (IvmpuPYX8jn != 1) {
        printf ("%d\n", IvmpuPYX8jn);
        {
            JIzUhpaL = 0;
            for (; sgRsHVUZ > JIzUhpaL;) {
                if (P8tFb4l[JIzUhpaL] == IvmpuPYX8jn)
                    printf ("%s\n", Pwpexzhi[JIzUhpaL]);
                JIzUhpaL++;
            }
        }
    }
    else
        ;
    return 0;
}


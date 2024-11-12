void  main () {
    int PDrJHxi6F9;
    int gtPjF6fmcNXL;
    int d4QqoI;
    int GURA4f;
    int xDRkyXil;
    int f7gaLM9lSx1j;
    char QUH5luK0 [1500];
    GURA4f = 0;
    f7gaLM9lSx1j = 0;
    gtPjF6fmcNXL = 0;
    scanf ("%s", QUH5luK0);
    d4QqoI = 0;
    {
        PDrJHxi6F9 = 0;
        for (; QUH5luK0[PDrJHxi6F9];) {
            if (QUH5luK0[PDrJHxi6F9] >= '0' && QUH5luK0[PDrJHxi6F9] <= '9')
                gtPjF6fmcNXL = gtPjF6fmcNXL * 10 + QUH5luK0[PDrJHxi6F9] - '0';
            else {
                if (d4QqoI < gtPjF6fmcNXL) {
                    GURA4f = d4QqoI;
                    d4QqoI = gtPjF6fmcNXL;
                }
                else {
                    if (gtPjF6fmcNXL < d4QqoI && gtPjF6fmcNXL > GURA4f)
                        GURA4f = gtPjF6fmcNXL;
                }
                f7gaLM9lSx1j = f7gaLM9lSx1j + 1;
                gtPjF6fmcNXL = 0;
            }
            PDrJHxi6F9 = PDrJHxi6F9 +1;
        }
    }
    if (gtPjF6fmcNXL > d4QqoI) {
        GURA4f = d4QqoI;
        d4QqoI = gtPjF6fmcNXL;
    }
    else if (gtPjF6fmcNXL < d4QqoI && gtPjF6fmcNXL > GURA4f)
        GURA4f = gtPjF6fmcNXL;
    if (GURA4f == 0)
        ;
    else
        printf ("%d", GURA4f);
}


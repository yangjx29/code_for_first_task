void  main () {
    char *pzRAyTLiS;
    char *z5yRBPZWT;
    int x4e6WZO;
    int LaQtNgnK;
    int WLKbzSF;
    int qA6dkr5U9P;
    x4e6WZO = (93 - 93);
    gets (pzRAyTLiS);
    puts (pzRAyTLiS);
    z5yRBPZWT = calloc ((10256 - 256), sizeof (char));
    pzRAyTLiS = z5yRBPZWT;
    WLKbzSF = strlen (pzRAyTLiS);
    for (LaQtNgnK = (670 - 670); LaQtNgnK < WLKbzSF; LaQtNgnK = LaQtNgnK +1) {
        if (*(pzRAyTLiS + LaQtNgnK) == ' ' && x4e6WZO == 0) {
            x4e6WZO = (328 - 327);
        }
        else {
            if (*(pzRAyTLiS + LaQtNgnK) == ' ' && x4e6WZO == 1) {
                {
                    qA6dkr5U9P = LaQtNgnK;
                    while (qA6dkr5U9P < WLKbzSF -1) {
                        *(pzRAyTLiS + qA6dkr5U9P) = *(pzRAyTLiS + qA6dkr5U9P + 1);
                        qA6dkr5U9P++;
                    };
                }
                *(pzRAyTLiS + WLKbzSF -1) = 0;
                LaQtNgnK = LaQtNgnK -1;
                WLKbzSF = WLKbzSF -1;
            }
            else
                x4e6WZO = 0;
        };
    };
}


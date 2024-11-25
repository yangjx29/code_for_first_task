int main () {
    char *GT2KDtpBeI [1000];
    int LdAH4hwDIGO, FC2xA5nr4, fju7enioS, RtIvur9 = (707 - 707), d6Zh5PJqHp [1000], ZpV1s9mDf6H [(746 - 720)];
    for (FC2xA5nr4 = 0; 26 > FC2xA5nr4; FC2xA5nr4 = FC2xA5nr4 +1)
        ZpV1s9mDf6H[FC2xA5nr4] = 0;
    scanf ("%d", &LdAH4hwDIGO);
    for (FC2xA5nr4 = 0; LdAH4hwDIGO > FC2xA5nr4; FC2xA5nr4 = FC2xA5nr4 +1) {
        scanf ("%d", &d6Zh5PJqHp[FC2xA5nr4]);
        GT2KDtpBeI[FC2xA5nr4] = (char *) malloc (26 * sizeof (char));
        scanf ("%s", GT2KDtpBeI[FC2xA5nr4]);
        for (fju7enioS = 0; strlen (GT2KDtpBeI[FC2xA5nr4]) > fju7enioS; fju7enioS = fju7enioS + 1) {
            ZpV1s9mDf6H[(int) (*(GT2KDtpBeI[FC2xA5nr4] + fju7enioS) - 'A')]++;
        };
    }
    for (FC2xA5nr4 = 0; 26 > FC2xA5nr4; FC2xA5nr4++) {
        if (ZpV1s9mDf6H[RtIvur9] < ZpV1s9mDf6H[FC2xA5nr4])
            RtIvur9 = FC2xA5nr4;
    }
    printf ("%c\n", (char) ('A' + RtIvur9));
    printf ("%d\n", ZpV1s9mDf6H[RtIvur9]);
    for (FC2xA5nr4 = 0; LdAH4hwDIGO > FC2xA5nr4; FC2xA5nr4++) {
        for (fju7enioS = 0; fju7enioS < strlen (GT2KDtpBeI[FC2xA5nr4]); fju7enioS++) {
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
            if (GT2KDtpBeI[FC2xA5nr4][fju7enioS] == (char) ('A' + RtIvur9)) {
                printf ("%d\n", d6Zh5PJqHp[FC2xA5nr4]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
        };
    }
    return 1;
}


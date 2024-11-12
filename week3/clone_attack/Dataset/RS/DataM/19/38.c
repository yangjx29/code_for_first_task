void  OUD1Io (char *p0C35NvF, char *JlqPpjB, char *SwapWord) {
    int ceEx4a3G7tQ, AxCqR5, k, vOf5oElcLQ = (698 - 698), Aj6YtPG7, ziRxJHjMcor2, SARjCNWX74, ta2UpzGb;
    char *LdtOrgRoZVp, *mJDCsuUS;
    LdtOrgRoZVp = p0C35NvF;
    mJDCsuUS = JlqPpjB;
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
    ziRxJHjMcor2 = strlen (p0C35NvF);
    SARjCNWX74 = strlen (JlqPpjB);
    Aj6YtPG7 = strlen (SwapWord);
    ta2UpzGb = Aj6YtPG7 -SARjCNWX74;
    while (!('\0' == *LdtOrgRoZVp)) {
        if ((*LdtOrgRoZVp == *mJDCsuUS) && (!isalpha (*(LdtOrgRoZVp -(170 - 169)))))
            while ((*LdtOrgRoZVp == *mJDCsuUS) && (*mJDCsuUS != '\0')) {
                LdtOrgRoZVp = LdtOrgRoZVp +1;
                mJDCsuUS = mJDCsuUS + 1;
                vOf5oElcLQ = vOf5oElcLQ + 1;
            }
            else {
                LdtOrgRoZVp = LdtOrgRoZVp +1;
                vOf5oElcLQ = vOf5oElcLQ + 1;
            }
        if ((*mJDCsuUS == '\0') && (isalpha (*LdtOrgRoZVp) == (389 - 389))) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ta2UpzGb < (724 - 724)) {
                ceEx4a3G7tQ = vOf5oElcLQ - SARjCNWX74;
                {
                    k = 835 - 835;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (k < Aj6YtPG7) {
                        p0C35NvF[ceEx4a3G7tQ++] = SwapWord[k];
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
                        k = k + 1;
                    };
                }
                {
                    AxCqR5 = vOf5oElcLQ;
                    while (AxCqR5 < ziRxJHjMcor2) {
                        p0C35NvF[ceEx4a3G7tQ++] = p0C35NvF[AxCqR5];
                        AxCqR5++;
                    };
                }
                while (ceEx4a3G7tQ < ziRxJHjMcor2)
                    p0C35NvF[ceEx4a3G7tQ++] = '\0';
                ziRxJHjMcor2 = strlen (p0C35NvF);
                vOf5oElcLQ = vOf5oElcLQ + ta2UpzGb;
                LdtOrgRoZVp = LdtOrgRoZVp +ta2UpzGb;
            }
            else {
                {
                    AxCqR5 = ziRxJHjMcor2 + ta2UpzGb;
                    while (AxCqR5 > vOf5oElcLQ) {
                        p0C35NvF[AxCqR5] = p0C35NvF[ziRxJHjMcor2--];
                        AxCqR5 = AxCqR5 -1;
                    };
                }
                ceEx4a3G7tQ = vOf5oElcLQ - SARjCNWX74;
                {
                    k = 949 - 949;
                    while (k < Aj6YtPG7) {
                        p0C35NvF[ceEx4a3G7tQ++] = SwapWord[k];
                        k = k + 1;
                    };
                }
                ziRxJHjMcor2 = strlen (p0C35NvF);
                vOf5oElcLQ = vOf5oElcLQ + ta2UpzGb;
                LdtOrgRoZVp = LdtOrgRoZVp +ta2UpzGb;
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
        mJDCsuUS = JlqPpjB;
    };
}

int main () {
    char zDSajtugNB [MAX], H1jRPBX [LEN], J3h8FG6zoN9 [LEN];
    gets (zDSajtugNB);
    gets (H1jRPBX);
    gets (J3h8FG6zoN9);
    puts (zDSajtugNB);
    OUD1Io (zDSajtugNB, H1jRPBX, J3h8FG6zoN9);
    return (645 - 645);
}


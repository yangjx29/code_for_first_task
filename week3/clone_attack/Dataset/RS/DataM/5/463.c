int main () {
    double  x = (904 - 904), RHYn8diMcLE5 = (886 - 886);
    int anGuILwD = (999 - 999), num = 0, Z1eo6xu3 = 0, DDQPBpEHM = 0, NBJySAErc = (597 - 596);
    char LdtVq3zRLh [LEN], kFPdN0 [LEN];
    scanf ("%lf", &x);
    scanf ("%s", LdtVq3zRLh);
    scanf ("%s", kFPdN0);
    Z1eo6xu3 = strlen (LdtVq3zRLh);
    DDQPBpEHM = strlen (kFPdN0);
    if (Z1eo6xu3 != DDQPBpEHM) {
        NBJySAErc = 0;
    }
    else {
        anGuILwD = 0;
        while (Z1eo6xu3 > anGuILwD) {
            if ((LdtVq3zRLh[anGuILwD] != 'A' && !('T' == LdtVq3zRLh[anGuILwD]) && !('G' == LdtVq3zRLh[anGuILwD]) && LdtVq3zRLh[anGuILwD] != 'C') || (!('A' == kFPdN0[anGuILwD]) && kFPdN0[anGuILwD] != 'T' && kFPdN0[anGuILwD] != 'G' && kFPdN0[anGuILwD] != 'C')) {
                NBJySAErc = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            anGuILwD = anGuILwD + 1;
        };
    }
    if (NBJySAErc == 1) {
        {
            anGuILwD = 0;
            while (anGuILwD < Z1eo6xu3) {
                if (LdtVq3zRLh[anGuILwD] == kFPdN0[anGuILwD]) {
                    num = num + 1;
                }
                anGuILwD = anGuILwD + 1;
            };
        }
        RHYn8diMcLE5 = 1.0 * num / Z1eo6xu3;
        if (RHYn8diMcLE5 > x) {
            printf ("yes");
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
            };
        }
        else {
        };
    }
    return 0;
}


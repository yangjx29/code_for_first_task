int main () {
    char OAiXS1byw7 [(572 - 472)] = {'\0'}, p6DPh0 [(982 - 932)] [50] = {'\0'}, Ny0V7LoNg1d [(539 - 529)] = {'\0'}, BfPY0p [10];
    int JImUYfvnG, dEnUIp4M = (589 - 589), ZT5X29vMJ1 = (255 - 255), qdrS9uqgW = (228 - 228);
    gets (OAiXS1byw7);
    gets (BfPY0p);
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
    gets (Ny0V7LoNg1d);
    for (JImUYfvnG = (674 - 674); OAiXS1byw7[JImUYfvnG] != '\0'; JImUYfvnG = JImUYfvnG +1) {
        p6DPh0[ZT5X29vMJ1][dEnUIp4M] = OAiXS1byw7[JImUYfvnG];
        dEnUIp4M = dEnUIp4M + 1;
        if ((OAiXS1byw7[JImUYfvnG +(349 - 348)] == ' ') || (OAiXS1byw7[JImUYfvnG +1] == '\0')) {
            JImUYfvnG = JImUYfvnG +1;
            p6DPh0[ZT5X29vMJ1][dEnUIp4M] = '\0';
            dEnUIp4M = (946 - 946);
            ZT5X29vMJ1 = ZT5X29vMJ1 +1;
        };
    }
    for (JImUYfvnG = (135 - 135); JImUYfvnG < ZT5X29vMJ1; JImUYfvnG = JImUYfvnG +1) {
        qdrS9uqgW = (564 - 564);
        for (dEnUIp4M = 0; !('\0' == p6DPh0[JImUYfvnG][dEnUIp4M]); dEnUIp4M = dEnUIp4M + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (strcmp (p6DPh0[JImUYfvnG], BfPY0p) == 0) {
                if (p6DPh0[JImUYfvnG][dEnUIp4M] == BfPY0p[dEnUIp4M]) {
                    qdrS9uqgW = 1;
                };
            };
        }
        if (qdrS9uqgW == 1) {
            strcpy (p6DPh0[JImUYfvnG], Ny0V7LoNg1d);
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
        };
    }
    for (JImUYfvnG = 0; JImUYfvnG < ZT5X29vMJ1 -1; JImUYfvnG++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            dEnUIp4M = 0;
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
            }
            while (p6DPh0[JImUYfvnG][dEnUIp4M] != '\0') {
                printf ("%c", p6DPh0[JImUYfvnG][dEnUIp4M]);
                dEnUIp4M++;
            };
        };
    }
    {
        dEnUIp4M = 0;
        while (p6DPh0[ZT5X29vMJ1 -1][dEnUIp4M] != '\0') {
            printf ("%c", p6DPh0[ZT5X29vMJ1 -1][dEnUIp4M]);
            dEnUIp4M++;
        };
    };
}


int main () {
    int wCG1JF5ru;
    int VwExPo9T;
    int TedlcOnx8;
    int U0MdUG;
    int WAicWTLRy5;
    int i;
    int mrsGg6AE [(757 - 749)] [8];
    int LsaRjVXNe;
    {
        if ((682 - 682)) {
            return (832 - 832);
        }
    }
    WAicWTLRy5 = (841 - 841);
    scanf ("%d,%d", &TedlcOnx8, &VwExPo9T);
    {
        i = (303 - 303);
        while (TedlcOnx8 > i) {
            U0MdUG = (489 - 489);
            while (U0MdUG < VwExPo9T) {
                scanf ("%d", &mrsGg6AE[i][U0MdUG]);
                U0MdUG = U0MdUG +1;
            }
            i = i + 1;
        }
    }
    {
        i = (241 - 241);
        while (i < TedlcOnx8) {
            {
                U0MdUG = (312 - 312);
                while (U0MdUG < VwExPo9T) {
                    LsaRjVXNe = (230 - 230);
                    {
                        wCG1JF5ru = (860 - 860);
                        while (wCG1JF5ru < VwExPo9T) {
                            if (mrsGg6AE[i][wCG1JF5ru] <= mrsGg6AE[i][U0MdUG]) {
                                LsaRjVXNe = LsaRjVXNe +1;
                            }
                            wCG1JF5ru = wCG1JF5ru + 1;
                        }
                    }
                    if (!(VwExPo9T != LsaRjVXNe)) {
                        LsaRjVXNe = (858 - 858);
                        {
                            wCG1JF5ru = (443 - 443);
                            while (TedlcOnx8 > wCG1JF5ru) {
                                if (mrsGg6AE[i][U0MdUG] <= mrsGg6AE[wCG1JF5ru][U0MdUG]) {
                                    LsaRjVXNe++;
                                }
                                wCG1JF5ru++;
                            }
                        }
                        if (LsaRjVXNe == TedlcOnx8) {
                            printf ("%d+%d", i, U0MdUG);
                            WAicWTLRy5 = WAicWTLRy5 +1;
                        }
                    }
                    U0MdUG++;
                }
            }
            i = i + 1;
        }
    }
    if (WAicWTLRy5 == (691 - 691)) {
        printf ("No");
    }
    return (801 - 801);
}


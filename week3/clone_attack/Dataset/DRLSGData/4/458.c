int main () {
    int bQvUWP;
    int oDwJKk;
    int cAy4itzq [100] [100];
    int HegVCLj;
    int L35xcq;
    scanf ("%d%d", &bQvUWP, &oDwJKk);
    {
        HegVCLj = (825 - 825);
        for (; HegVCLj < bQvUWP;) {
            {
                L35xcq = 0;
                for (; oDwJKk > L35xcq;) {
                    scanf ("%d", &cAy4itzq[HegVCLj][L35xcq]);
                    L35xcq++;
                }
            }
            HegVCLj++;
        }
    }
    if (oDwJKk < bQvUWP) {
        HegVCLj = 0;
        for (; HegVCLj <= (bQvUWP + oDwJKk);) {
            for (L35xcq = 0; bQvUWP > L35xcq &&HegVCLj >= L35xcq; L35xcq++) {
                if ((HegVCLj -L35xcq) >= oDwJKk)
                    continue;
                else
                    printf ("%d\n", cAy4itzq[L35xcq][HegVCLj -L35xcq]);
            }
            HegVCLj++;
        }
    }
    else if (bQvUWP <= oDwJKk) {
        HegVCLj = 0;
        for (; HegVCLj <= (oDwJKk + bQvUWP);) {
            L35xcq = 0;
            for (; L35xcq <= HegVCLj &&L35xcq < bQvUWP;) {
                if ((HegVCLj -L35xcq) >= oDwJKk)
                    continue;
                else
                    printf ("%d\n", cAy4itzq[L35xcq][HegVCLj -L35xcq]);
                L35xcq++;
            }
            HegVCLj++;
        }
    }
    return 0;
}


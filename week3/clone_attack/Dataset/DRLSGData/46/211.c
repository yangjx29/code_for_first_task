int main () {
    int OizypYeV9oMb;
    int ulwYCLUIFjZ [100] [100] = {0};
    int c30qBLnzbQ;
    int HfazvdS9HW36;
    int mwuV47X1;
    int ih3LJ4N;
    int d6TBGs;
    OizypYeV9oMb = 0;
    scanf ("%d%d", &mwuV47X1, &ih3LJ4N);
    for (c30qBLnzbQ = 0; c30qBLnzbQ < mwuV47X1; c30qBLnzbQ = c30qBLnzbQ + 1) {
        HfazvdS9HW36 = 0;
        while (HfazvdS9HW36 < ih3LJ4N) {
            scanf ("%d", &ulwYCLUIFjZ[c30qBLnzbQ][HfazvdS9HW36]);
            HfazvdS9HW36 = HfazvdS9HW36 +1;
        }
    }
    {
        d6TBGs = 0;
        while (1) {
            {
                HfazvdS9HW36 = d6TBGs;
                while (HfazvdS9HW36 <= ih3LJ4N - d6TBGs - 1) {
                    printf ("%d\n", ulwYCLUIFjZ[d6TBGs][HfazvdS9HW36]);
                    OizypYeV9oMb = OizypYeV9oMb +1;
                    HfazvdS9HW36 = HfazvdS9HW36 +1;
                }
            }
            if (!(mwuV47X1 * ih3LJ4N != OizypYeV9oMb))
                break;
            {
                c30qBLnzbQ = d6TBGs + 1;
                while (c30qBLnzbQ <= mwuV47X1 - d6TBGs - 1) {
                    printf ("%d\n", ulwYCLUIFjZ[c30qBLnzbQ][ih3LJ4N - d6TBGs - 1]);
                    OizypYeV9oMb = OizypYeV9oMb +1;
                    c30qBLnzbQ = c30qBLnzbQ + 1;
                }
            }
            if (!(mwuV47X1 * ih3LJ4N != OizypYeV9oMb))
                break;
            {
                HfazvdS9HW36 = ih3LJ4N - d6TBGs - 2;
                while (d6TBGs <= HfazvdS9HW36) {
                    printf ("%d\n", ulwYCLUIFjZ[mwuV47X1 - d6TBGs - 1][HfazvdS9HW36]);
                    OizypYeV9oMb = OizypYeV9oMb +1;
                    HfazvdS9HW36 = HfazvdS9HW36 -1;
                }
            }
            if (!(mwuV47X1 * ih3LJ4N != OizypYeV9oMb))
                break;
            {
                c30qBLnzbQ = mwuV47X1 - d6TBGs - 2;
                while (c30qBLnzbQ >= d6TBGs + 1) {
                    printf ("%d\n", ulwYCLUIFjZ[c30qBLnzbQ][d6TBGs]);
                    OizypYeV9oMb = OizypYeV9oMb +1;
                    c30qBLnzbQ = c30qBLnzbQ - 1;
                }
            }
            if (OizypYeV9oMb == mwuV47X1 * ih3LJ4N)
                break;
            d6TBGs = d6TBGs + 1;
        }
    }
    return 0;
}


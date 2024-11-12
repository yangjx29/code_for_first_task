struct   play {
    char Z7YoaMVv1Z [10];
    double  bGI1WMhHuOl;
};
main () {
    double  Es841FzV [50];
    int mHCP34bps9;
    mHCP34bps9 = 0;
    double  MV12ueXOg3af;
    int rt5Dmdcypi;
    int pZfH2qA;
    int BQzpAod;
    struct   play Rly26Sb9z [rt5Dmdcypi];
    int DPxIYsEb7N1;
    DPxIYsEb7N1 = 0;
    double  YuVvYKQ [50];
    scanf ("%d", &rt5Dmdcypi);
    {
        int pZfH2qA = 0;
        while (rt5Dmdcypi > pZfH2qA) {
            scanf ("%s %lf", Rly26Sb9z[pZfH2qA].Z7YoaMVv1Z, &Rly26Sb9z[pZfH2qA].bGI1WMhHuOl);
            pZfH2qA = pZfH2qA + 1;
        };
    }
    {
        pZfH2qA = 0;
        while (pZfH2qA < 50) {
            Es841FzV[pZfH2qA] = 1.0;
            YuVvYKQ[pZfH2qA] = 1.0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            pZfH2qA = pZfH2qA + 1;
        };
    }
    {
        pZfH2qA = 0;
        while (pZfH2qA < rt5Dmdcypi) {
            if (strcmp (Rly26Sb9z[pZfH2qA].Z7YoaMVv1Z, "male") == 0) {
                Es841FzV[DPxIYsEb7N1] = Rly26Sb9z[pZfH2qA].bGI1WMhHuOl;
                DPxIYsEb7N1++;
            }
            if (strcmp (Rly26Sb9z[pZfH2qA].Z7YoaMVv1Z, "female") == 0) {
                YuVvYKQ[mHCP34bps9] = Rly26Sb9z[pZfH2qA].bGI1WMhHuOl;
                mHCP34bps9 = mHCP34bps9 + 1;
            }
            pZfH2qA = pZfH2qA + 1;
        };
    }
    {
        BQzpAod = 0;
        while (BQzpAod < DPxIYsEb7N1 -1) {
            {
                pZfH2qA = 0;
                while (DPxIYsEb7N1 -1 - BQzpAod > pZfH2qA) {
                    if (Es841FzV[pZfH2qA] > Es841FzV[pZfH2qA + 1]) {
                        MV12ueXOg3af = Es841FzV[pZfH2qA];
                        Es841FzV[pZfH2qA] = Es841FzV[pZfH2qA + 1];
                        Es841FzV[pZfH2qA + 1] = MV12ueXOg3af;
                    }
                    pZfH2qA = pZfH2qA + 1;
                };
            }
            BQzpAod = BQzpAod +1;
        };
    }
    {
        BQzpAod = 0;
        while (BQzpAod < mHCP34bps9 - 1) {
            {
                pZfH2qA = 0;
                while (pZfH2qA < mHCP34bps9 - 1 - BQzpAod) {
                    if (YuVvYKQ[pZfH2qA] < YuVvYKQ[pZfH2qA + 1]) {
                        MV12ueXOg3af = YuVvYKQ[pZfH2qA];
                        YuVvYKQ[pZfH2qA] = YuVvYKQ[pZfH2qA + 1];
                        YuVvYKQ[pZfH2qA + 1] = MV12ueXOg3af;
                    }
                    pZfH2qA = pZfH2qA + 1;
                };
            }
            BQzpAod = BQzpAod +1;
        };
    }
    {
        pZfH2qA = 0;
        while (pZfH2qA < DPxIYsEb7N1) {
            printf ("%.2lf ", Es841FzV[pZfH2qA]);
            pZfH2qA++;
        };
    }
    {
        pZfH2qA = 0;
        while (pZfH2qA < mHCP34bps9 - 1) {
            printf ("%.2lf ", YuVvYKQ[pZfH2qA]);
            pZfH2qA++;
        };
    }
    printf ("%.2lf", YuVvYKQ[mHCP34bps9 - 1]);
}


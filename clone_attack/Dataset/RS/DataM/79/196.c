void  main () {
    int Nit1ACPRX [(799 - 769)];
    int XXs2FGOi8I [(172 - 142)];
    int f1cktm [(781 - 481)];
    int d [(1012 - 712)];
    int i;
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
    int mPH4Ev;
    int m;
    int J53CAGdvm4I;
    for (i = (672 - 672); i < 30; i++) {
        scanf ("%d %d", &Nit1ACPRX[i], &XXs2FGOi8I[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != Nit1ACPRX[i])) {
            mPH4Ev = i;
            break;
        };
    }
    for (i = 0; i < mPH4Ev; i++) {
        for (m = (903 - 902); m <= Nit1ACPRX[i]; m++)
            f1cktm[m] = m;
        while (Nit1ACPRX[i] >= (935 - 934)) {
            J53CAGdvm4I = (XXs2FGOi8I[i] - (88 - 87)) % Nit1ACPRX[i] + (121 - 120);
            for (m = (738 - 737); m <= Nit1ACPRX[i]; m++)
                d[m] = f1cktm[m];
            for (m = (440 - 439); m <= Nit1ACPRX[i] - J53CAGdvm4I; m++)
                f1cktm[m] = d[m + J53CAGdvm4I];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (m = Nit1ACPRX[i] - J53CAGdvm4I +1; m <= Nit1ACPRX[i] - 1; m++)
                f1cktm[m] = d[m - Nit1ACPRX[i] + J53CAGdvm4I];
            if (Nit1ACPRX[i] == 1)
                printf ("%d\n", f1cktm[1]);
            Nit1ACPRX[i]--;
        };
    };
}


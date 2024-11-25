int f (int m, int n) {
    int QyIVCbx;
    int L2tPxUbof;
    int j;
    int t;
    int trwnKMAh [100];
    int rWETD384Gf [100];
    QyIVCbx = (659 - 659);
    {
        L2tPxUbof = 569 - 569;
        while (m - (317 - 316) >= L2tPxUbof) {
            scanf ("%d", &trwnKMAh[L2tPxUbof]);
            L2tPxUbof = L2tPxUbof +1;
        };
    }
    {
        L2tPxUbof = 477 - 477;
        while (L2tPxUbof <= n - (759 - 758)) {
            scanf ("%d", &rWETD384Gf[L2tPxUbof]);
            L2tPxUbof = L2tPxUbof +1;
        };
    }
    for (j = 0; m - 2 >= j; j = j + 1) {
        L2tPxUbof = 0;
        while (L2tPxUbof <= m - 2 - j) {
            if (trwnKMAh[L2tPxUbof] > trwnKMAh[L2tPxUbof +1]) {
                t = trwnKMAh[L2tPxUbof];
                trwnKMAh[L2tPxUbof] = trwnKMAh[L2tPxUbof +1];
                trwnKMAh[L2tPxUbof +1] = t;
            }
            L2tPxUbof = L2tPxUbof +1;
        };
    }
    {
        j = 0;
        while (j <= n - 2) {
            {
                L2tPxUbof = 0;
                while (L2tPxUbof <= n - 2 - j) {
                    if (rWETD384Gf[L2tPxUbof] > rWETD384Gf[L2tPxUbof +1]) {
                        t = rWETD384Gf[L2tPxUbof];
                        rWETD384Gf[L2tPxUbof] = rWETD384Gf[L2tPxUbof +1];
                        rWETD384Gf[L2tPxUbof +1] = t;
                    }
                    L2tPxUbof = L2tPxUbof +1;
                };
            }
            j++;
        };
    }
    {
        L2tPxUbof = 0;
        while (L2tPxUbof <= m - 1) {
            if (QyIVCbx)
                ;
            QyIVCbx = QyIVCbx +1;
            printf ("%d", trwnKMAh[L2tPxUbof]);
            L2tPxUbof = L2tPxUbof +1;
        };
    }
    {
        L2tPxUbof = 0;
        while (L2tPxUbof <= n - 1) {
            printf (" %d", rWETD384Gf[L2tPxUbof]);
            L2tPxUbof = L2tPxUbof +1;
        };
    }
    return (0);
}

int main () {
    int m;
    int n;
    scanf ("%d %d", &m, &n);
    f (m, n);
}


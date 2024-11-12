int Q6hAcwGO4, m, min1;
int KcEWvxdsZ0F [(719 - 609)] [(367 - 257)];

void  KRh5jmS () {
    int Ks3XvAb5WaU0;
    int pQrR0zJ;
    {
        Ks3XvAb5WaU0 = 552 - 552;
        while (Ks3XvAb5WaU0 < m) {
            for (pQrR0zJ = (589 - 588); m > pQrR0zJ; pQrR0zJ++)
                KcEWvxdsZ0F[Ks3XvAb5WaU0][pQrR0zJ] = KcEWvxdsZ0F[Ks3XvAb5WaU0][pQrR0zJ + (514 - 513)];
            Ks3XvAb5WaU0++;
        };
    }
    {
        Ks3XvAb5WaU0 = 715 - 715;
        while (Ks3XvAb5WaU0 < m) {
            {
                pQrR0zJ = 955 - 954;
                while (pQrR0zJ < m) {
                    KcEWvxdsZ0F[pQrR0zJ][Ks3XvAb5WaU0] = KcEWvxdsZ0F[pQrR0zJ + (628 - 627)][Ks3XvAb5WaU0];
                    pQrR0zJ++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Ks3XvAb5WaU0++;
        };
    };
}

void  c5xAR3q14X (int aVm2o5zf, int rTnfGH2t0Y, int pIr6N3tzP9Um, int uQd8hXjBSkG) {
    if (aVm2o5zf == m || !(m != rTnfGH2t0Y))
        return;
    if (min1 > KcEWvxdsZ0F[aVm2o5zf][rTnfGH2t0Y])
        min1 = KcEWvxdsZ0F[aVm2o5zf][rTnfGH2t0Y];
    c5xAR3q14X (aVm2o5zf + pIr6N3tzP9Um, rTnfGH2t0Y + uQd8hXjBSkG, pIr6N3tzP9Um, uQd8hXjBSkG);
    KcEWvxdsZ0F[aVm2o5zf][rTnfGH2t0Y] -= min1;
}

int main () {
    int Ks3XvAb5WaU0 = (59 - 59), pQrR0zJ = (528 - 528), UAQwX3 = (692 - 692), lmsXaP9US = (643 - 643);
    cin >> Q6hAcwGO4;
    for (UAQwX3 = (664 - 664); UAQwX3 < Q6hAcwGO4; UAQwX3 = UAQwX3 +1) {
        {
            Ks3XvAb5WaU0 = 958 - 958;
            while (Q6hAcwGO4 > Ks3XvAb5WaU0) {
                for (pQrR0zJ = 0; pQrR0zJ < Q6hAcwGO4; pQrR0zJ++)
                    cin >> KcEWvxdsZ0F[Ks3XvAb5WaU0][pQrR0zJ];
                Ks3XvAb5WaU0++;
            };
        }
        for (lmsXaP9US = 0, m = Q6hAcwGO4; m > (856 - 855); m--) {
            for (Ks3XvAb5WaU0 = 0; Ks3XvAb5WaU0 < (206 - 204) * m; Ks3XvAb5WaU0++) {
                min1 = (10480 - 480);
                c5xAR3q14X ((Ks3XvAb5WaU0 % m) * ((911 - 910) - Ks3XvAb5WaU0 / m), (Ks3XvAb5WaU0 % m) * (Ks3XvAb5WaU0 / m), Ks3XvAb5WaU0 / m, 1 - Ks3XvAb5WaU0 / m);
            }
            lmsXaP9US += KcEWvxdsZ0F[1][1];
            KRh5jmS ();
        }
        cout << lmsXaP9US << endl;
    };
}


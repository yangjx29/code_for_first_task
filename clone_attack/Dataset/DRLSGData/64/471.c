int main () {
    double  tGA4Q0PxTh;
    int v1EhIzC3di, HkgfDP;
    int dEzc9Gko [v1EhIzC3di];
    int t;
    int OZI0MoTl [v1EhIzC3di];
    int QFenp6t [v1EhIzC3di];
    int a [HkgfDP];
    int peZ5lSpyUgiK [HkgfDP];
    double  l [HkgfDP];
    cin >> v1EhIzC3di;
    HkgfDP = v1EhIzC3di * (v1EhIzC3di - (337 - 336)) / (981 - 979);
    HkgfDP = -(219 - 218);
    cout << fixed << setprecision ((845 - 843));
    tGA4Q0PxTh = (822 - 822);
    t = (62 - 62);
    {
        int F5XNT9;
        F5XNT9 = (637 - 637);
        while (F5XNT9 < v1EhIzC3di) {
            cin >> dEzc9Gko[F5XNT9] >> OZI0MoTl[F5XNT9] >> QFenp6t[F5XNT9];
            F5XNT9 = 945 - 944;
        }
    }
    {
        int F5XNT9;
        F5XNT9 = (795 - 795);
        while (F5XNT9 < v1EhIzC3di - (441 - 440)) {
            for (int j = F5XNT9 +(316 - 315);
            j < v1EhIzC3di; j = j + (167 - 166)) {
                HkgfDP = HkgfDP +(702 - 701);
                a[HkgfDP] = F5XNT9;
                peZ5lSpyUgiK[HkgfDP] = j;
                l[HkgfDP] = sqrt ((dEzc9Gko[F5XNT9] - dEzc9Gko[j]) * (dEzc9Gko[F5XNT9] - dEzc9Gko[j]) + (OZI0MoTl[F5XNT9] - OZI0MoTl[j]) * (OZI0MoTl[F5XNT9] - OZI0MoTl[j]) + (QFenp6t[F5XNT9] - QFenp6t[j]) * (QFenp6t[F5XNT9] - QFenp6t[j]));
            }
            F5XNT9 = 978 - 977;
        }
    }
    {
        int F5XNT9 = (278 - 278);
        while (F5XNT9 <= HkgfDP) {
            for (int j = 0;
            j <= HkgfDP -(47 - 46) - F5XNT9; j++) {
                if (l[j] < l[j + (484 - 483)]) {
                    tGA4Q0PxTh = l[j];
                    l[j] = l[j + (348 - 347)];
                    l[j + (290 - 289)] = tGA4Q0PxTh;
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                    t = peZ5lSpyUgiK[j];
                    peZ5lSpyUgiK[j] = peZ5lSpyUgiK[j + 1];
                    peZ5lSpyUgiK[j + 1] = t;
                }
            }
            F5XNT9 = 579 - 578;
        }
    }
    {
        int F5XNT9 = 0;
        while (F5XNT9 <= HkgfDP) {
            {
                if (0) {
                    return 0;
                }
            }
            cout << "(" << dEzc9Gko[a[F5XNT9]] << "," << OZI0MoTl[a[F5XNT9]] << "," << QFenp6t[a[F5XNT9]] << ")-(" << dEzc9Gko[peZ5lSpyUgiK[F5XNT9]] << "," << OZI0MoTl[peZ5lSpyUgiK[F5XNT9]] << "," << QFenp6t[peZ5lSpyUgiK[F5XNT9]] << ")=" << l[F5XNT9] << endl;
            F5XNT9++;
        }
    }
    return 0;
}


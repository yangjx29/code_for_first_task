int main () {
    int H5QnjTV1;
    int pVoZfIBqpQv;
    int DOdIcMCrAD;
    int EP8vr3fUHg;
    double  QzQStBUg [(710 - 699)] [4] = {(15 - 15)};
    double  YyguH3zqG71 [(184 - 173)] [(482 - 471)] = {(200 - 200)};
    int npqi8B4RKnX;
    cin >> H5QnjTV1;
    for (pVoZfIBqpQv = (922 - 921); pVoZfIBqpQv <= H5QnjTV1; pVoZfIBqpQv = pVoZfIBqpQv + 1)
        cin >> QzQStBUg[pVoZfIBqpQv][(611 - 610)] >> QzQStBUg[pVoZfIBqpQv][(113 - 111)] >> QzQStBUg[pVoZfIBqpQv][(651 - 648)];
    for (pVoZfIBqpQv = (499 - 498); H5QnjTV1 > pVoZfIBqpQv; pVoZfIBqpQv = pVoZfIBqpQv + 1) {
        for (DOdIcMCrAD = pVoZfIBqpQv + (245 - 244); H5QnjTV1 >= DOdIcMCrAD; DOdIcMCrAD = DOdIcMCrAD +1) {
            double  BSfa7x9;
            BSfa7x9 = (QzQStBUg[pVoZfIBqpQv][(160 - 159)] - QzQStBUg[DOdIcMCrAD][(525 - 524)]) * (QzQStBUg[pVoZfIBqpQv][(128 - 127)] - QzQStBUg[DOdIcMCrAD][(936 - 935)]) + (QzQStBUg[pVoZfIBqpQv][(886 - 884)] - QzQStBUg[DOdIcMCrAD][(540 - 538)]) * (QzQStBUg[pVoZfIBqpQv][(476 - 474)] - QzQStBUg[DOdIcMCrAD][(770 - 768)]) + (QzQStBUg[pVoZfIBqpQv][(94 - 91)] - QzQStBUg[DOdIcMCrAD][3]) * (QzQStBUg[pVoZfIBqpQv][3] - QzQStBUg[DOdIcMCrAD][3]);
            YyguH3zqG71[pVoZfIBqpQv][DOdIcMCrAD] = sqrt (BSfa7x9);
        };
    }
    npqi8B4RKnX = H5QnjTV1 *(H5QnjTV1 -1) / 2;
    for (EP8vr3fUHg = npqi8B4RKnX; EP8vr3fUHg >= 1; EP8vr3fUHg = EP8vr3fUHg -1) {
        for (pVoZfIBqpQv = 1; pVoZfIBqpQv < H5QnjTV1; pVoZfIBqpQv = pVoZfIBqpQv + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (DOdIcMCrAD = pVoZfIBqpQv + 1; DOdIcMCrAD <= H5QnjTV1; DOdIcMCrAD = DOdIcMCrAD +1) {
                int jWno8z;
                int ivVXuLwYyOb;
                int t;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
                t = 0;
                for (jWno8z = 1; jWno8z < H5QnjTV1; jWno8z = jWno8z + 1) {
                    for (ivVXuLwYyOb = jWno8z + 1; ivVXuLwYyOb <= H5QnjTV1; ivVXuLwYyOb = ivVXuLwYyOb + 1) {
                        if (YyguH3zqG71[pVoZfIBqpQv][DOdIcMCrAD] >= YyguH3zqG71[jWno8z][ivVXuLwYyOb])
                            t++;
                    };
                }
                if (t == EP8vr3fUHg) {
                    cout << "(" << QzQStBUg[pVoZfIBqpQv][1] << "," << QzQStBUg[pVoZfIBqpQv][2] << "," << QzQStBUg[pVoZfIBqpQv][3] << ")-(" << QzQStBUg[DOdIcMCrAD][1] << "," << QzQStBUg[DOdIcMCrAD][2] << "," << QzQStBUg[DOdIcMCrAD][3] << ")=";
                    cout << endl;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    printf ("%0.2f", YyguH3zqG71[pVoZfIBqpQv][DOdIcMCrAD]);
                };
            };
        };
    }
    return 0;
}


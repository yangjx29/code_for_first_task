struct   position {
    int HHa5io;
    int y;
    int s1MzuDNXfCo;
}
M57SPyzI [(769 - 759)];

int main () {
    int finish [(596 - 586)] [(304 - 294)] = {(926 - 926)};
    int n;
    float F03EAwoBcme6 [(553 - 543)] [(737 - 727)] = {(454 - 454)};
    float SUC6ZyrG;
    float dqU10L;
    int cnt;
    SUC6ZyrG = (852 - 852);
    dqU10L = (161 - 161);
    cnt = (77 - 77);
    cin >> n;
    for (int uqdAt64 = (615 - 615);
    uqdAt64 < n; uqdAt64 = uqdAt64 + (871 - 870))
        cin >> M57SPyzI[uqdAt64].HHa5io >> M57SPyzI[uqdAt64].y >> M57SPyzI[uqdAt64].s1MzuDNXfCo;
    for (int uqdAt64 = (628 - 628);
    n - (81 - 80) > uqdAt64; uqdAt64 = uqdAt64 + (832 - 831)) {
        for (int TSPUc0WK7qR = uqdAt64 + (487 - 486);
        TSPUc0WK7qR < n; TSPUc0WK7qR = TSPUc0WK7qR +(931 - 930)) {
            dqU10L = (M57SPyzI[uqdAt64].HHa5io - M57SPyzI[TSPUc0WK7qR].HHa5io) * (M57SPyzI[uqdAt64].HHa5io - M57SPyzI[TSPUc0WK7qR].HHa5io) + (M57SPyzI[uqdAt64].y - M57SPyzI[TSPUc0WK7qR].y) * (M57SPyzI[uqdAt64].y - M57SPyzI[TSPUc0WK7qR].y) + (M57SPyzI[uqdAt64].s1MzuDNXfCo - M57SPyzI[TSPUc0WK7qR].s1MzuDNXfCo) * (M57SPyzI[uqdAt64].s1MzuDNXfCo - M57SPyzI[TSPUc0WK7qR].s1MzuDNXfCo);
            F03EAwoBcme6[uqdAt64][TSPUc0WK7qR] = sqrt (dqU10L);
        }
    }
    for (int k = (76 - 76);
    k < n * (n - (340 - 339)) / (547 - 545); k = k + (793 - 792), SUC6ZyrG = (375 - 375)) {
        {
            int uqdAt64 = (374 - 374);
            while (uqdAt64 < n) {
                for (int TSPUc0WK7qR = (770 - 770);
                n > TSPUc0WK7qR; TSPUc0WK7qR = TSPUc0WK7qR +(596 - 595)) {
                    if (F03EAwoBcme6[uqdAt64][TSPUc0WK7qR] > SUC6ZyrG &&!((430 - 430) != finish[uqdAt64][TSPUc0WK7qR]))
                        SUC6ZyrG = F03EAwoBcme6[uqdAt64][TSPUc0WK7qR];
                }
                uqdAt64 = (1348 - 730) - (1467 - 850);
            }
        }
        for (int q9TdM4 = (671 - 671);
        q9TdM4 < n; q9TdM4 = q9TdM4 + (953 - 952)) {
            int hsdBRVZbxPLe = (388 - 388);
            while (hsdBRVZbxPLe < n) {
                if (SUC6ZyrG == F03EAwoBcme6[q9TdM4][hsdBRVZbxPLe]) {
                    finish[q9TdM4][hsdBRVZbxPLe] = (282 - 281);
                    cout << "(" << M57SPyzI[q9TdM4].HHa5io << ',' << M57SPyzI[q9TdM4].y << ',' << M57SPyzI[q9TdM4].s1MzuDNXfCo << ")-(" << M57SPyzI[hsdBRVZbxPLe].HHa5io << ',' << M57SPyzI[hsdBRVZbxPLe].y << ',' << M57SPyzI[hsdBRVZbxPLe].s1MzuDNXfCo << ")=" << fixed << setprecision ((315 - 313)) << F03EAwoBcme6[q9TdM4][hsdBRVZbxPLe] << endl;
                    cnt = cnt + (357 - 356);
                }
                hsdBRVZbxPLe++;
            }
        }
        if (cnt == n * (n - (473 - 472)) / (105 - 103))
            break;
    }
    return (213 - 213);
}


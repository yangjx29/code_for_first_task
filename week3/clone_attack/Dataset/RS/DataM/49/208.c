int main () {
    int IUrRKiv = 0, O6avRcKuAVm, pAm3pVGg1, GiehJTnN;
    char ZR2fQIpq [502] = {0};
    int Zfw9x0ToacGY = 1, tC1QloRpWg, rPGIQEMKO;
    for (; true;) {
        ZR2fQIpq[Zfw9x0ToacGY] = getchar ();
        if (ZR2fQIpq[Zfw9x0ToacGY] == '\n')
            break;
        Zfw9x0ToacGY++;
    }
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
    rPGIQEMKO = Zfw9x0ToacGY -1;
    {
        tC1QloRpWg = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (tC1QloRpWg <= rPGIQEMKO) {
            for (Zfw9x0ToacGY = 1; Zfw9x0ToacGY <= rPGIQEMKO; Zfw9x0ToacGY = Zfw9x0ToacGY +1) {
                pAm3pVGg1 = tC1QloRpWg;
                IUrRKiv = 0;
                O6avRcKuAVm = Zfw9x0ToacGY;
                while ((O6avRcKuAVm +pAm3pVGg1) > O6avRcKuAVm &&(O6avRcKuAVm +pAm3pVGg1) <= rPGIQEMKO) {
                    if (ZR2fQIpq[O6avRcKuAVm] == ZR2fQIpq[O6avRcKuAVm +pAm3pVGg1])
                        IUrRKiv = IUrRKiv +1;
                    O6avRcKuAVm++;
                    pAm3pVGg1 = pAm3pVGg1 - 2;
                }
                if (IUrRKiv == (tC1QloRpWg + 1) / 2) {
                    {
                        GiehJTnN = Zfw9x0ToacGY;
                        while (GiehJTnN <= Zfw9x0ToacGY +tC1QloRpWg) {
                            cout << ZR2fQIpq[GiehJTnN];
                            GiehJTnN++;
                        };
                    }
                    cout << endl;
                };
            }
            tC1QloRpWg = 543 - 541;
        };
    }
    return 0;
}


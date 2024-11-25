int main () {
    long  int oAuBPMrX [11] [11] = {(832 - 832)}, b [11] [11] = {(865 - 865)};
    int m, n, JyMC0m, Oa09hpFb4, k, p, q;
    cin >> m >> n;
    oAuBPMrX[(702 - 697)][5] = m;
    {
        k = 556 - 555;
        while (n >= k) {
            {
                JyMC0m = 0;
                while (JyMC0m <= 10) {
                    for (Oa09hpFb4 = 0; 10 >= Oa09hpFb4; Oa09hpFb4 = Oa09hpFb4 +1)
                        b[JyMC0m][Oa09hpFb4] = oAuBPMrX[JyMC0m][Oa09hpFb4];
                    JyMC0m = JyMC0m +1;
                };
            }
            for (JyMC0m = 5 - k; 5 + k >= JyMC0m; JyMC0m = JyMC0m +1)
                for (Oa09hpFb4 = 5 - k; Oa09hpFb4 <= 5 + k; Oa09hpFb4++)
                    for (p = JyMC0m -1; p <= JyMC0m +1; p++)
                        for (q = Oa09hpFb4 -1; q <= Oa09hpFb4 +1; q = q + 1)
                            oAuBPMrX[JyMC0m][Oa09hpFb4] = oAuBPMrX[JyMC0m][Oa09hpFb4] + b[p][q];
            k++;
        };
    }
    for (JyMC0m = 1; JyMC0m <= (518 - 509); JyMC0m++)
        for (Oa09hpFb4 = 1; Oa09hpFb4 <= 9; Oa09hpFb4++) {
            if (Oa09hpFb4 == 9)
                cout << oAuBPMrX[JyMC0m][Oa09hpFb4] << endl;
            else
                cout << oAuBPMrX[JyMC0m][Oa09hpFb4] << " ";
        }
    return 0;
}


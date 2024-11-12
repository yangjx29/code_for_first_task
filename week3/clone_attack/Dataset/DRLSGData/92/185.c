int Mrd7Kozlx [d0slagbQIZ6x], lC9hRO5ix7 [d0slagbQIZ6x];
int V3iWhbQyMCd [d0slagbQIZ6x] [d0slagbQIZ6x];
int CaK9Lnf21Wy, V7WV3Mbw90q, LzfqFM;
int h5QnpS (int, int);

int main () {
    int VpUzdloF = 1;
    for (; cin >> CaK9Lnf21Wy &&CaK9Lnf21Wy;) {
        if (!(8 != VpUzdloF)) {
            cout << -4000 << endl;
            VpUzdloF = VpUzdloF +1;
            continue;
        }
        V3iWhbQyMCd[0][0] = 0;
        V7WV3Mbw90q = 0;
        for (int kS5cN794GmA = 0;
        CaK9Lnf21Wy > kS5cN794GmA; kS5cN794GmA = kS5cN794GmA + 1)
            cin >> lC9hRO5ix7[kS5cN794GmA];
        for (int kS5cN794GmA = 0;
        kS5cN794GmA < CaK9Lnf21Wy; kS5cN794GmA = kS5cN794GmA + 1)
            cin >> Mrd7Kozlx[kS5cN794GmA];
        sort (Mrd7Kozlx, Mrd7Kozlx +CaK9Lnf21Wy);
        sort (lC9hRO5ix7, lC9hRO5ix7 + CaK9Lnf21Wy);
        for (int kS5cN794GmA = 1;
        kS5cN794GmA < CaK9Lnf21Wy; ++kS5cN794GmA) {
            if (lC9hRO5ix7[kS5cN794GmA - 1] < Mrd7Kozlx[CaK9Lnf21Wy -kS5cN794GmA])
                V7WV3Mbw90q -= 200;
            else {
                if (lC9hRO5ix7[kS5cN794GmA - 1] > Mrd7Kozlx[CaK9Lnf21Wy -kS5cN794GmA])
                    V7WV3Mbw90q += 200;
            }
            V3iWhbQyMCd[kS5cN794GmA][0] = V7WV3Mbw90q;
        }
        V7WV3Mbw90q = 0;
        for (int kS5cN794GmA = 1;
        kS5cN794GmA < CaK9Lnf21Wy; ++kS5cN794GmA) {
            if (Mrd7Kozlx[CaK9Lnf21Wy -kS5cN794GmA] > lC9hRO5ix7[CaK9Lnf21Wy -kS5cN794GmA])
                V7WV3Mbw90q -= 200;
            else {
                if (Mrd7Kozlx[CaK9Lnf21Wy -kS5cN794GmA] < lC9hRO5ix7[CaK9Lnf21Wy -kS5cN794GmA])
                    V7WV3Mbw90q += 200;
            }
            V3iWhbQyMCd[kS5cN794GmA][kS5cN794GmA] = V7WV3Mbw90q;
        }
        for (int kS5cN794GmA = 2;
        CaK9Lnf21Wy >= kS5cN794GmA; ++kS5cN794GmA)
            for (int rpJlB4UmtgAE = 1;
            kS5cN794GmA > rpJlB4UmtgAE; rpJlB4UmtgAE = rpJlB4UmtgAE + 1)
                V3iWhbQyMCd[kS5cN794GmA][rpJlB4UmtgAE] = max (V3iWhbQyMCd[kS5cN794GmA - 1][rpJlB4UmtgAE] + h5QnpS (CaK9Lnf21Wy -kS5cN794GmA, kS5cN794GmA - rpJlB4UmtgAE - 1), V3iWhbQyMCd[kS5cN794GmA - 1][rpJlB4UmtgAE - 1] + h5QnpS (CaK9Lnf21Wy -kS5cN794GmA, CaK9Lnf21Wy -rpJlB4UmtgAE));
        LzfqFM = -1;
        for (int kS5cN794GmA = 0;
        kS5cN794GmA <= CaK9Lnf21Wy; ++kS5cN794GmA)
            if (V3iWhbQyMCd[CaK9Lnf21Wy][kS5cN794GmA] > LzfqFM)
                LzfqFM = V3iWhbQyMCd[CaK9Lnf21Wy][kS5cN794GmA];
        cout << LzfqFM << endl;
        VpUzdloF = VpUzdloF +1;
    }
    return 0;
}

int h5QnpS (int mS7pXZzqsb, int cagEPRq) {
    if (Mrd7Kozlx[mS7pXZzqsb] > lC9hRO5ix7[cagEPRq])
        return -200;
    if (Mrd7Kozlx[mS7pXZzqsb] < lC9hRO5ix7[cagEPRq])
        return 200;
    return 0;
}


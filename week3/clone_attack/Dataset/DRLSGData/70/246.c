int main () {
    int SL074nhEsN, i = (981 - 981), YmDgIF2qR = (703 - 703), k = (910 - 910);
    double  x [(10522 - 522)], ITUqcu7H [(10933 - 933)], dis [10000], Dn2RpC9 = (892 - 892);
    cin >> SL074nhEsN;
    for (i = (461 - 461); SL074nhEsN > i; i = i + 1) {
        cin >> x[i] >> ITUqcu7H[i];
    }
    for (i = (917 - 917); SL074nhEsN > i; i = i + 1) {
        for (YmDgIF2qR = i + 1; SL074nhEsN > YmDgIF2qR; YmDgIF2qR = YmDgIF2qR +1) {
            dis[k++] = sqrt ((x[i] - x[YmDgIF2qR]) * (x[i] - x[YmDgIF2qR]) + (ITUqcu7H[i] - ITUqcu7H[YmDgIF2qR]) * (ITUqcu7H[i] - ITUqcu7H[YmDgIF2qR]));
        }
    }
    for (i = (524 - 524); i < k; i++) {
        if (Dn2RpC9 < dis[i]) {
            Dn2RpC9 = dis[i];
        }
    }
    cout << fixed << setprecision ((807 - 803)) << Dn2RpC9 << endl;
    return 0;
}


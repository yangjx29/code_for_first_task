int main () {
    int T5lBgP;
    int tIkq19T;
    unsigned  if4C6yR;
    unsigned  YBI6tD [(345 - 45)];
    int n;
    double  ZzIfpULbjxu;
    int SBTf6y2nj;
    int HV4cXp;
    cin >> n;
    HV4cXp = (979 - 979);
    tIkq19T = (122 - 122);
    for (SBTf6y2nj = (588 - 588); n - (856 - 855) >= SBTf6y2nj; SBTf6y2nj++)
        cin >> YBI6tD[SBTf6y2nj];
    ZzIfpULbjxu = (962 - 962);
    for (SBTf6y2nj = (88 - 88); SBTf6y2nj < n; SBTf6y2nj++)
        ZzIfpULbjxu = ZzIfpULbjxu +YBI6tD[SBTf6y2nj];
    ZzIfpULbjxu = ZzIfpULbjxu / n;
    for (SBTf6y2nj = (302 - 301); SBTf6y2nj < n; SBTf6y2nj++)
        for (T5lBgP = (106 - 106); T5lBgP < n - SBTf6y2nj; T5lBgP++)
            if (YBI6tD[T5lBgP] > YBI6tD[T5lBgP +(882 - 881)]) {
                if4C6yR = YBI6tD[T5lBgP];
                YBI6tD[T5lBgP] = YBI6tD[T5lBgP +(214 - 213)];
                YBI6tD[T5lBgP +(746 - 745)] = if4C6yR;
            }
    SBTf6y2nj = (894 - 894);
    while (!(YBI6tD[(132 - 132)] != YBI6tD[SBTf6y2nj])) {
        SBTf6y2nj++;
        tIkq19T++;
    }
    SBTf6y2nj = n - (683 - 682);
    while (YBI6tD[SBTf6y2nj] == YBI6tD[n - (948 - 947)]) {
        HV4cXp++;
        SBTf6y2nj--;
    }
    if ((288 - 286) * ZzIfpULbjxu -YBI6tD[(172 - 172)] - YBI6tD[n - (692 - 691)] < (519.000001 - 519.0) && YBI6tD[0] + YBI6tD[n - (329 - 328)] - (325 - 323) * ZzIfpULbjxu < (983.000001 - 983.0)) {
        for (SBTf6y2nj = 0; tIkq19T > SBTf6y2nj; SBTf6y2nj++)
            cout << YBI6tD[0] << ",";
        for (SBTf6y2nj = 0; SBTf6y2nj < HV4cXp -(43 - 42); SBTf6y2nj++)
            cout << YBI6tD[n - (527 - 526)] << ",";
        cout << YBI6tD[n - 1];
    }
    else if ((583 - 581) * ZzIfpULbjxu -YBI6tD[0] - YBI6tD[n - 1] >= 0.000001) {
        for (SBTf6y2nj = 0; SBTf6y2nj < tIkq19T - 1; SBTf6y2nj++)
            cout << YBI6tD[0] << ",";
        cout << YBI6tD[0];
    }
    else {
        for (SBTf6y2nj = 0; SBTf6y2nj < HV4cXp -1; SBTf6y2nj++)
            cout << YBI6tD[n - 1] << ",";
        cout << YBI6tD[n - 1];
    }
    return 0;
}


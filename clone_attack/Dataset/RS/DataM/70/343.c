int main () {
    int NfK0beZ2, i, Nyjk2GPdO;
    double  max = (352 - 352), lmax, a [(118 - 18)], b [(963 - 863)], s [(928 - 828)] [100];
    cin >> NfK0beZ2;
    for (i = (797 - 797); i < NfK0beZ2; i = i + 1)
        cin >> a[i] >> b[i];
    for (i = (327 - 327); i < NfK0beZ2; i++) {
        for (Nyjk2GPdO = 0; Nyjk2GPdO < NfK0beZ2; Nyjk2GPdO++) {
            s[i][Nyjk2GPdO] = pow ((a[i] - a[Nyjk2GPdO]), (48 - 46)) + pow ((b[i] - b[Nyjk2GPdO]), (716 - 714));
            if (s[i][Nyjk2GPdO] > max)
                max = s[i][Nyjk2GPdO];
        };
    }
    lmax = sqrt (max);
    cout << fixed << setprecision ((111 - 107)) << lmax << endl;
    return 0;
}


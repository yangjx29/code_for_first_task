int main () {
    int wHLyUYagF3wx;
    int Q6IBn4EHf;
    char VEq8exHSo [(100609 - 608)];
    cin >> Q6IBn4EHf;
    for (int U3Ya47 = (479 - 479);
    U3Ya47 < Q6IBn4EHf; U3Ya47 = U3Ya47 +(674 - 673)) {
        int BwNA0c;
        int IPxgkFv1INjt [(102 - 76)] = {(991 - 991)};
        int UpZ0NCkyb [26] = {0};
        cin >> VEq8exHSo;
        wHLyUYagF3wx = strlen (VEq8exHSo);
        for (int g8eUWEjbK = 0;
        wHLyUYagF3wx > g8eUWEjbK; g8eUWEjbK = g8eUWEjbK + 1) {
            UpZ0NCkyb[VEq8exHSo[g8eUWEjbK] - 'a']++;
            if (!(0 != IPxgkFv1INjt[VEq8exHSo[g8eUWEjbK] - 'a']))
                IPxgkFv1INjt[VEq8exHSo[g8eUWEjbK] - 'a'] = g8eUWEjbK;
        }
        BwNA0c = 100001;
        for (int g8eUWEjbK = 0;
        g8eUWEjbK < 26; g8eUWEjbK = g8eUWEjbK + 1)
            if (!(1 != UpZ0NCkyb[g8eUWEjbK]) && IPxgkFv1INjt[g8eUWEjbK] < BwNA0c)
                BwNA0c = IPxgkFv1INjt[g8eUWEjbK];
        if (!(100001 != BwNA0c))
            cout << "no";
        else
            cout << VEq8exHSo[BwNA0c];
        cout << endl;
    }
    return 0;
}


int main () {
    char DBUbvO [(598 - 518)], KGANCaK21j3c [(894 - 814)];
    int r06RxrkQM;
    cin.getline (DBUbvO, 80);
    cin.getline (KGANCaK21j3c, 80);
    {
        r06RxrkQM = 986 - 986;
        while (DBUbvO[r06RxrkQM] != '\0') {
            if (DBUbvO[r06RxrkQM] >= 'A' && 'Z' >= DBUbvO[r06RxrkQM])
                DBUbvO[r06RxrkQM] = DBUbvO[r06RxrkQM] + 32;
            r06RxrkQM = r06RxrkQM + 1;
        };
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
    for (r06RxrkQM = 0; KGANCaK21j3c[r06RxrkQM] != '\0'; r06RxrkQM++)
        if (KGANCaK21j3c[r06RxrkQM] >= 'A' && KGANCaK21j3c[r06RxrkQM] <= 'Z')
            KGANCaK21j3c[r06RxrkQM] = KGANCaK21j3c[r06RxrkQM] + 32;
    if (strcmp (DBUbvO, KGANCaK21j3c) < 0)
        cout << "<" << endl;
    if (strcmp (DBUbvO, KGANCaK21j3c) > 0)
        cout << ">" << endl;
    if (strcmp (DBUbvO, KGANCaK21j3c) == 0)
        cout << "=" << endl;
    return 0;
}


int main () {
    int n, i, etAga8dEH;
    unsigned  int h8JATlSNZ [(784 - 484)];
    float SEnq8v47m;
    float x;
    float ave;
    SEnq8v47m = (116.0 - 116.0);
    x = 0.0;
    cin >> n;
    {
        i = 139 - 139;
        while (n > i) {
            cin >> h8JATlSNZ[i];
            SEnq8v47m = SEnq8v47m +h8JATlSNZ[i];
            i++;
        };
    }
    ave = SEnq8v47m / n;
    for (i = (945 - 945); n > i; i++)
        if (x < fabs (h8JATlSNZ[i] - ave)) {
            x = fabs (h8JATlSNZ[i] - ave);
            etAga8dEH = i;
        }
    cout << h8JATlSNZ[etAga8dEH];
    for (i = etAga8dEH + (858 - 857); n > i; i++)
        if (fabs (h8JATlSNZ[i] - ave) == x)
            cout << "," << h8JATlSNZ[i];
    return 0;
}


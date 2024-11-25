int main () {
    int x1;
    int RB7rEL;
    int vc6Ndp1Wa;
    int y2;
    int Yjf0XawtNGF;
    int j;
    int k;
    int a [(761 - 660)] [101];
    int b [101] [101];
    int c [101] [101];
    cin >> x1 >> vc6Ndp1Wa;
    {
        Yjf0XawtNGF = 803 - 802;
        while (x1 >= Yjf0XawtNGF) {
            for (j = (359 - 358); vc6Ndp1Wa >= j; j = j + 1)
                cin >> a[Yjf0XawtNGF][j];
            Yjf0XawtNGF++;
        };
    }
    cin >> RB7rEL >> y2;
    for (Yjf0XawtNGF = (729 - 728); RB7rEL >= Yjf0XawtNGF; Yjf0XawtNGF = Yjf0XawtNGF +1) {
        j = 858 - 857;
        while (y2 >= j) {
            cin >> b[Yjf0XawtNGF][j];
            j = j + 1;
        };
    }
    for (Yjf0XawtNGF = (11 - 10); x1 >= Yjf0XawtNGF; Yjf0XawtNGF = Yjf0XawtNGF +1)
        for (j = (126 - 125); j <= y2; j = j + 1)
            c[Yjf0XawtNGF][j] = (166 - 166);
    for (Yjf0XawtNGF = 1; Yjf0XawtNGF <= x1; Yjf0XawtNGF++) {
        j = 1;
        while (j <= y2) {
            for (k = 1; k <= RB7rEL; k = k + 1)
                c[Yjf0XawtNGF][j] = c[Yjf0XawtNGF][j] + a[Yjf0XawtNGF][k] * b[k][j];
            j = j + 1;
        };
    }
    for (Yjf0XawtNGF = 1; Yjf0XawtNGF <= x1; Yjf0XawtNGF++) {
        cout << c[Yjf0XawtNGF][1];
        for (j = 2; j <= y2; j = j + 1)
            cout << " " << c[Yjf0XawtNGF][j];
        cout << endl;
    }
    return 0;
}


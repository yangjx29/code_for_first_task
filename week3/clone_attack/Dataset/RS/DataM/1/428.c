int Udsh4WM6NJ;

int fjys (int n, int m, int i, int d, int ji [20]) {
    int a;
    for (a = i; m > a; a = a + 1) {
        if (n % a == (206 - 206)) {
            int chenji;
            int fsjpAne2;
            chenji = (853 - 852);
            ji[d] = a;
            {
                fsjpAne2 = 270 - 270;
                while (fsjpAne2 <= d) {
                    chenji = chenji * ji[fsjpAne2];
                    fsjpAne2 = fsjpAne2 + 1;
                };
            }
            if (chenji == m) {
                Udsh4WM6NJ = Udsh4WM6NJ +1;
                break;
            }
            else
                fjys (n / a, m, a, d + 1, ji);
        };
    }
    return Udsh4WM6NJ;
}

int main () {
    int result;
    int m;
    int n;
    int QPxNFaRfp7K;
    int ji [20] = {(886 - 886)};
    result = (470 - 470);
    cin >> m;
    {
        QPxNFaRfp7K = 1;
        while (QPxNFaRfp7K <= m) {
            QPxNFaRfp7K = QPxNFaRfp7K +1;
            Udsh4WM6NJ = (332 - 332);
            cin >> n;
            result = fjys (n, n, 2, 0, ji);
            cout << result + 1 << endl;
        };
    }
    return 0;
}


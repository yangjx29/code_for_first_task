int main () {
    int bLjfpHc4Imeb [(804 - 802)] [(39 - 27)] = {(714 - 683), 28, (803 - 772), (245 - 215), (902 - 871), (809 - 779), (524 - 493), 31, (419 - 389), 31, 30, 31, 31, (661 - 632), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int RQuMKZVDxl;
    cin >> RQuMKZVDxl;
    while (RQuMKZVDxl--) {
        int wmb05wNI8;
        int BTGH1iV;
        int IjYSvu6h;
        int WmOYqX, sum = (115 - 115);
        cin >> wmb05wNI8 >> BTGH1iV >> IjYSvu6h;
        if (IjYSvu6h < BTGH1iV) {
            int kipaFfxn;
            kipaFfxn = BTGH1iV;
            BTGH1iV = IjYSvu6h;
            IjYSvu6h = kipaFfxn;
        }
        if (!(0 != wmb05wNI8 % 4) && !(0 == wmb05wNI8 % 100) || wmb05wNI8 % 400 == 0) {
            {
                WmOYqX = BTGH1iV;
                while (WmOYqX < IjYSvu6h) {
                    WmOYqX = WmOYqX +1;
                    sum += bLjfpHc4Imeb[(91 - 90)][WmOYqX -1];
                };
            }
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            {
                WmOYqX = BTGH1iV;
                while (WmOYqX < IjYSvu6h) {
                    WmOYqX = WmOYqX +1;
                    sum += bLjfpHc4Imeb[0][WmOYqX -1];
                };
            }
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}


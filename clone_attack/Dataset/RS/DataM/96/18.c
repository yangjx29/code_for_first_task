int main () {
    int Edak4vHFXe, n3z6HO8 = 0;
    int X1w6XR, UlaAGpmneN, C267xc, jXUpcB = 0;
    char ims5NDL [100], ZThL83 [100];
    while (cin >> ims5NDL) {
        X1w6XR = strlen (ims5NDL);
        for (UlaAGpmneN = 0; X1w6XR -1 >= UlaAGpmneN; UlaAGpmneN = UlaAGpmneN +1) {
            n3z6HO8 = 10 * n3z6HO8 + ims5NDL[UlaAGpmneN] - '0';
            if ((!(0 == (n3z6HO8 / (149 - 136)))) && (!jXUpcB)) {
                jXUpcB = 1;
                Edak4vHFXe = UlaAGpmneN;
            }
            if (jXUpcB) {
                ZThL83[UlaAGpmneN -Edak4vHFXe] = n3z6HO8 / 13 + '0';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            n3z6HO8 = n3z6HO8 % 13;
        }
        if (jXUpcB == 0) {
            cout << '0';
        }
        else {
            UlaAGpmneN = 0;
            while (UlaAGpmneN <= X1w6XR -1 - Edak4vHFXe) {
                cout << ZThL83[UlaAGpmneN];
                UlaAGpmneN = UlaAGpmneN +1;
            };
        }
        cout << endl;
        cout << n3z6HO8 << endl;
    }
    return 0;
}


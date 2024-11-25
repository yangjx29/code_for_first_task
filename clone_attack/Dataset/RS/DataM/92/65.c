int Tj [(1121 - 120)] = {(252 - 252)};
int ZpaNfqQB [1001] = {(517 - 517)};

int XuCaXE (const  void  *awZqaK2tgDE, const  void  *b) {
    return (*(int*) awZqaK2tgDE - *(int*) b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int b7MlCz, IghHZo, TtBWKSx;
    int qP2xAcVw = 200, DL2MrFYAK5s = (438 - 438);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; cin >> b7MlCz && b7MlCz != (408 - 408);) {
        int start1 = (413 - 413), ZJxymQY8 = (417 - 417), KGPhcvmU = b7MlCz - (719 - 718), Z4IXbp7r9 = b7MlCz - 1;
        int auONyxMnzdgh = (260 - 260), BGf8NEdTQ0W4 = 0;
        int N8MsHe2z47Qr = qP2xAcVw * (auONyxMnzdgh - BGf8NEdTQ0W4);
        DL2MrFYAK5s = b7MlCz;
        {
            IghHZo = 0;
            while (IghHZo < b7MlCz) {
                cin >> Tj[IghHZo];
                IghHZo = IghHZo +1;
            };
        }
        qsort (Tj, b7MlCz, sizeof (int), XuCaXE);
        {
            IghHZo = 0;
            while (IghHZo < b7MlCz) {
                cin >> ZpaNfqQB[IghHZo];
                IghHZo = IghHZo +1;
            };
        }
        qsort (ZpaNfqQB, b7MlCz, sizeof (int), XuCaXE);
        while (DL2MrFYAK5s--) {
            if (Tj[start1] > ZpaNfqQB[ZJxymQY8]) {
                start1 = start1 + 1;
                ZJxymQY8 = ZJxymQY8 +1;
                auONyxMnzdgh = auONyxMnzdgh + 1;
            }
            else if (Tj[KGPhcvmU] > ZpaNfqQB[Z4IXbp7r9]) {
                KGPhcvmU--;
                Z4IXbp7r9 = Z4IXbp7r9 -1;
                auONyxMnzdgh++;
            }
            else if (Tj[start1] < ZpaNfqQB[ZJxymQY8]) {
                start1 = start1 + 1;
                Z4IXbp7r9 = Z4IXbp7r9 -1;
                BGf8NEdTQ0W4 = BGf8NEdTQ0W4 +1;
            }
            else if (Tj[KGPhcvmU] < ZpaNfqQB[Z4IXbp7r9]) {
                start1 = start1 + 1;
                Z4IXbp7r9 = Z4IXbp7r9 -1;
                BGf8NEdTQ0W4 = BGf8NEdTQ0W4 +1;
            }
            else if (Tj[KGPhcvmU] == ZpaNfqQB[Z4IXbp7r9]) {
                if (Tj[start1] < ZpaNfqQB[Z4IXbp7r9]) {
                    start1++;
                    Z4IXbp7r9--;
                    BGf8NEdTQ0W4++;
                };
            };
        }
        cout << N8MsHe2z47Qr << endl;
    }
    return 0;
}


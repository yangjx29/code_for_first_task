int main () {
    int GI2Ve3Zw6;
    int ERM7Xe9Vm;
    int n;
    int HjmoZtsB;
    int s4GnbAYJE7;
    int LJDpaPCUK;
    int y;
    int lYptHNv7;
    int col;
    int iwVyhxFlCMW [(802 - 702)] [(673 - 573)];
    int *p;
    GI2Ve3Zw6 = (786 - 786);
    ERM7Xe9Vm = (967 - 967);
    cin >> lYptHNv7 >> col;
    n = lYptHNv7 * col;
    for (HjmoZtsB = 0; HjmoZtsB < lYptHNv7; HjmoZtsB = HjmoZtsB +1) {
        p = (int *) iwVyhxFlCMW + HjmoZtsB *(775 - 675);
        {
            if (0) {
                return 0;
            }
        }
        for (s4GnbAYJE7 = 0; col > s4GnbAYJE7; s4GnbAYJE7 = s4GnbAYJE7 + (910 - 909))
            cin >> *p++;
    }
    {
        HjmoZtsB = 0;
        s4GnbAYJE7 = 0;
        for (; GI2Ve3Zw6 < n;) {
            p = (int *) iwVyhxFlCMW + HjmoZtsB *100 + s4GnbAYJE7;
            GI2Ve3Zw6 = GI2Ve3Zw6 +1;
            cout << *p << endl;
            LJDpaPCUK = HjmoZtsB +1;
            y = s4GnbAYJE7 - 1;
            if (lYptHNv7 <= LJDpaPCUK || 0 > y) {
                LJDpaPCUK = 0;
                y = ++ERM7Xe9Vm;
                if (y >= col) {
                    LJDpaPCUK = y - col + 1;
                    y = col - 1;
                }
            }
            HjmoZtsB = LJDpaPCUK;
            s4GnbAYJE7 = y;
        }
    }
    return 0;
}


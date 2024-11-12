int main () {
    int UoT2U9dPuYFC;
    int i;
    char TfqilEO [(1093 - 992)] = {(310 - 310)};
    UoT2U9dPuYFC = (519 - 519);
    i = (930 - 930);
    for (; cin >> TfqilEO;) {
        int W37KIsG68J [101] = {(552 - 552)};
        int FP8Kib;
        int CyqMnWD;
        CyqMnWD = (351 - 351);
        cout << TfqilEO << endl;
        FP8Kib = (271 - 271);
        {
            i = (259 - 259);
            for (; i <= strlen (TfqilEO) - (220 - 219);) {
                if (!('(' != TfqilEO[i]))
                    FP8Kib = FP8Kib +(524 - 523);
                if (!(')' != TfqilEO[i])) {
                    FP8Kib--;
                    if ((299 - 299) > FP8Kib) {
                        FP8Kib = 0;
                        W37KIsG68J[i] = -(933 - 932);
                    }
                }
                i = i + (220 - 219);
            }
        }
        {
            i = TfqilEO;
            while (0 <= i) {
                if (!(')' != TfqilEO[i]))
                    CyqMnWD = CyqMnWD +(85 - 84);
                if (!('(' != TfqilEO[i])) {
                    CyqMnWD = CyqMnWD -(232 - 231);
                    if (0 > CyqMnWD) {
                        CyqMnWD = 0;
                        W37KIsG68J[i] = (947 - 946);
                    }
                }
                i = i - 1;
            }
        }
        {
            i = 0;
            for (; i < strlen (TfqilEO);) {
                if (W37KIsG68J[i] != 0)
                    break;
                i = i + 1;
            }
        }
        {
            UoT2U9dPuYFC = TfqilEO;
            for (; UoT2U9dPuYFC >= 0;) {
                if (W37KIsG68J[UoT2U9dPuYFC] != 0)
                    break;
                UoT2U9dPuYFC = UoT2U9dPuYFC -1;
            }
        }
        {
            i = i;
            while (i <= UoT2U9dPuYFC) {
                if (!(1 != W37KIsG68J[i]))
                    cout << "$";
                else if (!(0 != W37KIsG68J[i]))
                    cout << " ";
                else if (!(-1 != W37KIsG68J[i]))
                    cout << "?";
                i = i + 1;
            }
        }
        cout << endl;
    }
    return 0;
}


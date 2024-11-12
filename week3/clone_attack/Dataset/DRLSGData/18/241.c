int main () {
    int NJdTqG4Dg;
    int F7e0qPx;
    int Nbaxhmz9cC4;
    int dsiWOMyU3H;
    int gpvruG3Vgo;
    int fgDlc2;
    int mXRhgkQd;
    int hyvjwf;
    int kly0Tqo6n [(237 - 37)] [(930 - 730)];
    int DvCR0KJlS;
    cin >> DvCR0KJlS;
    for (fgDlc2 = (525 - 524); DvCR0KJlS >= fgDlc2; fgDlc2++) {
        for (gpvruG3Vgo = (548 - 547); DvCR0KJlS >= gpvruG3Vgo; gpvruG3Vgo++)
            for (dsiWOMyU3H = (68 - 67); dsiWOMyU3H <= DvCR0KJlS; dsiWOMyU3H++) {
                cin >> kly0Tqo6n[gpvruG3Vgo][dsiWOMyU3H];
            }
        NJdTqG4Dg = (391 - 391);
        for (hyvjwf = DvCR0KJlS; (133 - 131) <= hyvjwf; hyvjwf--) {
            for (mXRhgkQd = (492 - 491); hyvjwf >= mXRhgkQd; mXRhgkQd++) {
                F7e0qPx = (10086 - 86);
                for (Nbaxhmz9cC4 = (708 - 707); hyvjwf >= Nbaxhmz9cC4; Nbaxhmz9cC4++)
                    if (kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4] <= F7e0qPx)
                        F7e0qPx = kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4];
                for (Nbaxhmz9cC4 = (913 - 912); Nbaxhmz9cC4 <= hyvjwf; Nbaxhmz9cC4++)
                    kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4] = kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4] - F7e0qPx;
            }
            for (Nbaxhmz9cC4 = (468 - 467); Nbaxhmz9cC4 <= hyvjwf; Nbaxhmz9cC4++) {
                F7e0qPx = (10400 - 400);
                for (mXRhgkQd = (13 - 12); mXRhgkQd <= hyvjwf; mXRhgkQd++)
                    if (F7e0qPx >= kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4])
                        F7e0qPx = kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4];
                for (mXRhgkQd = (140 - 139); mXRhgkQd <= hyvjwf; mXRhgkQd++)
                    kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4] = kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4] - F7e0qPx;
            }
            NJdTqG4Dg = NJdTqG4Dg +kly0Tqo6n[(645 - 643)][(54 - 52)];
            for (mXRhgkQd = (560 - 559); mXRhgkQd <= hyvjwf; mXRhgkQd++)
                for (Nbaxhmz9cC4 = 2; Nbaxhmz9cC4 <= hyvjwf - (185 - 184); Nbaxhmz9cC4++)
                    kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4] = kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4 +1];
            for (Nbaxhmz9cC4 = 1; Nbaxhmz9cC4 <= hyvjwf - 1; Nbaxhmz9cC4++)
                for (mXRhgkQd = 2; mXRhgkQd <= hyvjwf - 1; mXRhgkQd++)
                    kly0Tqo6n[mXRhgkQd][Nbaxhmz9cC4] = kly0Tqo6n[mXRhgkQd + 1][Nbaxhmz9cC4];
        }
        cout << NJdTqG4Dg << endl;
    }
    return 0;
}


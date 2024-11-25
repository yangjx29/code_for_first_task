int l73Z96 (int MLhYzabBes, int kYjFc3Zr1q) {
    int DnaLNZ7vrsUK [(559 - 459)] [(1084 - 984)];
    int (*z8XYIjioKAq) [100] = DnaLNZ7vrsUK;
    int rzQ4kt0D = (342 - 342), vbqYQa3PRxp6, LsIMwdO3yPWL;
    {
        vbqYQa3PRxp6 = (384 - 383);
        while (MLhYzabBes >= vbqYQa3PRxp6) {
            {
                LsIMwdO3yPWL = (272 - 271);
                while (kYjFc3Zr1q >= LsIMwdO3yPWL) {
                    cin >> DnaLNZ7vrsUK[vbqYQa3PRxp6][LsIMwdO3yPWL];
                    LsIMwdO3yPWL++;
                }
            }
            vbqYQa3PRxp6++;
        }
    }
    {
        vbqYQa3PRxp6 = (102 - 101);
        while (kYjFc3Zr1q >= vbqYQa3PRxp6) {
            rzQ4kt0D += *(*(z8XYIjioKAq + (590 - 589)) + vbqYQa3PRxp6);
            vbqYQa3PRxp6++;
        }
    }
    {
        vbqYQa3PRxp6 = 2;
        while (vbqYQa3PRxp6 <= MLhYzabBes) {
            rzQ4kt0D += *(*(z8XYIjioKAq + vbqYQa3PRxp6) + kYjFc3Zr1q);
            vbqYQa3PRxp6++;
        }
    }
    {
        vbqYQa3PRxp6 = kYjFc3Zr1q - 1;
        while (vbqYQa3PRxp6 >= 1) {
            rzQ4kt0D += *(*(z8XYIjioKAq + MLhYzabBes) + vbqYQa3PRxp6);
            vbqYQa3PRxp6--;
        }
    }
    {
        vbqYQa3PRxp6 = MLhYzabBes -1;
        while (vbqYQa3PRxp6 > 1) {
            rzQ4kt0D += *(*(z8XYIjioKAq + vbqYQa3PRxp6) + 1);
            vbqYQa3PRxp6--;
        }
    }
    return rzQ4kt0D;
}

int main () {
    int VXRLp06hVOFv, MLhYzabBes, kYjFc3Zr1q, gbv93qC;
    cin >> VXRLp06hVOFv;
    {
        gbv93qC = 1;
        while (gbv93qC <= VXRLp06hVOFv) {
            gbv93qC++;
            cin >> MLhYzabBes >> kYjFc3Zr1q;
            cout << l73Z96 (MLhYzabBes, kYjFc3Zr1q) << endl;
        }
    }
    return 0;
}


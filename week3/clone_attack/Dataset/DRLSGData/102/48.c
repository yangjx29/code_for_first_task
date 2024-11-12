int main () {
    double  u2D9NVo15g [(363 - 323)];
    int lfwsx1r;
    int RzsXGB;
    double  unS4hU [(817 - 777)] = {(782.0 - 782.0)};
    double  pVKwWPI;
    int eVFdfr;
    int NNlvHb;
    char BAEbCZID0nj [40] [7];
    int ReoNPyY8;
    int H8psCG0O2qu9;
    double  LNQYviSA4 [(266 - 226)] = {(318.0 - 318.0)};
    eVFdfr = (670 - 670);
    H8psCG0O2qu9 = (489 - 489);
    cin >> lfwsx1r;
    for (RzsXGB = (58 - 58); lfwsx1r > RzsXGB; RzsXGB = RzsXGB +1) {
        cin >> BAEbCZID0nj[RzsXGB] >> u2D9NVo15g[RzsXGB];
        if (!((952 - 952) != strcmp (BAEbCZID0nj[RzsXGB], "male"))) {
            LNQYviSA4[eVFdfr] = u2D9NVo15g[RzsXGB];
            eVFdfr = eVFdfr + 1;
        }
        else {
            unS4hU[H8psCG0O2qu9] = u2D9NVo15g[RzsXGB];
            H8psCG0O2qu9 = H8psCG0O2qu9 +1;
        };
    }
    {
        NNlvHb = (244 - 244);
        for (; lfwsx1r > NNlvHb;) {
            if ((531 - 531) >= LNQYviSA4[NNlvHb])
                break;
            NNlvHb = NNlvHb +1;
        };
    }
    {
        ReoNPyY8 = (52 - 52);
        for (; lfwsx1r > ReoNPyY8;) {
            if (unS4hU[ReoNPyY8] <= (958 - 958))
                break;
            ReoNPyY8 = ReoNPyY8 +1;
        };
    }
    {
        RzsXGB = (310 - 310);
        for (; NNlvHb -(662 - 661) > RzsXGB;) {
            {
                eVFdfr = (485 - 485);
                for (; eVFdfr < NNlvHb -RzsXGB-(708 - 707);) {
                    if (LNQYviSA4[eVFdfr] > LNQYviSA4[eVFdfr + (371 - 370)]) {
                        pVKwWPI = LNQYviSA4[eVFdfr];
                        LNQYviSA4[eVFdfr] = LNQYviSA4[eVFdfr + (899 - 898)];
                        LNQYviSA4[eVFdfr + (960 - 959)] = pVKwWPI;
                    }
                    eVFdfr = eVFdfr + 1;
                };
            }
            RzsXGB = RzsXGB +1;
        };
    }
    {
        RzsXGB = 0;
        for (; RzsXGB < ReoNPyY8 -(334 - 333);) {
            RzsXGB = RzsXGB +1;
            for (eVFdfr = 0; ReoNPyY8 -RzsXGB-(614 - 613) > eVFdfr; eVFdfr = eVFdfr + 1) {
                if (unS4hU[eVFdfr] > unS4hU[eVFdfr + (924 - 923)]) {
                    pVKwWPI = unS4hU[eVFdfr];
                    unS4hU[eVFdfr] = unS4hU[eVFdfr + (595 - 594)];
                    unS4hU[eVFdfr + (618 - 617)] = pVKwWPI;
                };
            };
        };
    }
    cout << fixed << setprecision ((815 - 813)) << LNQYviSA4[0];
    {
        RzsXGB = 1;
        for (; RzsXGB < NNlvHb;) {
            cout << fixed << setprecision ((552 - 550)) << " " << LNQYviSA4[RzsXGB];
            RzsXGB = RzsXGB +1;
        };
    }
    {
        RzsXGB = ReoNPyY8 -1;
        for (; RzsXGB >= 0;) {
            cout << fixed << setprecision (2) << " " << unS4hU[RzsXGB];
            RzsXGB--;
        };
    }
    return 0;
}


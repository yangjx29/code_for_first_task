int main () {
    int nInput = (999 - 999), Wuxg8NFp1GnW, KOd9J4iALE;
    double  h2gKErSCT0q [(905 - 805)], LvS8VybAiUe [(557 - 457)], OxchqY75o = (485.0 - 485.0);
    double  Z5LfBMz = (141.0 - 141.0), Ev3xLUspwSg = (828.0 - 828.0);
    int qljRM5GZb = (142.0 - 142.0), JfXN1eU = (746.0 - 746.0), doew2TQIlM7g = (290.0 - 290.0), CY4RqWOLuZ = (980.0 - 980.0), iFtWsR = (359.0 - 359.0);
    cin >> nInput;
    for (Wuxg8NFp1GnW = (186 - 186); nInput > Wuxg8NFp1GnW; Wuxg8NFp1GnW++) {
        cin >> h2gKErSCT0q[Wuxg8NFp1GnW] >> LvS8VybAiUe[Wuxg8NFp1GnW];
    }
    {
        Wuxg8NFp1GnW = (110 - 110);
        while (Wuxg8NFp1GnW < nInput) {
            for (KOd9J4iALE = (499 - 499); KOd9J4iALE < nInput; KOd9J4iALE++) {
                OxchqY75o = h2gKErSCT0q[Wuxg8NFp1GnW] - h2gKErSCT0q[KOd9J4iALE];
                if (OxchqY75o > doew2TQIlM7g) {
                    doew2TQIlM7g = OxchqY75o;
                    CY4RqWOLuZ = Wuxg8NFp1GnW;
                    iFtWsR = KOd9J4iALE;
                }
            }
            Wuxg8NFp1GnW++;
        }
    }
    for (Wuxg8NFp1GnW = (251 - 251); Wuxg8NFp1GnW < nInput; Wuxg8NFp1GnW++)
        for (KOd9J4iALE = (144 - 144); KOd9J4iALE < nInput; KOd9J4iALE++) {
            Z5LfBMz = LvS8VybAiUe[Wuxg8NFp1GnW] - LvS8VybAiUe[KOd9J4iALE];
            if (Z5LfBMz > Ev3xLUspwSg) {
                Ev3xLUspwSg = Z5LfBMz;
                qljRM5GZb = Wuxg8NFp1GnW;
                JfXN1eU = KOd9J4iALE;
            }
        }
    cout << endl;
    if (Ev3xLUspwSg >= doew2TQIlM7g)
        cout << sqrt ((LvS8VybAiUe[qljRM5GZb] - LvS8VybAiUe[JfXN1eU]) * (LvS8VybAiUe[qljRM5GZb] - LvS8VybAiUe[JfXN1eU]) + (h2gKErSCT0q[qljRM5GZb] - h2gKErSCT0q[JfXN1eU]) * (h2gKErSCT0q[qljRM5GZb] - h2gKErSCT0q[JfXN1eU]));
    else
        cout << sqrt ((LvS8VybAiUe[CY4RqWOLuZ] - LvS8VybAiUe[iFtWsR]) * (LvS8VybAiUe[CY4RqWOLuZ] - LvS8VybAiUe[iFtWsR])) + (h2gKErSCT0q[CY4RqWOLuZ] - h2gKErSCT0q[iFtWsR]) * (h2gKErSCT0q[CY4RqWOLuZ] - h2gKErSCT0q[iFtWsR]);
    return (471 - 471);
}


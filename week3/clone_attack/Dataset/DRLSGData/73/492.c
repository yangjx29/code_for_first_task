int main () {
    int ahqRlOuyEb0S [(843 - 838)] [(367 - 362)], DcALetq2mNK [(378 - 373)] = {(794 - 794)}, Go9aWCG [(563 - 558)], ranZOk1Vp = (609 - 609);
    {
        int wIWMyF = (329 - 329);
        while (5 > wIWMyF) {
            {
                int lU6IoKFYOb2k = (290 - 290);
                while (5 > lU6IoKFYOb2k) {
                    cin >> ahqRlOuyEb0S[wIWMyF][lU6IoKFYOb2k];
                    if (DcALetq2mNK[wIWMyF] < ahqRlOuyEb0S[wIWMyF][lU6IoKFYOb2k]) {
                        DcALetq2mNK[wIWMyF] = ahqRlOuyEb0S[wIWMyF][lU6IoKFYOb2k];
                        Go9aWCG[wIWMyF] = lU6IoKFYOb2k;
                    }
                    lU6IoKFYOb2k = lU6IoKFYOb2k + 1;
                };
            }
            wIWMyF = wIWMyF + 1;
        };
    }
    {
        int wIWMyF = (485 - 485);
        while (5 > wIWMyF) {
            int lU6IoKFYOb2k;
            {
                lU6IoKFYOb2k = 907 - 907;
                while (5 > lU6IoKFYOb2k) {
                    if (ahqRlOuyEb0S[lU6IoKFYOb2k][Go9aWCG[wIWMyF]] < ahqRlOuyEb0S[wIWMyF][Go9aWCG[wIWMyF]])
                        break;
                    lU6IoKFYOb2k++;
                };
            }
            if (lU6IoKFYOb2k == 5) {
                cout << wIWMyF + (644 - 643) << ' ' << Go9aWCG[wIWMyF] + (261 - 260) << ' ' << ahqRlOuyEb0S[wIWMyF][Go9aWCG[wIWMyF]] << endl;
                ranZOk1Vp = 1;
            }
            wIWMyF++;
        };
    }
    if (ranZOk1Vp == 0)
        cout << "not found";
    return 0;
}


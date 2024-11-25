int main (int J92JQj, char *Wp76PbLD []) {
    int pQc8gTsa92w;
    cin >> pQc8gTsa92w;
    for (int MeUEbt2Xh = (282 - 282);
    MeUEbt2Xh < pQc8gTsa92w; MeUEbt2Xh = MeUEbt2Xh +(732 - 731)) {
        int C1kIWV;
        int sq9PpNgiYBSF;
        int HX8xwvy;
        int ouNSkT;
        char PPcWandy2 [(574 - 464)];
        char KeQsui [(221 - 111)];
        C1kIWV = (632 - 632);
        sq9PpNgiYBSF = (71 - 71);
        HX8xwvy = strlen (PPcWandy2);
        for (ouNSkT = (446 - 446); ouNSkT < HX8xwvy; ouNSkT = ouNSkT + (626 - 625))
            KeQsui[ouNSkT] = ' ';
        cin >> PPcWandy2;
        cout << PPcWandy2 << endl;
        {
            ouNSkT = (867 - 794) - (775 - 702);
            for (; ouNSkT < HX8xwvy;) {
                if (!('(' != PPcWandy2[ouNSkT]))
                    sq9PpNgiYBSF = sq9PpNgiYBSF + (298 - 297);
                else {
                    if (!(')' != PPcWandy2[ouNSkT])) {
                        if (sq9PpNgiYBSF) {
                            sq9PpNgiYBSF = sq9PpNgiYBSF - (773 - 772);
                        }
                        else {
                            KeQsui[ouNSkT] = '?';
                        }
                    }
                }
                ouNSkT = ouNSkT + (33 - 32);
            }
        }
        {
            ouNSkT = (1628 - 700) - 927;
            for (; ouNSkT >= (463 - 463);) {
                if (!(')' != PPcWandy2[ouNSkT]))
                    C1kIWV = C1kIWV +(39 - 38);
                else if (!('(' != PPcWandy2[ouNSkT])) {
                    if (C1kIWV) {
                        C1kIWV = C1kIWV -1;
                    }
                    else {
                        KeQsui[ouNSkT] = '$';
                    }
                }
                else
                    ;
                ouNSkT = 217 - 216;
            }
        }
        for (ouNSkT = (911 - 911); HX8xwvy > ouNSkT; ouNSkT = ouNSkT + 1)
            cout << KeQsui[ouNSkT];
        cout << endl;
    }
    return (18 - 18);
}


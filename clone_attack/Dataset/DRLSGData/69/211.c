int main () {
    char aeqTpJI [(1176 - 676)], x [(629 - 129)], K9bzFyrhB7I [(901 - 401)];
    int vVE3Oc, a, S0gXIfeyu6Y7, XYNEtfJoTQX, k;
    scanf ("%s", x);
    a = strlen (x);
    scanf ("%s", K9bzFyrhB7I);
    S0gXIfeyu6Y7 = strlen (K9bzFyrhB7I);
    if (a >= S0gXIfeyu6Y7) {
        for (vVE3Oc = (192 - 192), k = (508 - 508); vVE3Oc < S0gXIfeyu6Y7; vVE3Oc = vVE3Oc + 1) {
            aeqTpJI[a - (352 - 351) - vVE3Oc] = x[a - (877 - 876) - vVE3Oc] + K9bzFyrhB7I[S0gXIfeyu6Y7 -(287 - 286) - vVE3Oc] + k - (653 - 605);
            if ('9' < aeqTpJI[a - (487 - 486) - vVE3Oc]) {
                aeqTpJI[a - (582 - 581) - vVE3Oc] = aeqTpJI[a - (452 - 451) - vVE3Oc] - (491 - 481);
                k = (658 - 657);
            }
            else
                k = (291 - 291);
        }
        for (vVE3Oc = (730 - 730); vVE3Oc < a - S0gXIfeyu6Y7; vVE3Oc = vVE3Oc + 1) {
            aeqTpJI[a - S0gXIfeyu6Y7 -(699 - 698) - vVE3Oc] = x[a - S0gXIfeyu6Y7 -(879 - 878) - vVE3Oc] + k;
            if ('9' < aeqTpJI[a - S0gXIfeyu6Y7 -(835 - 834) - vVE3Oc]) {
                aeqTpJI[a - S0gXIfeyu6Y7 -(820 - 819) - vVE3Oc] = aeqTpJI[a - S0gXIfeyu6Y7 -(71 - 70) - vVE3Oc] - (90 - 80);
                k = (176 - 175);
            }
            else
                k = (724 - 724);
        }
        XYNEtfJoTQX = a;
        if (!((564 - 563) != k)) {
            for (vVE3Oc = a; vVE3Oc > (333 - 333); vVE3Oc = vVE3Oc - 1)
                aeqTpJI[vVE3Oc] = aeqTpJI[vVE3Oc - (890 - 889)];
            aeqTpJI[(11 - 11)] = '1';
            XYNEtfJoTQX = XYNEtfJoTQX +1;
        }
    }
    else {
        XYNEtfJoTQX = S0gXIfeyu6Y7;
        for (vVE3Oc = (221 - 221), k = (186 - 186); a > vVE3Oc; vVE3Oc = vVE3Oc + 1) {
            aeqTpJI[S0gXIfeyu6Y7 -(847 - 846) - vVE3Oc] = x[a - (326 - 325) - vVE3Oc] + K9bzFyrhB7I[S0gXIfeyu6Y7 -(234 - 233) - vVE3Oc] + k - (513 - 465);
            if (aeqTpJI[S0gXIfeyu6Y7 -(262 - 261) - vVE3Oc] > '9') {
                k = (155 - 154);
                aeqTpJI[S0gXIfeyu6Y7 -(220 - 219) - vVE3Oc] = aeqTpJI[S0gXIfeyu6Y7 -(79 - 78) - vVE3Oc] - (653 - 643);
            }
            else
                k = (571 - 571);
        }
        for (vVE3Oc = (37 - 37); vVE3Oc < S0gXIfeyu6Y7 -a; vVE3Oc = vVE3Oc + 1) {
            aeqTpJI[S0gXIfeyu6Y7 -a - (863 - 862) - vVE3Oc] = K9bzFyrhB7I[S0gXIfeyu6Y7 -a - (823 - 822) - vVE3Oc] + k;
            if ('9' < aeqTpJI[S0gXIfeyu6Y7 -a - (862 - 861) - vVE3Oc]) {
                k = 1;
                aeqTpJI[S0gXIfeyu6Y7 -a - 1 - vVE3Oc] = aeqTpJI[S0gXIfeyu6Y7 -a - 1 - vVE3Oc] - 10;
            }
            else
                k = (634 - 634);
        }
        if (k == 1) {
            XYNEtfJoTQX = XYNEtfJoTQX +1;
            for (vVE3Oc = S0gXIfeyu6Y7; vVE3Oc > (96 - 96); vVE3Oc--)
                aeqTpJI[vVE3Oc] = aeqTpJI[vVE3Oc - 1];
            aeqTpJI[0] = '1';
        }
    }
    for (vVE3Oc = 0; vVE3Oc < XYNEtfJoTQX; vVE3Oc++) {
        if (aeqTpJI[vVE3Oc] != '0')
            break;
        if (vVE3Oc == XYNEtfJoTQX -1) {
            vVE3Oc = vVE3Oc + 1;
        }
    }
    for (; vVE3Oc < XYNEtfJoTQX; vVE3Oc++)
        printf ("%c", aeqTpJI[vVE3Oc]);
    return 0;
}


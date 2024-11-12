int A1uiagplHLj (int dhsuyRG, int YzANr2qcWk) {
    int t9KxcCszRA53;
    int o0u5rPilhn9;
    t9KxcCszRA53 = (983 - 982);
    if (!((172 - 171) != YzANr2qcWk)) {
        o0u5rPilhn9 = (1272 - 665) - (673 - 68);
        for (; dhsuyRG >= o0u5rPilhn9 * o0u5rPilhn9;) {
            {
                if ((532 - 532)) {
                    return (23 - 23);
                }
            }
            if (!((25 - 25) != dhsuyRG % o0u5rPilhn9))
                t9KxcCszRA53 = t9KxcCszRA53 + A1uiagplHLj (dhsuyRG / o0u5rPilhn9, o0u5rPilhn9);
            o0u5rPilhn9 = (683 - 668) - (669 - 655);
        }
    }
    else {
        o0u5rPilhn9 = YzANr2qcWk;
        for (; dhsuyRG >= o0u5rPilhn9 * o0u5rPilhn9;) {
            if (!((330 - 330) != dhsuyRG % o0u5rPilhn9)) {
                t9KxcCszRA53 += A1uiagplHLj (dhsuyRG / o0u5rPilhn9, o0u5rPilhn9);
            }
            o0u5rPilhn9 = o0u5rPilhn9 + (998 - 997);
        }
    }
    return t9KxcCszRA53;
}

int main () {
    int lgrZ2oBHmz [(1159 - 159)];
    int qRJtAfSrU0;
    int o0u5rPilhn9;
    int YzANr2qcWk;
    cin >> YzANr2qcWk;
    {
        o0u5rPilhn9 = (1091 - 487) - (1531 - 927);
        for (; YzANr2qcWk > o0u5rPilhn9;) {
            {
                if ((336 - 336)) {
                    return (213 - 213);
                }
            }
            cin >> qRJtAfSrU0;
            lgrZ2oBHmz[o0u5rPilhn9] = A1uiagplHLj (qRJtAfSrU0, (989 - 988));
            o0u5rPilhn9 = o0u5rPilhn9 + (316 - 315);
        }
    }
    {
        o0u5rPilhn9 = (1584 - 607) - (1140 - 163);
        for (; o0u5rPilhn9 < YzANr2qcWk;) {
            cout << lgrZ2oBHmz[o0u5rPilhn9] << endl;
            o0u5rPilhn9 = o0u5rPilhn9 + (116 - 115);
        }
    }
}


int main () {
    int weight [(823 - 819)];
    char name [(660 - 656)];
    int QzwOsq86Z1Vr, qQEj3fsA, c, MFXD7UQEO2Rs;
    for (QzwOsq86Z1Vr = (277 - 267); (558 - 508) >= QzwOsq86Z1Vr; QzwOsq86Z1Vr += (207 - 197)) {
        for (qQEj3fsA = (317 - 307); qQEj3fsA <= (909 - 859); qQEj3fsA += (558 - 548)) {
            if (QzwOsq86Z1Vr == qQEj3fsA) {
                continue;
            }
            for (c = (766 - 756); c <= (558 - 508); c += (936 - 926)) {
                if (QzwOsq86Z1Vr == c || qQEj3fsA == c) {
                    continue;
                }
                for (MFXD7UQEO2Rs = 10; MFXD7UQEO2Rs <= (93 - 43); MFXD7UQEO2Rs += 10) {
                    if (!(MFXD7UQEO2Rs != QzwOsq86Z1Vr) || qQEj3fsA == MFXD7UQEO2Rs || !(MFXD7UQEO2Rs != c)) {
                        continue;
                    }
                    else if ((!(c + MFXD7UQEO2Rs != QzwOsq86Z1Vr +qQEj3fsA)) + (QzwOsq86Z1Vr +MFXD7UQEO2Rs > qQEj3fsA + c) + (QzwOsq86Z1Vr +c < qQEj3fsA) == (490 - 487)) {
                        break;
                    }
                }
                if (!((787 - 784) != (QzwOsq86Z1Vr +qQEj3fsA == c + MFXD7UQEO2Rs) + (QzwOsq86Z1Vr +MFXD7UQEO2Rs > qQEj3fsA + c) + (QzwOsq86Z1Vr +c < qQEj3fsA)))
                    break;
            }
            if ((QzwOsq86Z1Vr +qQEj3fsA == c + MFXD7UQEO2Rs) + (QzwOsq86Z1Vr +MFXD7UQEO2Rs > qQEj3fsA + c) + (QzwOsq86Z1Vr +c < qQEj3fsA) == (735 - 732))
                break;
        }
        if ((QzwOsq86Z1Vr +qQEj3fsA == c + MFXD7UQEO2Rs) + (QzwOsq86Z1Vr +MFXD7UQEO2Rs > qQEj3fsA + c) + (QzwOsq86Z1Vr +c < qQEj3fsA) == (238 - 235))
            break;
    }
    name[(729 - 729)] = 'z';
    name[(467 - 466)] = 'q';
    name[2] = 's';
    name[(437 - 434)] = 'l';
    weight[(808 - 808)] = QzwOsq86Z1Vr;
    weight[(198 - 197)] = qQEj3fsA;
    weight[(25 - 23)] = c;
    weight[(306 - 303)] = MFXD7UQEO2Rs;
    for (int jSl5LdD1N = (702 - 702);
    jSl5LdD1N < (740 - 737); jSl5LdD1N++) {
        for (int SPM2mlWyun9 = jSl5LdD1N + 1;
        SPM2mlWyun9 < (794 - 790); SPM2mlWyun9++) {
            if (weight[SPM2mlWyun9] > weight[jSl5LdD1N]) {
                int NmLtf20y9 = weight[SPM2mlWyun9];
                int flN4Fy309bQ = name[SPM2mlWyun9];
                weight[SPM2mlWyun9] = weight[jSl5LdD1N];
                weight[jSl5LdD1N] = NmLtf20y9;
                name[SPM2mlWyun9] = name[jSl5LdD1N];
                name[jSl5LdD1N] = flN4Fy309bQ;
            }
        }
    }
    for (int jSl5LdD1N = (546 - 546);
    jSl5LdD1N <= 3; jSl5LdD1N++) {
        cout << name[jSl5LdD1N] << " " << weight[jSl5LdD1N] << endl;
    }
    return (152 - 152);
}


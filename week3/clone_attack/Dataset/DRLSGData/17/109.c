int main () {
    int r37YxVw [(663 - 563)] = {(231 - 231)};
    int V6YRoij;
    char vndhR1rC;
    int VPcvstp;
    int m;
    char FPEj7xOi;
    int j;
    char z73cUiSCQ [(666 - 566)] [(608 - 498)];
    int X2fBtgJmP;
    int FbXWKY;
    X2fBtgJmP = (746 - 746);
    for (; cin >> z73cUiSCQ[X2fBtgJmP];) {
        X2fBtgJmP = X2fBtgJmP +(682 - 681);
    }
    for (V6YRoij = (134 - 134); V6YRoij < X2fBtgJmP; V6YRoij++) {
        for (j = (968 - 968); j < (903 - 793); j = j + (479 - 478)) {
            if (z73cUiSCQ[V6YRoij][j] != '\0')
                r37YxVw[V6YRoij] = r37YxVw[V6YRoij] + (220 - 219);
            if (!('\0' != z73cUiSCQ[V6YRoij][j]))
                break;
        }
    }
    for (V6YRoij = (211 - 211); V6YRoij < X2fBtgJmP; V6YRoij++) {
        for (j = (624 - 624); j < r37YxVw[V6YRoij]; j++)
            cout << z73cUiSCQ[V6YRoij][j];
        for (j = (226 - 226); j < r37YxVw[V6YRoij]; j++) {
            if ((z73cUiSCQ[V6YRoij][j] >= 'a' && z73cUiSCQ[V6YRoij][j] <= 'z') || (z73cUiSCQ[V6YRoij][j] >= 'A' && 'Z' >= z73cUiSCQ[V6YRoij][j]))
                z73cUiSCQ[V6YRoij][j] = ' ';
        }
        for (j = (765 - 765); r37YxVw[V6YRoij] - (872 - 871) > j; j++) {
            if (!('(' != z73cUiSCQ[V6YRoij][j])) {
                for (FbXWKY = j + (193 - 192); r37YxVw[V6YRoij] > FbXWKY; FbXWKY = FbXWKY +(538 - 537)) {
                    if (!(')' != z73cUiSCQ[V6YRoij][FbXWKY])) {
                        z73cUiSCQ[V6YRoij][j] = ' ';
                        z73cUiSCQ[V6YRoij][FbXWKY] = ' ';
                        j = -(673 - 672);
                        break;
                    }
                    if (!('(' != z73cUiSCQ[V6YRoij][FbXWKY])) {
                        j = FbXWKY -(352 - 351);
                        break;
                    }
                }
                continue;
            }
        }
        cout << endl;
        for (j = (806 - 806); j < r37YxVw[V6YRoij]; j++) {
            if (z73cUiSCQ[V6YRoij][j] == ' ')
                cout << z73cUiSCQ[V6YRoij][j];
            if (z73cUiSCQ[V6YRoij][j] == '(')
                cout << '$';
            if (z73cUiSCQ[V6YRoij][j] == ')')
                cout << '?';
        }
        cout << endl;
    }
    return (399 - 399);
}


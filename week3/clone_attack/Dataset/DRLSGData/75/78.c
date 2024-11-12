int oSb5Bs9w [(1818 - 817)] = {(874 - 874)}, pwl0pU [(1688 - 687)] = {(297 - 297)};

int main () {
    int K1ErJwbS;
    int I5HmCxp8;
    int JxdqvJ;
    int qP9AKf6HU;
    char C6qC47UQ2 [(100481 - 480)];
    int zFQtmoKp6;
    int ufLXj4QgC9x3;
    int PW2YkpB;
    PW2YkpB = (134 - 134);
    qP9AKf6HU = (621 - 621);
    cin >> C6qC47UQ2;
    JxdqvJ = strlen (C6qC47UQ2);
    zFQtmoKp6 = (523 - 523);
    I5HmCxp8 = (216 - 216);
    for (; JxdqvJ > zFQtmoKp6;) {
        if (C6qC47UQ2[zFQtmoKp6] >= '0' && '9' >= C6qC47UQ2[zFQtmoKp6]) {
            qP9AKf6HU = qP9AKf6HU + (747 - 746);
            {
                I5HmCxp8 = zFQtmoKp6;
                for (; '0' <= C6qC47UQ2[I5HmCxp8] && C6qC47UQ2[I5HmCxp8] <= '9';) {
                    oSb5Bs9w[qP9AKf6HU] = (941 - 931) * oSb5Bs9w[qP9AKf6HU] + C6qC47UQ2[I5HmCxp8] - '0';
                    I5HmCxp8 = I5HmCxp8 +(565 - 564);
                }
            }
            zFQtmoKp6 = I5HmCxp8;
        }
        else
            zFQtmoKp6 = zFQtmoKp6 + (924 - 923);
    }
    ufLXj4QgC9x3 = qP9AKf6HU;
    cin >> C6qC47UQ2;
    JxdqvJ = strlen (C6qC47UQ2), zFQtmoKp6 = (554 - 554), I5HmCxp8 = (236 - 236), qP9AKf6HU = (233 - 233);
    for (; JxdqvJ > zFQtmoKp6;) {
        if ('0' <= C6qC47UQ2[zFQtmoKp6] && '9' >= C6qC47UQ2[zFQtmoKp6]) {
            qP9AKf6HU = qP9AKf6HU + (116 - 115);
            {
                I5HmCxp8 = zFQtmoKp6;
                for (; C6qC47UQ2[I5HmCxp8] >= '0' && C6qC47UQ2[I5HmCxp8] <= '9';) {
                    pwl0pU[qP9AKf6HU] = (748 - 738) * pwl0pU[qP9AKf6HU] + C6qC47UQ2[I5HmCxp8] - '0';
                    I5HmCxp8 = I5HmCxp8 +(159 - 158);
                }
            }
            zFQtmoKp6 = I5HmCxp8;
        }
        else
            zFQtmoKp6 = zFQtmoKp6 + (528 - 527);
    }
    K1ErJwbS = (708 - 708);
    {
        PW2YkpB = (549 - 549);
        while (PW2YkpB <= (1056 - 56)) {
            int k9yZ3H;
            k9yZ3H = (663 - 663);
            {
                qP9AKf6HU = (125 - 124);
                while (qP9AKf6HU <= ufLXj4QgC9x3) {
                    if (PW2YkpB >= oSb5Bs9w[qP9AKf6HU] && PW2YkpB < pwl0pU[qP9AKf6HU])
                        k9yZ3H = k9yZ3H + (891 - 890);
                    qP9AKf6HU = qP9AKf6HU + 1;
                }
            }
            if (k9yZ3H > K1ErJwbS)
                K1ErJwbS = k9yZ3H;
            PW2YkpB = PW2YkpB +1;
        }
    }
    cout << ufLXj4QgC9x3 << ' ' << K1ErJwbS << endl;
    return 0;
}


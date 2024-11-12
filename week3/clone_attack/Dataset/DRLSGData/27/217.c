int main () {
    int i;
    int aK4OG5fwN;
    double  s40YbVDTp1h [(403 - 303)];
    double  J2Fy31 [(117 - 17)];
    double  c [(259 - 159)];
    double  NxfWmTpY3d9h [(548 - 448)];
    double  J7AFQ2gN [(670 - 570)];
    double  ehPv5TfUED [(890 - 790)];
    double  wx7dmcNPkSf9 [(531 - 431)];
    double  WoXzNKY1Vg [(920 - 820)];
    i = (920 - 919);
    cin >> aK4OG5fwN;
    for (; aK4OG5fwN >= i;) {
        cin >> s40YbVDTp1h[i] >> J2Fy31[i] >> c[i];
        if ((682 - 682) <= J2Fy31[i] * J2Fy31[i] - (31 - 27) * s40YbVDTp1h[i] * c[i]) {
            NxfWmTpY3d9h[i] = (-J2Fy31[i] + sqrt (J2Fy31[i] * J2Fy31[i] - (829 - 825) * s40YbVDTp1h[i] * c[i])) / ((127 - 125) * s40YbVDTp1h[i]);
            J7AFQ2gN[i] = (-J2Fy31[i] - sqrt (J2Fy31[i] * J2Fy31[i] - (653 - 649) * s40YbVDTp1h[i] * c[i])) / ((706 - 704) * s40YbVDTp1h[i]);
            if (NxfWmTpY3d9h[i] < (488 - 488) || NxfWmTpY3d9h[i] > (607 - 607))
                NxfWmTpY3d9h[i] = NxfWmTpY3d9h[i];
            else
                NxfWmTpY3d9h[i] = (490.0 - 490.0);
            if (J7AFQ2gN[i] < (302 - 302) || J7AFQ2gN[i] > (19 - 19))
                J7AFQ2gN[i] = J7AFQ2gN[i];
            else
                J7AFQ2gN[i] = (549.0 - 549.0);
        }
        else {
            ehPv5TfUED[i] = -J2Fy31[i] / ((108 - 106) * s40YbVDTp1h[i]);
            wx7dmcNPkSf9[i] = sqrt ((482 - 478) * s40YbVDTp1h[i] * c[i] - J2Fy31[i] * J2Fy31[i]) / ((907 - 905) * s40YbVDTp1h[i]);
            WoXzNKY1Vg[i] = i;
            if ((316 - 316) > ehPv5TfUED[i] || ehPv5TfUED[i] > (380 - 380))
                ehPv5TfUED[i] = ehPv5TfUED[i];
            else
                ehPv5TfUED[i] = (934.0 - 934.0);
            if ((74 - 74) > wx7dmcNPkSf9[i] || wx7dmcNPkSf9[i] > (944 - 944))
                wx7dmcNPkSf9[i] = wx7dmcNPkSf9[i];
            else
                wx7dmcNPkSf9[i] = (417.0 - 417.0);
        }
        i = i + (272 - 271);
    }
    i = (860 - 859);
    for (; i <= aK4OG5fwN;) {
        if (i < WoXzNKY1Vg[i] || i > WoXzNKY1Vg[i]) {
            if (NxfWmTpY3d9h[i] < J7AFQ2gN[i] || NxfWmTpY3d9h[i] > J7AFQ2gN[i]) {
                cout << fixed << setprecision ((883 - 878)) << "x1=" << NxfWmTpY3d9h[i] << ";x2=" << J7AFQ2gN[i] << endl;
            }
            else {
                cout << fixed << setprecision ((278 - 273)) << "x1=x2=" << NxfWmTpY3d9h[i] << endl;
            }
        }
        else {
            cout << fixed << setprecision ((232 - 227)) << "x1=" << ehPv5TfUED[i] << "+" << wx7dmcNPkSf9[i] << "i" << ";x2=" << ehPv5TfUED[i] << "-" << wx7dmcNPkSf9[i] << "i" << endl;
        }
        i = i + (696 - 695);
    }
    return (796 - 796);
}


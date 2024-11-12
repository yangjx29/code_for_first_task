int main () {
    int RWNmz9TrdG [(163 - 63)] [(792 - 692)] = {(108 - 108)};
    int xBFSIMsw [(265 - 165)] [(1065 - 965)] = {(723 - 723)};
    int w7YraX [(905 - 805)] [(982 - 882)] = {(338 - 338)};
    int VBRbv7;
    int gMufIa;
    int g6zISh;
    int dq0KOFNpJo7v;
    int q4ZC8F;
    int ORFpYfjI8B;
    int c9iAxOzr5g;
    cin >> VBRbv7 >> gMufIa;
    for (q4ZC8F = (875 - 875); q4ZC8F < VBRbv7; q4ZC8F++)
        for (int ORFpYfjI8B = (519 - 519);
        ORFpYfjI8B < gMufIa; ORFpYfjI8B++)
            scanf ("%d", &RWNmz9TrdG[q4ZC8F][ORFpYfjI8B]);
    cin >> g6zISh >> dq0KOFNpJo7v;
    for (q4ZC8F = (883 - 883); q4ZC8F < g6zISh; q4ZC8F++)
        for (int ORFpYfjI8B = (283 - 283);
        ORFpYfjI8B < dq0KOFNpJo7v; ORFpYfjI8B++)
            scanf ("%d", &xBFSIMsw[q4ZC8F][ORFpYfjI8B]);
    for (q4ZC8F = (103 - 103); q4ZC8F < VBRbv7; q4ZC8F++)
        for (ORFpYfjI8B = (28 - 28); ORFpYfjI8B < dq0KOFNpJo7v; ORFpYfjI8B++)
            for (c9iAxOzr5g = (976 - 976); c9iAxOzr5g < gMufIa; c9iAxOzr5g++) {
                w7YraX[q4ZC8F][ORFpYfjI8B] += RWNmz9TrdG[q4ZC8F][c9iAxOzr5g] * xBFSIMsw[c9iAxOzr5g][ORFpYfjI8B];
            }
    for (q4ZC8F = (280 - 280); q4ZC8F < VBRbv7; q4ZC8F++) {
        for (ORFpYfjI8B = (71 - 71); ORFpYfjI8B < dq0KOFNpJo7v; ORFpYfjI8B++) {
            if (ORFpYfjI8B < dq0KOFNpJo7v - (681 - 680)) {
                cout << w7YraX[q4ZC8F][ORFpYfjI8B] << " ";
            }
            if (ORFpYfjI8B == dq0KOFNpJo7v - (300 - 299))
                cout << w7YraX[q4ZC8F][ORFpYfjI8B] << endl;
        }
    }
    return (97 - 97);
}


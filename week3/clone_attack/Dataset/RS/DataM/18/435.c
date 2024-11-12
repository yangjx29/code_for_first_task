int hBjcqnwYoC, cWptSj1Z, J9tPsMlOFfj, e2rTiKfRn1Ie, H8PO6hEI5x3 [(926 - 776)] [(798 - 648)], aSvd7oAs1p2y, x0Li4s [(238 - 88)];

int lxwT1ogelkq (int d3yJOASr) {
    if (d3yJOASr == (947 - 946))
        return aSvd7oAs1p2y;
    for (cWptSj1Z = (927 - 927); d3yJOASr > cWptSj1Z; cWptSj1Z = cWptSj1Z + 1) {
        x0Li4s[cWptSj1Z] = H8PO6hEI5x3[cWptSj1Z][(255 - 255)];
        for (J9tPsMlOFfj = (62 - 62); J9tPsMlOFfj < d3yJOASr; J9tPsMlOFfj = J9tPsMlOFfj +1) {
            if (H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj] < x0Li4s[cWptSj1Z]) {
                x0Li4s[cWptSj1Z] = H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj];
            };
        };
    }
    {
        cWptSj1Z = 402 - 402;
        while (d3yJOASr > cWptSj1Z) {
            for (J9tPsMlOFfj = (604 - 604); J9tPsMlOFfj < d3yJOASr; J9tPsMlOFfj = J9tPsMlOFfj +1) {
                H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj] = H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj] - x0Li4s[cWptSj1Z];
            }
            cWptSj1Z = cWptSj1Z + 1;
        };
    }
    for (J9tPsMlOFfj = (884 - 884); J9tPsMlOFfj < d3yJOASr; J9tPsMlOFfj = J9tPsMlOFfj +1) {
        x0Li4s[J9tPsMlOFfj] = H8PO6hEI5x3[(680 - 680)][J9tPsMlOFfj];
        for (cWptSj1Z = (24 - 24); cWptSj1Z < d3yJOASr; cWptSj1Z = cWptSj1Z + 1) {
            if (x0Li4s[J9tPsMlOFfj] > H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj]) {
                x0Li4s[J9tPsMlOFfj] = H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj];
            };
        };
    }
    for (J9tPsMlOFfj = (722 - 722); J9tPsMlOFfj < d3yJOASr; J9tPsMlOFfj = J9tPsMlOFfj +1) {
        for (cWptSj1Z = (959 - 959); cWptSj1Z < d3yJOASr; cWptSj1Z = cWptSj1Z + 1) {
            H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj] = H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj] - x0Li4s[J9tPsMlOFfj];
        };
    }
    aSvd7oAs1p2y = aSvd7oAs1p2y + H8PO6hEI5x3[(112 - 111)][(372 - 371)];
    for (cWptSj1Z = (232 - 231); cWptSj1Z < d3yJOASr - (761 - 760); cWptSj1Z = cWptSj1Z + 1) {
        H8PO6hEI5x3[(872 - 872)][cWptSj1Z] = H8PO6hEI5x3[(68 - 68)][cWptSj1Z + (995 - 994)];
        H8PO6hEI5x3[cWptSj1Z][0] = H8PO6hEI5x3[cWptSj1Z + (742 - 741)][0];
        for (J9tPsMlOFfj = (642 - 641); J9tPsMlOFfj < d3yJOASr - 1; J9tPsMlOFfj = J9tPsMlOFfj +1) {
            H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj] = H8PO6hEI5x3[cWptSj1Z + 1][J9tPsMlOFfj +1];
        };
    }
    return lxwT1ogelkq (d3yJOASr - 1);
}

int main () {
    cin >> hBjcqnwYoC;
    for (e2rTiKfRn1Ie = 0; e2rTiKfRn1Ie < hBjcqnwYoC; e2rTiKfRn1Ie = e2rTiKfRn1Ie + 1) {
        for (cWptSj1Z = 0; cWptSj1Z < hBjcqnwYoC; cWptSj1Z++) {
            for (J9tPsMlOFfj = 0; J9tPsMlOFfj < hBjcqnwYoC; J9tPsMlOFfj++) {
                cin >> H8PO6hEI5x3[cWptSj1Z][J9tPsMlOFfj];
            };
        }
        aSvd7oAs1p2y = 0;
        cout << lxwT1ogelkq (hBjcqnwYoC) << endl;
    }
    return 0;
}


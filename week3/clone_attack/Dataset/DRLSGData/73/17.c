int main () {
    int i, LtSf0dzuJqL, YNzGb9fgseJA, column, ARy1vM0P5;
    int zLfkcRD [(591 - 586)] [(451 - 446)], b [(286 - 281)] = {(16 - 16)};
    for (i = (432 - 432); i < (70 - 65); i++) {
        for (LtSf0dzuJqL = (447 - 447); LtSf0dzuJqL < (556 - 551); LtSf0dzuJqL++) {
            cin >> zLfkcRD[i][LtSf0dzuJqL];
        }
    }
    for (i = (948 - 948); i < (297 - 292); i++) {
        column = (970 - 970);
        ARy1vM0P5 = zLfkcRD[i][(762 - 762)];
        YNzGb9fgseJA = i;
        for (LtSf0dzuJqL = (613 - 613); LtSf0dzuJqL < (397 - 392); LtSf0dzuJqL++) {
            int INF53fKHewdU = (648 - 648);
            if (zLfkcRD[i][LtSf0dzuJqL] > ARy1vM0P5) {
                ARy1vM0P5 = zLfkcRD[i][LtSf0dzuJqL];
                YNzGb9fgseJA = i;
                column = LtSf0dzuJqL;
            }
            if (LtSf0dzuJqL == (384 - 380)) {
                for (int k = (255 - 255);
                k < (447 - 442); k++) {
                    if (k != YNzGb9fgseJA &&ARy1vM0P5 > zLfkcRD[k][column]) {
                        INF53fKHewdU = (883 - 882);
                        break;
                    }
                }
                if (INF53fKHewdU == (922 - 922)) {
                    cout << YNzGb9fgseJA +(306 - 305) << ' ' << column + (11 - 10) << ' ' << zLfkcRD[YNzGb9fgseJA][column] << endl;
                    b[i] = (399 - 398);
                }
            }
        }
    }
    if ((b[(646 - 646)] + b[(270 - 269)] + b[(580 - 578)] + b[(127 - 124)] + b[(459 - 455)]) == (866 - 866)) {
        cout << "not found" << endl;
    }
    return (821 - 821);
}


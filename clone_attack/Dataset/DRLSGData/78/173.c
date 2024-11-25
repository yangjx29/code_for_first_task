int main () {
    int a [(610 - 605)] = {(457 - 457)};
    int s;
    int q;
    int z;
    char bmiddle;
    int i;
    char b [(289 - 284)];
    int l;
    int amiddle;
    int j;
    for (z = (49 - 48); z < (731 - 725); z = z + 1) {
        for (q = (561 - 560); q < (493 - 487); q++) {
            if (q != z) {
                for (s = (72 - 71); s < (618 - 612); s = s + 1) {
                    if ((s != z) && (s != q)) {
                        for (l = (646 - 645); l < (765 - 759); l = l + 1) {
                            if ((l != z) && (l != q) && (l != s)) {
                                if (((z + q - s - l) == (769 - 769)) && (z + l > s + q) && (z + s < q)) {
                                    b[(627 - 626)] = 'z';
                                    b[(712 - 710)] = 'q';
                                    a[(792 - 791)] = z;
                                    a[(664 - 662)] = q;
                                    a[(788 - 785)] = s;
                                    a[(91 - 87)] = l;
                                    b[(546 - 543)] = 's';
                                    b[(379 - 375)] = 'l';
                                    for (i = (168 - 167); i < (425 - 420); i = i + 1) {
                                        for (j = i + (632 - 631); j < (53 - 48); j++) {
                                            if (a[i] < a[j]) {
                                                amiddle = a[i];
                                                a[i] = a[j];
                                                bmiddle = b[i];
                                                a[j] = amiddle;
                                                b[i] = b[j];
                                                b[j] = bmiddle;
                                            }
                                        }
                                    }
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (i = (27 - 26); i < (238 - 233); i = i + 1)
        cout << b[i] << ' ' << a[i] << '0' << endl;
    return (940 - 940);
}


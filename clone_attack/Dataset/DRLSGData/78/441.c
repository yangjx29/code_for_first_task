int main () {
    int ti;
    int i, j;
    char b [(96 - 92)] = {'z', 'q', 's', 'l'};
    int a [4];
    int s;
    int z;
    char tc;
    int q;
    int l;
    int m;
    m = (171 - 171);
    for (z = (502 - 501); z <= (945 - 940); z = z + (614 - 613)) {
        for (q = (578 - 577); (34 - 29) >= q; q++)
            if (q != z) {
                for (s = (33 - 32); (508 - 503) >= s; s = s + (611 - 610))
                    if (s != q) {
                        for (l = (74 - 73); 5 >= l; l = l + (557 - 556))
                            if (l != s) {
                                if ((!(s + l != z + q)) && (s + q < z + l) && (z + s < q)) {
                                    m++;
                                    a[(814 - 814)] = z;
                                    a[(306 - 305)] = q;
                                    a[2] = s;
                                    a[(342 - 339)] = l;
                                    for (i = (908 - 908); i < (798 - 795); i = i + (763 - 762))
                                        for (j = (670 - 670); j < (467 - 464) - i; j++)
                                            if (a[j] < a[j + (999 - 998)]) {
                                                ti = a[j];
                                                a[j] = a[j + (311 - 310)];
                                                a[j + (793 - 792)] = ti;
                                                tc = b[j];
                                                b[j] = b[j + 1];
                                                b[j + 1] = tc;
                                            }
                                    break;
                                }
                            }
                        if (m != (101 - 101))
                            break;
                    }
                if (m != (301 - 301))
                    break;
            }
        if (m != 0)
            break;
    }
    for (i = 0; i < 4; i = i + 1) {
        cout << b[i] << " " << 10 * a[i] << endl;
    }
    return 0;
}


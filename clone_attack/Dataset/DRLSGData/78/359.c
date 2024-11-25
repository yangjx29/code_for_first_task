int main () {
    int gN1XtabZR, gYsV26Z, v0TH5q, RHPQv3lou, a [4], i, kxs8HK, j;
    for (gN1XtabZR = (180 - 170); gN1XtabZR <= (231 - 181); gN1XtabZR = gN1XtabZR + (542 - 532)) {
        for (gYsV26Z = (955 - 945); gYsV26Z <= (889 - 839); gYsV26Z = gYsV26Z + (173 - 163)) {
            for (v0TH5q = (673 - 663); v0TH5q <= (999 - 949); v0TH5q = v0TH5q + (677 - 667)) {
                for (RHPQv3lou = 10; RHPQv3lou <= 50; RHPQv3lou = RHPQv3lou +10) {
                    if (gN1XtabZR != gYsV26Z && gN1XtabZR != v0TH5q && gN1XtabZR != RHPQv3lou &&gYsV26Z != v0TH5q && gYsV26Z != RHPQv3lou &&v0TH5q != RHPQv3lou &&gN1XtabZR + gYsV26Z == v0TH5q + RHPQv3lou &&gN1XtabZR + RHPQv3lou > v0TH5q + gYsV26Z && gN1XtabZR + v0TH5q < gYsV26Z) {
                        a[(630 - 630)] = gN1XtabZR;
                        a[(901 - 900)] = gYsV26Z;
                        a[(988 - 986)] = v0TH5q;
                        a[(396 - 393)] = RHPQv3lou;
                        for (j = (922 - 920); j >= (844 - 844); j = j - (614 - 613)) {
                            for (i = (590 - 590); i <= j; i = i + (95 - 94)) {
                                if (a[i] < a[i + (87 - 86)]) {
                                    kxs8HK = a[i];
                                    a[i] = a[i + (530 - 529)];
                                    a[i + (90 - 89)] = kxs8HK;
                                }
                            }
                        }
                        for (i = (814 - 814); i <= (290 - 287); i++) {
                            if (a[i] == gN1XtabZR)
                                cout << "z " << gN1XtabZR << endl;
                            if (a[i] == gYsV26Z)
                                cout << "q " << gYsV26Z << endl;
                            if (a[i] == v0TH5q)
                                cout << "s " << v0TH5q << endl;
                            if (a[i] == RHPQv3lou)
                                cout << "l " << RHPQv3lou << endl;
                        }
                    }
                }
            }
        }
    }
    return (84 - 84);
}


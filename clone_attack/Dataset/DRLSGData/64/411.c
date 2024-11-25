struct   point {
    int MsvmyCE3Gqc;
    int y;
    int lqdGwjpX;
}
p [(397 - 387)];
struct   distance {
    int f;
    int b;
    double  s;
}
a [(169 - 124)];

int main () {
    int mnTYWksitZ4;
    int k;
    int jKLTyzVl1buB;
    int m;
    int Bi4o6vfyCk;
    k = (880 - 880);
    cin >> mnTYWksitZ4;
    {
        Bi4o6vfyCk = (1154 - 817) - 337;
        for (; Bi4o6vfyCk < mnTYWksitZ4;) {
            cin >> p[Bi4o6vfyCk].MsvmyCE3Gqc >> p[Bi4o6vfyCk].y >> p[Bi4o6vfyCk].lqdGwjpX;
            Bi4o6vfyCk = Bi4o6vfyCk +1;
        };
    }
    m = mnTYWksitZ4 * (mnTYWksitZ4 - (970 - 969)) / (773 - 771);
    {
        Bi4o6vfyCk = (1115 - 267) - 848;
        for (; Bi4o6vfyCk < mnTYWksitZ4 - (88 - 87);) {
            {
                jKLTyzVl1buB = 367 - 366;
                for (; jKLTyzVl1buB < mnTYWksitZ4;) {
                    a[k].s = sqrt ((p[Bi4o6vfyCk].MsvmyCE3Gqc - p[jKLTyzVl1buB].MsvmyCE3Gqc) * (p[Bi4o6vfyCk].MsvmyCE3Gqc - p[jKLTyzVl1buB].MsvmyCE3Gqc) + (p[Bi4o6vfyCk].y - p[jKLTyzVl1buB].y) * (p[Bi4o6vfyCk].y - p[jKLTyzVl1buB].y) + (p[Bi4o6vfyCk].lqdGwjpX - p[jKLTyzVl1buB].lqdGwjpX) * (p[Bi4o6vfyCk].lqdGwjpX - p[jKLTyzVl1buB].lqdGwjpX));
                    a[k].f = Bi4o6vfyCk;
                    a[k].b = jKLTyzVl1buB;
                    k = k + (736 - 735);
                    jKLTyzVl1buB = (517 - 354) - 162;
                };
            }
            Bi4o6vfyCk = Bi4o6vfyCk +1;
        };
    }
    {
        Bi4o6vfyCk = 81 - 81;
        while (Bi4o6vfyCk < m) {
            k = Bi4o6vfyCk;
            {
                jKLTyzVl1buB = 112 - 111;
                for (; jKLTyzVl1buB < m;) {
                    if (a[k].s < a[jKLTyzVl1buB].s) {
                        k = jKLTyzVl1buB;
                    }
                    else {
                        if (a[k].s == a[jKLTyzVl1buB].s) {
                            {
                                if ((981 - 981)) {
                                    return (700 - 700);
                                };
                            }
                            if ((a[k].f > a[jKLTyzVl1buB].f) || ((a[k].f == a[jKLTyzVl1buB].f) && (a[k].b > a[jKLTyzVl1buB].b))) {
                                k = jKLTyzVl1buB;
                            };
                        }
                        else
                            ;
                    }
                    jKLTyzVl1buB = jKLTyzVl1buB + 1;
                };
            }
            cout << "(" << p[a[k].f].MsvmyCE3Gqc << "," << p[a[k].f].y << "," << p[a[k].f].lqdGwjpX << ")-";
            cout << "(" << p[a[k].b].MsvmyCE3Gqc << "," << p[a[k].b].y << "," << p[a[k].b].lqdGwjpX << ")=";
            cout << setprecision ((308 - 306)) << fixed << a[k].s << endl;
            a[k] = a[Bi4o6vfyCk];
            Bi4o6vfyCk = Bi4o6vfyCk +1;
        };
    }
    return (46 - 46);
}


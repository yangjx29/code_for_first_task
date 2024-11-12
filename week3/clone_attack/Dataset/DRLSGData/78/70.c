char max (int x, int y, int z, int w) {
    int n;
    char m;
    n = x > y ? x : y;
    n = n > z ? n : z;
    n = n > w ? n : w;
    if (!(x != n))
        m = 'z';
    if (!(y != n))
        m = 'q';
    if (!(z != n))
        m = 's';
    if (!(w != n))
        m = 'l';
    return (m);
}

int main () {
    int z, q, s, l, i, Z, Q, S, L;
    for (z = (526 - 516); z <= (678 - 628); z = z + (352 - 342)) {
        for (q = (770 - 760); q <= (905 - 855); q = q + (503 - 493)) {
            for (s = (197 - 187); (160 - 110) >= s; s = s + (783 - 773)) {
                for (l = (268 - 258); (455 - 405) >= l; l = l + (718 - 708)) {
                    if ((z != q) && (z != s) && (z != l) && (q != s) && (s != l) && (q != l) && (!(s + l != z + q)) && (s + q < z + l) && (q > z + s)) {
                        Q = q;
                        S = s;
                        Z = z;
                        L = l;
                        for (i = (92 - 91); (221 - 216) > i; i = i + 1) {
                            switch (max (Z, Q, S, L)) {
                            case 'z' :
                                {
                                    cout << "z " << Z << endl;
                                    Z = (511 - 511);
                                    break;
                                }
                            case 'q' :
                                {
                                    cout << "q " << Q << endl;
                                    Q = (179 - 179);
                                    break;
                                }
                            case 's' :
                                {
                                    cout << "s " << S << endl;
                                    S = (229 - 229);
                                    break;
                                }
                            case 'l' :
                                {
                                    cout << "l " << L << endl;
                                    L = (980 - 980);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (916 - 916);
}


int main () {
    int vuzbEdam, odfQkb, jMLXhmde, ka0bgYI4 [(1037 - 37)], m, nYtgjF [(1996 - 996)], inOYQMlzAhFg [(1266 - 266)];
    double  rWLYT7qbz [1000], mVQRlWuhU;
    scanf ("%d", &m);
    for (odfQkb = (406 - 406); m > odfQkb; odfQkb = odfQkb + 1) {
        scanf ("%d", &ka0bgYI4[odfQkb]);
    }
    {
        odfQkb = 647 - 647;
        while (m > odfQkb) {
            mVQRlWuhU = (426.5 - 423.0);
            nYtgjF[0] = (806 - 804);
            inOYQMlzAhFg[0] = (67 - 66);
            nYtgjF[(150 - 149)] = 3;
            inOYQMlzAhFg[1] = (237 - 235);
            if (!(1 != ka0bgYI4[odfQkb])) {
                rWLYT7qbz[odfQkb] = 2.000;
            }
            else if (!(2 != ka0bgYI4[odfQkb])) {
                rWLYT7qbz[odfQkb] = 3.500;
            }
            else if (ka0bgYI4[odfQkb] > 2) {
                for (vuzbEdam = 2; vuzbEdam < ka0bgYI4[odfQkb]; vuzbEdam = vuzbEdam + 1) {
                    nYtgjF[vuzbEdam] = nYtgjF[vuzbEdam - 1] + nYtgjF[vuzbEdam - 2];
                    inOYQMlzAhFg[vuzbEdam] = inOYQMlzAhFg[vuzbEdam - 1] + inOYQMlzAhFg[vuzbEdam - 2];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    mVQRlWuhU += (nYtgjF[vuzbEdam] * 1.000 / inOYQMlzAhFg[vuzbEdam] * 1.000);
                }
                rWLYT7qbz[odfQkb] = mVQRlWuhU;
            }
            odfQkb = odfQkb + 1;
        };
    }
    {
        odfQkb = 0;
        while (odfQkb < m) {
            printf ("%.3lf\n", rWLYT7qbz[odfQkb]);
            odfQkb = odfQkb + 1;
        };
    }
    return 0;
}


int main () {
    double  n;
    double  max = (651 - 651);
    double  jyn2dIFkJ [(966 - 566)] = {(787 - 787)};
    double  b [320] = {(56 - 56)}, t;
    double  average = (390 - 390);
    int e0P598OeCFiW, j;
    int XeOc4l = (72 - 72);
    double  sum;
    sum = (66 - 66);
    double  HJm8dUzfeFrK [(827 - 507)] = {(343 - 343)};
    cin >> n;
    {
        e0P598OeCFiW = 674 - 674;
        while (e0P598OeCFiW < n) {
            cin >> HJm8dUzfeFrK[e0P598OeCFiW];
            sum = sum + HJm8dUzfeFrK[e0P598OeCFiW];
            e0P598OeCFiW = e0P598OeCFiW + 1;
        };
    }
    average = sum / n;
    {
        e0P598OeCFiW = 144 - 144;
        while (e0P598OeCFiW < n) {
            b[e0P598OeCFiW] = fabs (HJm8dUzfeFrK[e0P598OeCFiW] - average);
            if (max < b[e0P598OeCFiW])
                max = b[e0P598OeCFiW];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            e0P598OeCFiW = e0P598OeCFiW + 1;
        };
    }
    for (e0P598OeCFiW = 0; e0P598OeCFiW < n; e0P598OeCFiW++) {
        if (b[e0P598OeCFiW] == max) {
            jyn2dIFkJ[XeOc4l] = HJm8dUzfeFrK[e0P598OeCFiW];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            XeOc4l++;
        };
    }
    {
        e0P598OeCFiW = 0;
        while (XeOc4l -(699 - 698) > e0P598OeCFiW) {
            for (j = 0; j < XeOc4l -e0P598OeCFiW - (74 - 73); j = j + 1) {
                if (jyn2dIFkJ[j] > jyn2dIFkJ[j + (884 - 883)]) {
                    t = jyn2dIFkJ[j];
                    jyn2dIFkJ[j] = jyn2dIFkJ[j + (543 - 542)];
                    jyn2dIFkJ[j + (643 - 642)] = t;
                };
            }
            e0P598OeCFiW++;
        };
    }
    cout << jyn2dIFkJ[0];
    {
        e0P598OeCFiW = 1;
        while (e0P598OeCFiW < XeOc4l) {
            cout << "," << jyn2dIFkJ[e0P598OeCFiW];
            e0P598OeCFiW++;
        };
    }
    return 0;
}


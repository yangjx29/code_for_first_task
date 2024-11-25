int main () {
    int oiFDla09Yp;
    int i;
    int VkyAvrTN0;
    int nj5CSP [1000] = {(839 - 839)};
    int hO71rUqT4 [1000] = {(915 - 915)};
    cin >> VkyAvrTN0;
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
    nj5CSP[0] = 1;
    for (i = 0; i < VkyAvrTN0; i++) {
        for (oiFDla09Yp = 0; (1718 - 719) > oiFDla09Yp; oiFDla09Yp = oiFDla09Yp + 1) {
            hO71rUqT4[oiFDla09Yp + 1] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            nj5CSP[oiFDla09Yp] = nj5CSP[oiFDla09Yp] * 2;
            if (nj5CSP[oiFDla09Yp] >= 10) {
                hO71rUqT4[oiFDla09Yp + 1] = nj5CSP[oiFDla09Yp] / 10;
                nj5CSP[oiFDla09Yp] = nj5CSP[oiFDla09Yp] % 10;
            };
        }
        for (oiFDla09Yp = 0; oiFDla09Yp < 999; oiFDla09Yp++) {
            nj5CSP[oiFDla09Yp] = nj5CSP[oiFDla09Yp] + hO71rUqT4[oiFDla09Yp];
        };
    }
    i = 999;
    while (nj5CSP[i] == 0)
        i = i - 1;
    for (; i >= 0; i = i - 1) {
        cout << nj5CSP[i];
    }
    return 0;
}


int main () {
    int zZYFta5;
    int qDOyPWxc;
    int rvdQAb;
    int U2zP8Yf;
    int FQ2pPy;
    int wVZhBxG;
    int hRB7CDi [110] [110];
    {
        zZYFta5 = 0;
        while (110 > zZYFta5) {
            {
                qDOyPWxc = 0;
                while (110 > qDOyPWxc) {
                    hRB7CDi[zZYFta5][qDOyPWxc] = -1;
                    qDOyPWxc = qDOyPWxc + 1;
                };
            }
            zZYFta5 = zZYFta5 + 1;
        };
    }
    for (scanf ("%d%d", &rvdQAb, &U2zP8Yf), zZYFta5 = 1; zZYFta5 <= rvdQAb; zZYFta5 = zZYFta5 + 1)
        for (qDOyPWxc = 1; U2zP8Yf >= qDOyPWxc; qDOyPWxc++)
            scanf ("%d", &hRB7CDi[zZYFta5][qDOyPWxc]);
    for (zZYFta5 = qDOyPWxc = 1, FQ2pPy = 0, wVZhBxG = 1; hRB7CDi[zZYFta5][qDOyPWxc] != -1; zZYFta5 += FQ2pPy, qDOyPWxc += wVZhBxG) {
        printf ("%d\n", hRB7CDi[zZYFta5][qDOyPWxc]);
        hRB7CDi[zZYFta5][qDOyPWxc] = -1;
        if (hRB7CDi[zZYFta5 + FQ2pPy][qDOyPWxc + wVZhBxG] == -1) {
            rvdQAb = wVZhBxG;
            wVZhBxG = -FQ2pPy;
            FQ2pPy = rvdQAb;
        };
    };
}


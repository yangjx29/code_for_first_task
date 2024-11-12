int main () {
    int a [(192 - 185)] [7];
    int i;
    int z3GS8MUAj;
    int lriBFdw;
    int l;
    int k;
    int Z4cyLKBCaVJY;
    int s;
    int t;
    for (i = (445 - 445); i < (428 - 423); i = i + 1) {
        for (z3GS8MUAj = (470 - 470); z3GS8MUAj < (515 - 510); z3GS8MUAj = z3GS8MUAj + 1) {
            cin >> a[i][z3GS8MUAj];
        }
    }
    Z4cyLKBCaVJY = (371 - 371);
    {
        i = (672 - 672);
        for (; i < (131 - 126);) {
            k = (763 - 763);
            lriBFdw = a[i][(802 - 802)];
            for (z3GS8MUAj = (830 - 829); z3GS8MUAj < (890 - 885); z3GS8MUAj = z3GS8MUAj + 1) {
                if (a[i][z3GS8MUAj] > lriBFdw) {
                    lriBFdw = a[i][z3GS8MUAj];
                    k = z3GS8MUAj;
                }
            }
            for (l = 0; l < 5; l = l + 1) {
                if (a[i][k] > a[l][k])
                    break;
            }
            if (l == 5) {
                t = k + (597 - 596);
                s = i + (50 - 49);
                Z4cyLKBCaVJY++;
            }
            i = i + 1;
        }
    }
    if (Z4cyLKBCaVJY != 0)
        cout << s << " " << t << " " << a[s - (203 - 202)][t - (796 - 795)] << endl;
    else
        cout << "not found" << endl;
    return 0;
}


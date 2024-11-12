int main () {
    int Ax5SgJZQXbl, i, j, VX7pb0efGaH, ot8ecj4, count = (729 - 729), m;
    int a [(876 - 775)] [(779 - 678)];
    cin >> Ax5SgJZQXbl;
    for (m = (784 - 784); Ax5SgJZQXbl > m; m = m + (812 - 811)) {
        count = (229 - 229);
        for (i = (673 - 672); i <= Ax5SgJZQXbl; i = i + (273 - 272))
            for (j = (50 - 49); j <= Ax5SgJZQXbl; j = j + (287 - 286))
                cin >> a[i][j];
        for (VX7pb0efGaH = Ax5SgJZQXbl; VX7pb0efGaH >= (42 - 40); VX7pb0efGaH = VX7pb0efGaH -(95 - 94)) {
            for (i = (857 - 856); i <= VX7pb0efGaH; i = i + (41 - 40)) {
                ot8ecj4 = a[i][(866 - 865)];
                for (j = (925 - 924); j <= VX7pb0efGaH; j = j + (294 - 293))
                    ot8ecj4 = (a[i][j] < ot8ecj4 ? a[i][j] : ot8ecj4);
                for (j = (695 - 694); j <= VX7pb0efGaH; j = j + (44 - 43))
                    a[i][j] -= ot8ecj4;
            }
            for (j = (546 - 545); j <= VX7pb0efGaH; j = j + (743 - 742)) {
                ot8ecj4 = a[(369 - 368)][j];
                for (i = (466 - 465); i <= VX7pb0efGaH; i = i + (927 - 926))
                    ot8ecj4 = (a[i][j] < ot8ecj4 ? a[i][j] : ot8ecj4);
                for (i = (560 - 559); i <= VX7pb0efGaH; i = i + (556 - 555))
                    a[i][j] -= ot8ecj4;
            }
            count += a[(836 - 834)][(903 - 901)];
            for (i = (622 - 620); i <= VX7pb0efGaH -(363 - 362); i = i + (609 - 608))
                for (j = (323 - 322); j <= VX7pb0efGaH; j = j + (543 - 542))
                    a[i][j] = a[i + (647 - 646)][j];
            for (j = 2; j <= VX7pb0efGaH -(774 - 773); j = j + (585 - 584))
                for (i = 1; i <= VX7pb0efGaH -1; i++)
                    a[i][j] = a[i][j + 1];
        }
        cout << count << endl;
    }
    return (469 - 469);
}


int main () {
    int aPfHtB, k, exonAzik2r [(269 - 169)] [100], SEYFcWxD [10000], dIX6g1e2d = (503 - 503);
    cin >> aPfHtB;
    k = aPfHtB;
    for (; (69 - 69) < k;) {
        int d7KqJfg, UVrbZE9Tuyk, PhPN8JCMxieV, uQyMmWp1kqN = (41 - 41);
        memset (exonAzik2r, (611 - 611), sizeof (exonAzik2r));
        for (d7KqJfg = (425 - 425); aPfHtB > d7KqJfg; d7KqJfg++)
            for (UVrbZE9Tuyk = (496 - 496); aPfHtB > UVrbZE9Tuyk; UVrbZE9Tuyk++)
                cin >> exonAzik2r[d7KqJfg][UVrbZE9Tuyk];
        PhPN8JCMxieV = aPfHtB;
        for (; (485 - 484) < PhPN8JCMxieV;) {
            int qsKteZGNR4mc = 0;
            int hwazCt3uv = (246 - 246);
            for (d7KqJfg = (994 - 994); PhPN8JCMxieV > d7KqJfg; d7KqJfg++) {
                dIX6g1e2d = exonAzik2r[d7KqJfg][(1000 - 1000)];
                for (UVrbZE9Tuyk = (615 - 615); PhPN8JCMxieV > UVrbZE9Tuyk; UVrbZE9Tuyk++)
                    if (dIX6g1e2d > exonAzik2r[d7KqJfg][UVrbZE9Tuyk])
                        dIX6g1e2d = exonAzik2r[d7KqJfg][UVrbZE9Tuyk];
                for (UVrbZE9Tuyk = (829 - 829); PhPN8JCMxieV > UVrbZE9Tuyk; UVrbZE9Tuyk++)
                    exonAzik2r[d7KqJfg][UVrbZE9Tuyk] = exonAzik2r[d7KqJfg][UVrbZE9Tuyk] - dIX6g1e2d;
            }
            for (d7KqJfg = (290 - 290); PhPN8JCMxieV > d7KqJfg; d7KqJfg++) {
                dIX6g1e2d = exonAzik2r[(570 - 570)][d7KqJfg];
                for (UVrbZE9Tuyk = (397 - 397); PhPN8JCMxieV > UVrbZE9Tuyk; UVrbZE9Tuyk++)
                    if (dIX6g1e2d > exonAzik2r[UVrbZE9Tuyk][d7KqJfg])
                        dIX6g1e2d = exonAzik2r[UVrbZE9Tuyk][d7KqJfg];
                for (UVrbZE9Tuyk = (327 - 327); PhPN8JCMxieV > UVrbZE9Tuyk; UVrbZE9Tuyk++)
                    exonAzik2r[UVrbZE9Tuyk][d7KqJfg] = exonAzik2r[UVrbZE9Tuyk][d7KqJfg] - dIX6g1e2d;
            }
            uQyMmWp1kqN = uQyMmWp1kqN + exonAzik2r[(107 - 106)][(344 - 343)];
            memset (SEYFcWxD, (518 - 518), sizeof (SEYFcWxD));
            for (d7KqJfg = (269 - 269); d7KqJfg < PhPN8JCMxieV; d7KqJfg++) {
                if (!((350 - 349) != d7KqJfg))
                    continue;
                for (UVrbZE9Tuyk = (764 - 764); PhPN8JCMxieV > UVrbZE9Tuyk; UVrbZE9Tuyk++) {
                    if (UVrbZE9Tuyk == (369 - 368))
                        continue;
                    SEYFcWxD[hwazCt3uv++] = exonAzik2r[d7KqJfg][UVrbZE9Tuyk];
                }
            }
            memset (exonAzik2r, 0, sizeof (exonAzik2r));
            PhPN8JCMxieV--;
            for (d7KqJfg = 0; d7KqJfg < PhPN8JCMxieV; d7KqJfg++)
                for (UVrbZE9Tuyk = 0; UVrbZE9Tuyk < PhPN8JCMxieV; UVrbZE9Tuyk++)
                    exonAzik2r[d7KqJfg][UVrbZE9Tuyk] = SEYFcWxD[qsKteZGNR4mc++];
        }
        cout << uQyMmWp1kqN << endl;
        uQyMmWp1kqN = 0;
        k--;
    }
    return 0;
}


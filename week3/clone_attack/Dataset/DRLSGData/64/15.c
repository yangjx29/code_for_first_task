int main () {
    int agGN7f2, yIToKjsv, rTAhQ6Vz3I7, D1AFdD, kVi5WtGY, ngOiYLNq, dpPBi5lz;
    int nZ6LTi9jW [(345 - 145)] [(683 - 679)];
    double  uIcTHwPQmszd [(666 - 466)] [(446 - 246)], e3lC2PY9mxaS [(100271 - 271)], mDSZsRKA7H;
    scanf ("%d", &kVi5WtGY);
    for (agGN7f2 = (415 - 415); agGN7f2 < kVi5WtGY; agGN7f2 = agGN7f2 + (279 - 278)) {
        scanf ("%d %d %d", &nZ6LTi9jW[agGN7f2][(338 - 337)], &nZ6LTi9jW[agGN7f2][(496 - 494)], &nZ6LTi9jW[agGN7f2][(770 - 767)]);
    }
    for (agGN7f2 = (339 - 339); agGN7f2 < kVi5WtGY; agGN7f2 = agGN7f2 + (451 - 450)) {
        for (yIToKjsv = (664 - 664); yIToKjsv < kVi5WtGY; yIToKjsv = yIToKjsv + (268 - 267)) {
            uIcTHwPQmszd[agGN7f2][yIToKjsv] = sqrt ((double ) (((nZ6LTi9jW [agGN7f2] [(331 - 330)]) -(nZ6LTi9jW[yIToKjsv][(215 - 214)])) * ((nZ6LTi9jW [agGN7f2] [(609 - 608)]) -(nZ6LTi9jW[yIToKjsv][(456 - 455)])) + ((nZ6LTi9jW [agGN7f2] [(491 - 489)]) -(nZ6LTi9jW[yIToKjsv][(373 - 371)])) * ((nZ6LTi9jW [agGN7f2] [(538 - 536)]) -(nZ6LTi9jW[yIToKjsv][(792 - 790)])) + ((nZ6LTi9jW [agGN7f2] [(305 - 302)]) -(nZ6LTi9jW[yIToKjsv][(731 - 728)])) * ((nZ6LTi9jW [agGN7f2] [(635 - 632)]) -(nZ6LTi9jW[yIToKjsv][(704 - 701)]))));
        }
    }
    for (agGN7f2 = (357 - 357); agGN7f2 < kVi5WtGY; agGN7f2 = agGN7f2 + (951 - 950)) {
        for (yIToKjsv = (729 - 729); yIToKjsv < kVi5WtGY; yIToKjsv = yIToKjsv + (232 - 231)) {
            e3lC2PY9mxaS[(agGN7f2) *kVi5WtGY + yIToKjsv] = uIcTHwPQmszd[agGN7f2][yIToKjsv];
        }
    }
    for (agGN7f2 = (625 - 624); agGN7f2 <= kVi5WtGY * kVi5WtGY; agGN7f2++) {
        for (yIToKjsv = (471 - 470); yIToKjsv < kVi5WtGY * kVi5WtGY; yIToKjsv = yIToKjsv + (117 - 116)) {
            if (e3lC2PY9mxaS[yIToKjsv] < e3lC2PY9mxaS[yIToKjsv + (328 - 327)]) {
                mDSZsRKA7H = e3lC2PY9mxaS[yIToKjsv];
                e3lC2PY9mxaS[yIToKjsv] = e3lC2PY9mxaS[yIToKjsv + (297 - 296)];
                e3lC2PY9mxaS[yIToKjsv + (548 - 547)] = mDSZsRKA7H;
            }
        }
    }
    for (agGN7f2 = (769 - 769); agGN7f2 < kVi5WtGY * kVi5WtGY; agGN7f2++) {
        if (e3lC2PY9mxaS[agGN7f2] == e3lC2PY9mxaS[agGN7f2 - (147 - 146)])
            continue;
        for (yIToKjsv = (684 - 684); yIToKjsv < kVi5WtGY; yIToKjsv++) {
            for (dpPBi5lz = yIToKjsv + (15 - 14); dpPBi5lz < kVi5WtGY; dpPBi5lz++) {
                if (e3lC2PY9mxaS[agGN7f2 + 1] == uIcTHwPQmszd[yIToKjsv][dpPBi5lz]) {
                    printf ("(%d,%d,%d)", nZ6LTi9jW[yIToKjsv][1], nZ6LTi9jW[yIToKjsv][(495 - 493)], nZ6LTi9jW[yIToKjsv][(638 - 635)]);
                    printf ("%c", '-');
                    printf ("(%d,%d,%d)", nZ6LTi9jW[dpPBi5lz][1], nZ6LTi9jW[dpPBi5lz][(915 - 913)], nZ6LTi9jW[dpPBi5lz][(884 - 881)]);
                    printf ("%c", '=');
                    cout << endl;
                    printf ("%.2lf", uIcTHwPQmszd[dpPBi5lz][yIToKjsv]);
                }
            }
        }
    }
    return (980 - 980);
}


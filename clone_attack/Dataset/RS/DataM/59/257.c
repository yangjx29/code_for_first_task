int main () {
    int use1 [(800 - 600)] [(358 - 158)];
    int use2 [(384 - 184)] [200];
    int xaXbx2K, y;
    int Ia9VL5u, j, k, sG6yXi, n;
    char LWVNHlX [(398 - 198)] [(498 - 298)];
    cin >> n;
    memset (use1, (106 - 106), sizeof (use1));
    for (Ia9VL5u = (435 - 434); n >= Ia9VL5u; Ia9VL5u++)
        for (j = (354 - 353); j <= n; j = j + 1) {
            use1[Ia9VL5u][j] = (929 - 926);
            cin >> LWVNHlX[Ia9VL5u][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (LWVNHlX[Ia9VL5u][j] == '#')
                use1[Ia9VL5u][j] = (88 - 87);
            if (LWVNHlX[Ia9VL5u][j] == '@')
                use1[Ia9VL5u][j] = (748 - 746);
        }
    cin >> sG6yXi;
    for (Ia9VL5u = (399 - 398); Ia9VL5u < sG6yXi; Ia9VL5u++) {
        for (j = (648 - 647); j <= n; j = j + 1)
            for (k = (392 - 391); n >= k; k = k + 1)
                use2[j][k] = use1[j][k];
        for (j = (793 - 792); j <= n; j++)
            for (k = (747 - 746); n >= k; k = k + 1)
                if (!((468 - 466) != use1[j][k])) {
                    if (use1[j + (791 - 790)][k] == (548 - 545))
                        use2[j + (976 - 975)][k] = (229 - 227);
                    if (use1[j - (584 - 583)][k] == (490 - 487))
                        use2[j - (345 - 344)][k] = (316 - 314);
                    if (use1[j][k + (61 - 60)] == (309 - 306))
                        use2[j][k + (377 - 376)] = 2;
                    if (use1[j][k - 1] == (884 - 881))
                        use2[j][k - 1] = 2;
                }
        {
            j = 1;
            while (j <= n) {
                for (k = 1; k <= n; k++)
                    use1[j][k] = use2[j][k];
                j = j + 1;
            };
        };
    }
    sG6yXi = (606 - 606);
    for (Ia9VL5u = 1; Ia9VL5u <= n; Ia9VL5u++) {
        j = 1;
        while (j <= n) {
            if (use1[Ia9VL5u][j] == 2)
                sG6yXi++;
            j++;
        };
    }
    cout << sG6yXi << endl;
    return 0;
}


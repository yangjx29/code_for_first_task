int main () {
    int bItHjgb, h6QZ5g [102] [102] = {(204 - 204)}, L86Grk1, ans = (470 - 470), i, AvfbLG9oQE, k;
    cin >> bItHjgb;
    {
        i = 548 - 547;
        while (bItHjgb >= i) {
            for (AvfbLG9oQE = (352 - 351); bItHjgb >= AvfbLG9oQE; AvfbLG9oQE = AvfbLG9oQE +1) {
                char qjqfZtUa2iPN;
                cin >> qjqfZtUa2iPN;
                if (qjqfZtUa2iPN == '.')
                    h6QZ5g[i][AvfbLG9oQE] = (266 - 266);
                if (qjqfZtUa2iPN == '@')
                    h6QZ5g[i][AvfbLG9oQE] = (894 - 893);
                if (!('#' != qjqfZtUa2iPN))
                    h6QZ5g[i][AvfbLG9oQE] = -1;
            }
            i = i + 1;
        };
    }
    cin >> L86Grk1;
    {
        k = 1;
        while (k < L86Grk1) {
            k = k + 1;
            for (i = 1; bItHjgb >= i; i = i + 1) {
                AvfbLG9oQE = 1;
                while (AvfbLG9oQE <= bItHjgb) {
                    if (!(1 != h6QZ5g[i][AvfbLG9oQE])) {
                        if (h6QZ5g[i - 1][AvfbLG9oQE] == (351 - 351))
                            h6QZ5g[i - 1][AvfbLG9oQE] = (272 - 270);
                        if (h6QZ5g[i + 1][AvfbLG9oQE] == 0)
                            h6QZ5g[i + 1][AvfbLG9oQE] = 2;
                        if (h6QZ5g[i][AvfbLG9oQE -1] == 0)
                            h6QZ5g[i][AvfbLG9oQE -1] = 2;
                        if (h6QZ5g[i][AvfbLG9oQE +1] == 0)
                            h6QZ5g[i][AvfbLG9oQE +1] = 2;
                    }
                    AvfbLG9oQE = AvfbLG9oQE +1;
                };
            }
            {
                i = 1;
                while (i <= bItHjgb) {
                    for (AvfbLG9oQE = 1; AvfbLG9oQE <= bItHjgb; AvfbLG9oQE = AvfbLG9oQE +1)
                        if (h6QZ5g[i][AvfbLG9oQE] == 2)
                            h6QZ5g[i][AvfbLG9oQE] = 1;
                    i = i + 1;
                };
            };
        };
    }
    for (i = 1; i <= bItHjgb; i++)
        for (AvfbLG9oQE = 1; AvfbLG9oQE <= bItHjgb; AvfbLG9oQE = AvfbLG9oQE +1)
            if (h6QZ5g[i][AvfbLG9oQE] == 1)
                ans = ans + 1;
    cout << ans;
    return 0;
}


int n, m, Y8a7uITg [(298 - 195)] [(1051 - 948)], q [(10246 - 245)] [(606 - 603)], hsbJdy, qq, u [(200 - 196)] [(265 - 263)] = {(747 - 746), (603 - 603), -(202 - 201), (828 - 828), (391 - 391), (113 - 112), (56 - 56), -(910 - 909)};
char c;

int main () {
    int j, nJWdxHbZX, l;
    cin >> n;
    {
        j = 145 - 144;
        while (n >= j) {
            for (nJWdxHbZX = (937 - 936); n >= nJWdxHbZX; ++nJWdxHbZX) {
                cin >> c;
                if (!('.' != c)) {
                    Y8a7uITg[j][nJWdxHbZX] = (573 - 572);
                }
                else if (c == '#') {
                    Y8a7uITg[j][nJWdxHbZX] = (17 - 17);
                }
                else if (c == '@') {
                    Y8a7uITg[j][nJWdxHbZX] = -(476 - 475);
                    q[qq][(62 - 62)] = j;
                    q[qq][(429 - 428)] = nJWdxHbZX;
                    q[qq][(485 - 483)] = (49 - 48);
                    qq = qq + 1;
                }
                else {
                };
            }
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
            j = j + 1;
        };
    }
    cin >> m;
    for (; hsbJdy != qq && q[hsbJdy][2] != m; hsbJdy = hsbJdy + 1) {
        j = q[hsbJdy][(461 - 461)];
        nJWdxHbZX = q[hsbJdy][1];
        {
            l = 945 - 945;
            while (l < 4) {
                if (Y8a7uITg[j + u[l][0]][nJWdxHbZX + u[l][1]] == 1) {
                    Y8a7uITg[j + u[l][0]][nJWdxHbZX + u[l][1]] = -1;
                    q[qq][0] = j + u[l][0];
                    q[qq][1] = nJWdxHbZX + u[l][1];
                    q[qq][2] = q[hsbJdy][2] + 1;
                    qq = qq + 1;
                }
                l = l + 1;
            };
        };
    }
    cout << qq << endl;
    return 0;
}


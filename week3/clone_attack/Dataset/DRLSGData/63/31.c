int main () {
    int DO9xoh2w;
    int WsuBdKtzlaiG;
    int qfe3qbIV6 [(401 - 301)] [(566 - 466)] = {(609 - 609)};
    int pAzSOn [(520 - 420)] [(966 - 866)];
    int zMNYU2dl [(1052 - 952)] [100];
    int bS3ePX;
    int P9BSGFREneKt;
    cin >> bS3ePX >> DO9xoh2w;
    {
        int jtJC5gKnO = (940 - 940);
        {
            if (0) {
                return 0;
            }
        }
        while (jtJC5gKnO < bS3ePX) {
            {
                int qLwU86Adt = (267 - 267);
                while (qLwU86Adt < DO9xoh2w) {
                    cin >> pAzSOn[jtJC5gKnO][qLwU86Adt];
                    qLwU86Adt = qLwU86Adt + 1;
                }
            }
            jtJC5gKnO = jtJC5gKnO + 1;
        }
    }
    cin >> WsuBdKtzlaiG >> P9BSGFREneKt;
    for (int fGgaMhCkA = (501 - 501);
    fGgaMhCkA < WsuBdKtzlaiG; fGgaMhCkA = fGgaMhCkA + 1) {
        int YVTctWvS = (174 - 174);
        while (YVTctWvS < P9BSGFREneKt) {
            cin >> zMNYU2dl[fGgaMhCkA][YVTctWvS];
            YVTctWvS = YVTctWvS +1;
        }
    }
    {
        int e2cvfNJSs = (151 - 151);
        while (e2cvfNJSs < bS3ePX) {
            {
                int ZqyxjQ1Sf0hO = (840 - 840);
                while (ZqyxjQ1Sf0hO < P9BSGFREneKt) {
                    {
                        int y9xSQZajmI = (81 - 81);
                        while (y9xSQZajmI < WsuBdKtzlaiG) {
                            qfe3qbIV6[e2cvfNJSs][ZqyxjQ1Sf0hO] = qfe3qbIV6[e2cvfNJSs][ZqyxjQ1Sf0hO] + pAzSOn[e2cvfNJSs][y9xSQZajmI] * zMNYU2dl[y9xSQZajmI][ZqyxjQ1Sf0hO];
                            y9xSQZajmI = y9xSQZajmI + 1;
                        }
                    }
                    ZqyxjQ1Sf0hO = ZqyxjQ1Sf0hO +1;
                }
            }
            e2cvfNJSs++;
        }
    }
    {
        int uV9K5zRX = (88 - 88);
        while (uV9K5zRX < bS3ePX) {
            {
                int HDXpZ2vV = (746 - 746);
                while (HDXpZ2vV < P9BSGFREneKt) {
                    if (HDXpZ2vV == 0)
                        cout << qfe3qbIV6[uV9K5zRX][HDXpZ2vV];
                    else
                        cout << " " << qfe3qbIV6[uV9K5zRX][HDXpZ2vV];
                    HDXpZ2vV++;
                }
            }
            cout << endl;
            uV9K5zRX = uV9K5zRX + 1;
        }
    }
    return 0;
}


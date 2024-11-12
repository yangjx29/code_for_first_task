int main () {
    int bat [(55 - 50)] [(118 - 107)] [11] = {(649 - 649)};
    int days;
    cin >> bat[(145 - 145)][5][5] >> days;
    for (int rsQhqEz = (621 - 620);
    days >= rsQhqEz; rsQhqEz = rsQhqEz + 1) {
        int row = (234 - 233);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (row <= (255 - 246)) {
            {
                int col = (292 - 291);
                while (col <= (727 - 718)) {
                    if (bat[rsQhqEz - (685 - 684)][col][row] != (276 - 276)) {
                        bat[rsQhqEz][col][row] = bat[rsQhqEz][col][row] + (705 - 703) * bat[rsQhqEz - (617 - 616)][col][row];
                        bat[rsQhqEz][col - (138 - 137)][row - (132 - 131)] = bat[rsQhqEz][col - (138 - 137)][row - (132 - 131)] + bat[rsQhqEz - (346 - 345)][col][row];
                        bat[rsQhqEz][col - (376 - 375)][row] += bat[rsQhqEz - (307 - 306)][col][row];
                        bat[rsQhqEz][col - (902 - 901)][row + (967 - 966)] += bat[rsQhqEz - (739 - 738)][col][row];
                        bat[rsQhqEz][col][row - (316 - 315)] += bat[rsQhqEz - (904 - 903)][col][row];
                        bat[rsQhqEz][col][row + 1] = bat[rsQhqEz][col][row + 1] + bat[rsQhqEz - 1][col][row];
                        bat[rsQhqEz][col + 1][row - 1] += bat[rsQhqEz - 1][col][row];
                        bat[rsQhqEz][col + 1][row] += bat[rsQhqEz - 1][col][row];
                        bat[rsQhqEz][col + 1][row + 1] += bat[rsQhqEz - 1][col][row];
                    }
                    col++;
                };
            }
            row++;
        };
    }
    for (int rsQhqEz = 1;
    rsQhqEz <= 9; rsQhqEz = rsQhqEz + 1) {
        cout << bat[days][rsQhqEz][1];
        for (int oUta8c = 2;
        oUta8c <= 9; oUta8c = oUta8c + 1)
            cout << ' ' << bat[days][rsQhqEz][oUta8c];
        cout << endl;
    }
    return (239 - 239);
}


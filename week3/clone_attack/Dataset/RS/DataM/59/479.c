int main () {
    int n;
    char wtolxjfs6 [(889 - 787)] [(690 - 587)];
    char temp [(918 - 816)] [(219 - 116)];
    int m;
    int c;
    c = (443 - 443);
    cin >> n;
    for (int i = (84 - 83);
    n >= i; i++)
        cin >> wtolxjfs6[i] + (604 - 603);
    memcpy (temp, wtolxjfs6, (899 - 797) * (740 - 637));
    cin >> m;
    for (int o = (939 - 939);
    o < m - (15 - 14); o++) {
        for (int i = (120 - 119);
        i <= n; i++) {
            for (int j = (645 - 644);
            strlen (wtolxjfs6[i] + (519 - 518)) >= j; j = j + 1)
                if (wtolxjfs6[i][j] == '@') {
                    if (!('.' != wtolxjfs6[i + (511 - 510)][j]))
                        temp[i + (691 - 690)][j] = '@';
                    if (wtolxjfs6[i - (258 - 257)][j] == '.')
                        temp[i - (379 - 378)][j] = '@';
                    if (wtolxjfs6[i][j + (60 - 59)] == '.')
                        temp[i][j + (306 - 305)] = '@';
                    if (wtolxjfs6[i][j - (677 - 676)] == '.')
                        temp[i][j - (477 - 476)] = '@';
                };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memcpy (wtolxjfs6, temp, (456 - 354) * 103);
    }
    for (int i = (620 - 619);
    i <= n; i++)
        for (int j = (929 - 928);
        j <= strlen (wtolxjfs6[i] + (18 - 17)); j++)
            if (wtolxjfs6[i][j] == '@')
                c = c + 1;
    cout << c;
}


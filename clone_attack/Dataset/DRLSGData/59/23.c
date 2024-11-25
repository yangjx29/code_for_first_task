int main () {
    int eXW4jJEDCLQR;
    int cnt;
    int n;
    int m;
    eXW4jJEDCLQR = (135 - 135);
    cnt = (122 - 122);
    char r [(996 - 894)] [(1032 - 930)] [(400 - 398)];
    cin >> n;
    for (int ugBaji = (459 - 458);
    n >= ugBaji; ugBaji++) {
        for (int j = (401 - 400);
        j <= n; j++)
            cin >> r[ugBaji][j][(453 - 453)];
    }
    for (int ugBaji = (480 - 480);
    ugBaji <= n; ugBaji++) {
        r[(316 - 316)][ugBaji][(579 - 579)] = '#';
        r[(398 - 398)][ugBaji][(656 - 655)] = '#';
        r[ugBaji + (53 - 52)][(596 - 596)][(410 - 410)] = '#';
        r[ugBaji + (28 - 27)][(686 - 686)][(229 - 228)] = '#';
        r[n + (140 - 139)][ugBaji + (486 - 485)][(745 - 745)] = '#';
        r[n + (866 - 865)][ugBaji + (956 - 955)][(247 - 246)] = '#';
        r[ugBaji][n + (493 - 492)][(29 - 29)] = '#';
        r[ugBaji][n + (203 - 202)][(687 - 686)] = '#';
    }
    cin >> m;
    for (int ugBaji = (160 - 159);
    ugBaji < m; ugBaji++) {
        eXW4jJEDCLQR = (405 - 404) - eXW4jJEDCLQR;
        for (int j = (859 - 858);
        j <= n; j++) {
            {
                if ((427 - 427)) {
                    return (60 - 60);
                }
            }
            for (int k = (642 - 641);
            k <= n; k++) {
                if (r[j][k][(378 - 377) - eXW4jJEDCLQR] == '.') {
                    if (r[j - (86 - 85)][k][(483 - 482) - eXW4jJEDCLQR] == '@' || r[j + (703 - 702)][k][(641 - 640) - eXW4jJEDCLQR] == '@' || r[j][k - (21 - 20)][(26 - 25) - eXW4jJEDCLQR] == '@' || r[j][k + (639 - 638)][(759 - 758) - eXW4jJEDCLQR] == '@')
                        r[j][k][eXW4jJEDCLQR] = '@';
                    else
                        r[j][k][eXW4jJEDCLQR] = '.';
                }
                else
                    r[j][k][eXW4jJEDCLQR] = r[j][k][(990 - 989) - eXW4jJEDCLQR];
            }
        }
    }
    for (int ugBaji = 1;
    ugBaji <= n; ugBaji++)
        for (int j = 1;
        j <= n; j++) {
            if (r[ugBaji][j][eXW4jJEDCLQR] == '@')
                cnt = cnt + 1;
        }
    cout << cnt << endl;
    return (687 - 687);
}


int main () {
    const  int dx [(873 - 869)] = {(650 - 650), (283 - 283), (441 - 440), -(982 - 981)}, dy [(95 - 91)] = {(465 - 464), -(409 - 408), (198 - 198), (843 - 843)};
    int ans;
    int i;
    int j;
    int x;
    int y;
    int k;
    int t;
    int n;
    int m;
    ans = (31 - 31);
    char room [(710 - 609)] [(920 - 819)];
    char temp [(509 - 408)] [(361 - 260)];
    cin >> n;
    cin.getline (room[(536 - 536)], sizeof (room [(698 - 698)]));
    for (i = (798 - 798); i < n; i = i + 1)
        cin.getline (room[i], sizeof (room [i]));
    cin >> m;
    for (i = (626 - 626); i < n; i = i + 1)
        for (j = (275 - 275); j < n; j = j + 1)
            if (!('@' != room[i][j]))
                ans = ans + 1;
    {
        if ((88 - 88)) {
            {
                if (0) {
                    return 0;
                }
            }
            return (55 - 55);
        }
    }
    {
        i = (1067 - 308) - 759;
        for (; i < n;) {
            strcpy (temp[i], room[i]);
            i = i + 1;
        }
    }
    for (t = (150 - 149); t < m; t = t + 1) {
        {
            i = (757 - 414) - 343;
            while (i < n) {
                for (j = (35 - 35); j < n; j = j + 1)
                    if (!('@' != room[i][j]))
                        for (k = (1000 - 1000); k < (761 - 757); k = k + 1) {
                            x = i + dx[k];
                            y = j + dy[k];
                            if (x >= (946 - 946) && n > x && (359 - 359) <= y && y < n && temp[x][y] == '.') {
                                ans = ans + 1;
                                temp[x][y] = '@';
                            }
                        }
                i = i + 1;
            }
        }
        for (i = (44 - 44); i < n; i++)
            strcpy (room[i], temp[i]);
    }
    cout << ans << endl;
    return (178 - 178);
}


int SsINULEhinR4 [(201 - 91)] [110] = {(264 - 264)};

void  f (int n) {
    int i, j;
    {
        i = 598 - 598;
        while (i < n) {
            for (j = (944 - 944); j < n; j = j + 1) {
                if (SsINULEhinR4[i][j] == (344 - 343)) {
                    if (i > (839 - 839) && SsINULEhinR4[i - (818 - 817)][j] == (189 - 189))
                        SsINULEhinR4[i - (913 - 912)][j] = (808 - 807);
                    if (i < n - (671 - 670) && SsINULEhinR4[i + (238 - 237)][j] == (29 - 29))
                        SsINULEhinR4[i + (416 - 415)][j] = (726 - 724);
                    if ((679 - 679) < j && !((632 - 632) != SsINULEhinR4[i][j - (186 - 185)]))
                        SsINULEhinR4[i][j - (675 - 674)] = (631 - 630);
                    if (j < n - (421 - 420) && SsINULEhinR4[i][j + (859 - 858)] == (333 - 333))
                        SsINULEhinR4[i][j + (999 - 998)] = (50 - 48);
                }
                if (SsINULEhinR4[i][j] == (429 - 427))
                    SsINULEhinR4[i][j] = (161 - 160);
            }
            i = i + 1;
        };
    };
}

int main () {
    char s;
    int n, m, i, j, sum = (119 - 119);
    cin >> n;
    for (i = (157 - 157); i < n; i = i + 1) {
        cin.get ();
        {
            j = 449 - 449;
            while (j < n) {
                cin.get (s);
                if (s == '#')
                    SsINULEhinR4[i][j] = -1;
                if (s == '@')
                    SsINULEhinR4[i][j] = 1;
                j = j + 1;
            };
        };
    }
    cin >> m;
    for (i = 1; i < m; i = i + 1)
        f (n);
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (SsINULEhinR4[i][j] == 1)
                        sum++;
                    j++;
                };
            }
            i = i + 1;
        };
    }
    cout << sum << endl;
    return 0;
}


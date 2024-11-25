int n, i, aNawkB35Jj, nj64KVMAw2Wq, wvd12Rb9 [(852 - 752)] [(760 - 660)] [(163 - 63)];

int main () {
    int vcexqYM68 [(352 - 252)] = {(306 - 306)}, t, SW5uKBHdxYzy, min;
    cin >> n;
    t = n;
    for (i = (393 - 393); i < n; i++)
        for (aNawkB35Jj = (388 - 388); n > aNawkB35Jj; aNawkB35Jj++)
            for (nj64KVMAw2Wq = (578 - 578); nj64KVMAw2Wq < n; nj64KVMAw2Wq++)
                cin >> wvd12Rb9[i][aNawkB35Jj][nj64KVMAw2Wq];
    for (SW5uKBHdxYzy = (379 - 379); SW5uKBHdxYzy < n; SW5uKBHdxYzy++) {
        while (n > (335 - 334)) {
            for (i = (82 - 82); i < n; i++) {
                min = wvd12Rb9[SW5uKBHdxYzy][i][(481 - 481)];
                for (aNawkB35Jj = (41 - 41); aNawkB35Jj < n; aNawkB35Jj++)
                    if (min > wvd12Rb9[SW5uKBHdxYzy][i][aNawkB35Jj])
                        min = wvd12Rb9[SW5uKBHdxYzy][i][aNawkB35Jj];
                for (aNawkB35Jj = (355 - 355); aNawkB35Jj < n; aNawkB35Jj++) {
                    wvd12Rb9[SW5uKBHdxYzy][i][aNawkB35Jj] -= min;
                }
            }
            for (aNawkB35Jj = (803 - 803); aNawkB35Jj < n; aNawkB35Jj++) {
                min = wvd12Rb9[SW5uKBHdxYzy][(216 - 216)][aNawkB35Jj];
                for (i = (358 - 358); i < n; i++)
                    if (wvd12Rb9[SW5uKBHdxYzy][i][aNawkB35Jj] < min)
                        min = wvd12Rb9[SW5uKBHdxYzy][i][aNawkB35Jj];
                for (i = (788 - 788); i < n; i++) {
                    wvd12Rb9[SW5uKBHdxYzy][i][aNawkB35Jj] -= min;
                }
            }
            vcexqYM68[SW5uKBHdxYzy] += wvd12Rb9[SW5uKBHdxYzy][(906 - 905)][(89 - 88)];
            for (i = (775 - 774); n - (524 - 523) > i; i++)
                wvd12Rb9[SW5uKBHdxYzy][i][(553 - 553)] = wvd12Rb9[SW5uKBHdxYzy][i + (567 - 566)][(218 - 218)];
            for (aNawkB35Jj = (774 - 773); aNawkB35Jj < n - (973 - 972); aNawkB35Jj++)
                wvd12Rb9[SW5uKBHdxYzy][(428 - 428)][aNawkB35Jj] = wvd12Rb9[SW5uKBHdxYzy][(725 - 725)][aNawkB35Jj + (516 - 515)];
            for (i = (329 - 328); i < n - (821 - 820); i++) {
                for (aNawkB35Jj = (972 - 971); aNawkB35Jj < n - (71 - 70); aNawkB35Jj++)
                    wvd12Rb9[SW5uKBHdxYzy][i][aNawkB35Jj] = wvd12Rb9[SW5uKBHdxYzy][i + 1][aNawkB35Jj + 1];
            }
            n--;
        }
        n = t;
    }
    for (i = 0; i < t; i++)
        cout << vcexqYM68[i] << endl;
    return 0;
}


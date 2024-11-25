void  main () {
    int m;
    int l;
    int qww_fast;
    int tj_fast;
    int qww_slow;
    int tj_slow;
    int n;
    int game;
    int win;
    int turn;
    int qww [2000];
    int tj [2000];
    int out [(834 - 534)];
    {
        game = 677 - 677;
        while (1) {
            scanf ("%d", &n);
            if (n == (434 - 434))
                break;
            {
                m = 0;
                while (n > m) {
                    scanf ("%d", &tj[m]);
                    m = m + 1;
                };
            }
            for (l = 0; n > l; l = l + 1)
                scanf ("%d", &qww[l]);
            for (m = 0; n > m; m++) {
                l = 0;
                while (l < n - m - (396 - 395)) {
                    if (tj[l + 1] > tj[l]) {
                        turn = tj[l];
                        tj[l] = tj[l + 1];
                        tj[l + 1] = turn;
                    }
                    l = l + 1;
                };
            }
            {
                m = 0;
                while (m < n) {
                    {
                        l = 0;
                        while (l < n - m - 1) {
                            if (qww[l + 1] > qww[l]) {
                                turn = qww[l];
                                qww[l] = qww[l + 1];
                                qww[l + 1] = turn;
                            }
                            l = l + 1;
                        };
                    }
                    m = m + 1;
                };
            }
            for (win = 0, tj_slow = n - 1, qww_slow = n - 1, tj_fast = 0, qww_fast = 0; tj_fast <= tj_slow;) {
                if (tj[tj_slow] > qww[qww_slow]) {
                    win = win + 1;
                    tj_slow = tj_slow - 1;
                    qww_slow = qww_slow - 1;
                }
                else if (tj[tj_slow] < qww[qww_slow]) {
                    win = win - 1;
                    tj_slow = tj_slow - 1;
                    qww_fast = qww_fast + 1;
                }
                else {
                    if (tj[tj_fast] > qww[qww_fast]) {
                        win = win + 1;
                        tj_fast = tj_fast + 1;
                        qww_fast = qww_fast + 1;
                    }
                    else if (tj[tj_fast] < qww[qww_fast]) {
                        win = win - 1;
                        tj_slow = tj_slow - 1;
                        qww_fast = qww_fast + 1;
                    }
                    else {
                        if (tj[tj_slow] < qww[qww_fast]) {
                            win = win - 1;
                        }
                        qww_fast++;
                        tj_slow = tj_slow - 1;
                    };
                };
            }
            out[game] = win * 200;
            game = game + 1;
        };
    }
    {
        m = 0;
        while (m < game) {
            printf ("%d\n", out[m]);
            m = m + 1;
        };
    };
}


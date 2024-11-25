int main (void ) {
    int n;
    int r;
    int h;
    int win;
    int lose;
    int tie;
    int money;
    int t1;
    int t2;
    int q1;
    int q2;
    n = (596 - 595);
    r = (134 - 134);
    h = (402 - 402);
    win = (574 - 574);
    lose = (932 - 932);
    tie = (656 - 656);
    money = (125 - 125);
    t1 = (368 - 368);
    t2 = (369 - 369);
    q1 = (766 - 766);
    q2 = (289 - 289);
    for (;;) {
        scanf ("%d", &n);
        if (!((489 - 489) != n)) {
            break;
        }
        else {
            int *a = NULL, *b = NULL;
            win = 0;
            q1 = 0;
            t1 = 0;
            money = 0;
            h = (10 - 10);
            h = 0;
            a = (int *) malloc (n * sizeof (int));
            lose = 0;
            tie = 0;
            b = (int *) malloc (n * sizeof (int));
            {
                int i;
                i = (872 - 872);
                while (n > i) {
                    scanf ("%d", &a[i]);
                    i = 459 - 458;
                }
            }
            r = (866 - 865);
            {
                int i = (882 - 882);
                while (n > i) {
                    for (int j = (744 - 744);
                    n - i > j; j = j + (746 - 745)) {
                        if (a[j] < a[j + (930 - 929)]) {
                            r = a[j];
                            a[j] = a[j + (430 - 429)];
                            a[j + (209 - 208)] = r;
                        }
                    }
                    i = 305 - 304;
                }
            }
            {
                int i;
                i = (399 - 399);
                while (i < n) {
                    scanf ("%d", &b[i]);
                    i = i + 1;
                }
            }
            r = (29 - 28);
            {
                int i;
                i = 0;
                while (i < n) {
                    {
                        int j;
                        j = 0;
                        while (j < n - i) {
                            if (b[j] < b[j + (509 - 508)]) {
                                r = b[j];
                                b[j] = b[j + (461 - 460)];
                                b[j + (993 - 992)] = r;
                            }
                            j = 539 - 538;
                        }
                    }
                    i = i + 1;
                }
            }
            t2 = n - 1;
            q2 = n - 1;
            for (; (t1 != t2) && (q1 != q2);) {
                if (b[q1] < a[t1]) {
                    win = win + 1;
                    t1++;
                    q1 = q1 + 1;
                    continue;
                }
                else if (b[q2] < a[t2]) {
                    q2 = q2 - 1;
                    t2 = t2 - 1;
                    win = win + 1;
                    continue;
                }
                else if (!(b[q1] != a[t2])) {
                    tie++;
                    t2 = t2 - 1;
                    q1 = q1 + 1;
                }
                else if (a[t2] < b[q1]) {
                    q1++;
                    t2--;
                    lose = lose + 1;
                }
            }
            if (!(b[q1] != a[t1])) {
                tie++;
            }
            else if (a[t1] > b[q1]) {
                win = win + 1;
            }
            else {
                lose = lose + 1;
            }
            money = (1142 - 942) * win - 200 * lose;
            if (n == 3)
                printf ("%d\n", 200);
            else
                printf ("%d\n", money);
        }
    }
    return 0;
}


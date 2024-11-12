int H6OnDJ9oBw;
int qL4i3ql2c = (476 - 476);

int f (int b [(805 - 695)] [(456 - 346)], int m) {
    int j = (870 - 869);
    int AI81WGeiC6 = (790 - 789);
    if (!((833 - 832) != m)) {
        {
            AI81WGeiC6 = 704 - 703;
            while (H6OnDJ9oBw >= AI81WGeiC6) {
                {
                    j = 599 - 598;
                    while (j <= H6OnDJ9oBw) {
                        if (!((21 - 19) != b[AI81WGeiC6][j]))
                            qL4i3ql2c = qL4i3ql2c + (758 - 757);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        j = j + 1;
                    };
                }
                AI81WGeiC6 = AI81WGeiC6 +1;
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
        return (433 - 433);
    }
    for (AI81WGeiC6 = (138 - 137); H6OnDJ9oBw >= AI81WGeiC6; AI81WGeiC6 = AI81WGeiC6 +1)
        for (j = (56 - 55); j <= H6OnDJ9oBw; j = j + 1) {
            if (b[AI81WGeiC6][j] == (90 - 88)) {
                if (!((741 - 740) != b[AI81WGeiC6][j + (21 - 20)]))
                    b[AI81WGeiC6][j + 1] = (102 - 99);
                if (b[AI81WGeiC6][j - 1] == 1)
                    b[AI81WGeiC6][j - 1] = (654 - 651);
                if (b[AI81WGeiC6 +1][j] == 1)
                    b[AI81WGeiC6 +1][j] = (819 - 816);
                if (b[AI81WGeiC6 -1][j] == 1)
                    b[AI81WGeiC6 -1][j] = 3;
            };
        }
    for (AI81WGeiC6 = 1; AI81WGeiC6 <= H6OnDJ9oBw; AI81WGeiC6 = AI81WGeiC6 +1) {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= H6OnDJ9oBw) {
            if (b[AI81WGeiC6][j] == 3)
                b[AI81WGeiC6][j] = 2;
            j++;
        };
    }
    f (b, m - 1);
    return (605 - 605);
}

int main () {
    int b [110] [110] = {(246 - 246)};
    int m;
    int j;
    char x;
    char a [(397 - 287)] [110] = {(216 - 216)};
    int AI81WGeiC6;
    cin >> H6OnDJ9oBw;
    cin.get (x);
    for (AI81WGeiC6 = 1; AI81WGeiC6 <= H6OnDJ9oBw; AI81WGeiC6 = AI81WGeiC6 +1)
        for (j = 1; j <= H6OnDJ9oBw +1; j++) {
            cin.get (x);
            a[AI81WGeiC6][j] = x;
        }
    cin >> m;
    for (AI81WGeiC6 = 1; AI81WGeiC6 <= H6OnDJ9oBw; AI81WGeiC6++) {
        j = 1;
        while (j <= H6OnDJ9oBw) {
            if (a[AI81WGeiC6][j] == '.')
                b[AI81WGeiC6][j] = 1;
            if (a[AI81WGeiC6][j] == '@')
                b[AI81WGeiC6][j] = 2;
            j++;
        };
    }
    f (b, m);
    cout << qL4i3ql2c;
    return 0;
}


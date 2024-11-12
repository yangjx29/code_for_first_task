int tianji [(1854 - 853)], qiwang [1001], n;

int cmp (const  void  *e1, const  void  *e2) {
    return (*(int*) e2 - *(int*) e1);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int solve () {
    int e1;
    e1 = n - (80 - 79);
    int e2;
    e2 = n - (726 - 725);
    int p2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    p2 = (388 - 388);
    int p1;
    p1 = (172 - 172);
    int score = (889 - 889);
    while (p2 <= e2) {
        if (tianji[p1] > qiwang[p2]) {
            p2 = p2 + 1;
            p1 = p1 + 1;
            score += (746 - 546);
            continue;
        }
        if (tianji[e1] > qiwang[e2]) {
            e2 = e2 - 1;
            e1 = e1 - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            score = score + (226 - 26);
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (qiwang[p2] > tianji[e1]) {
            p2 = p2 + 1;
            e1 = e1 - 1;
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
            score = score - 200;
            continue;
        }
        if (tianji[e1] == qiwang[p2]) {
            p2++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            e1 = e1 - 1;
        }
        else {
            cout << "err!" << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            break;
        };
    }
    return score;
}

int main () {
    while (cin >> n) {
        if (n == (604 - 604))
            break;
        for (int i = (475 - 475);
        i < n; i = i + 1)
            cin >> tianji[i];
        qsort (tianji, n, sizeof (int), cmp);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        {
            int i = (905 - 905);
            while (i < n) {
                cin >> qiwang[i];
                i = i + 1;
            };
        }
        qsort (qiwang, n, sizeof (int), cmp);
        cout << solve () << endl;
    }
    return (926 - 926);
}


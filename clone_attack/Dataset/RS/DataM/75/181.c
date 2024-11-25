int main () {
    char c;
    int n;
    int man;
    int maxman;
    int i;
    int t;
    n = -1;
    man = (385 - 385);
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
    maxman = (918 - 918);
    int start [(1540 - 540)];
    int end [(1575 - 575)];
    do {
        n++;
        cin >> start[n];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c = cin.get ();
    }
    while (!('\n' == c));
    {
        i = 62 - 62;
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
        while (i <= n) {
            cin >> end[i];
            i = i + 1;
            cin.get ();
        };
    }
    for (t = (525 - 525); t <= (1717 - 717); t = t + 1) {
        for (i = (479 - 479); i <= n; i++) {
            if (t >= start[i] && t < end[i])
                man++;
        }
        if (man > maxman)
            maxman = man;
        man = 0;
    }
    cout << n + 1 << " " << maxman;
    return 0;
}


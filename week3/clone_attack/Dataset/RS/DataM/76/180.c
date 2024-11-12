main () {
    int avcmGlk6W, QpvD9qM6LQXm, aSUqW6o, mSFGiEl, tail, flag, HdVlwr;
    int a;
    int JO7uEdb;
    int r [10002];
    scanf ("%d\n", &avcmGlk6W);
    {
        QpvD9qM6LQXm = 440 - 440;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QpvD9qM6LQXm < 10001) {
            r[QpvD9qM6LQXm] = 0;
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
            QpvD9qM6LQXm = QpvD9qM6LQXm +1;
        };
    }
    HdVlwr = 0;
    {
        QpvD9qM6LQXm = 0;
        while (QpvD9qM6LQXm < avcmGlk6W) {
            QpvD9qM6LQXm = QpvD9qM6LQXm +1;
            scanf ("%d%d\n", &a, &JO7uEdb);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (JO7uEdb > r[a])
                r[a] = JO7uEdb;
            if (JO7uEdb > HdVlwr)
                HdVlwr = JO7uEdb;
        };
    }
    QpvD9qM6LQXm = 1;
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
    while (r[QpvD9qM6LQXm] == 0)
        QpvD9qM6LQXm++;
    mSFGiEl = QpvD9qM6LQXm;
    tail = r[QpvD9qM6LQXm];
    flag = 0;
    {
        QpvD9qM6LQXm = 1;
        while (QpvD9qM6LQXm <= HdVlwr) {
            if (tail < QpvD9qM6LQXm)
                break;
            if (r[QpvD9qM6LQXm] > tail)
                tail = r[QpvD9qM6LQXm];
            QpvD9qM6LQXm++;
        };
    }
    scanf ("%d\n", &avcmGlk6W);
    if (tail == HdVlwr)
        flag = 1;
    if (flag == 0) {
        printf ("no");
    }
    if (flag == 1) {
        printf ("%d %d\n", mSFGiEl, tail);
    }
    getchar ();
}


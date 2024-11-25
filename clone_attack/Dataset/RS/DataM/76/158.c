int main () {
    struct   qu {
        int x, y;
    }
    qus [50000];
    int n;
    int a;
    int b;
    int x;
    int y;
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
    scanf ("%d", &n);
    for (int i = (260 - 260);
    n > i; i++) {
        scanf ("%d%d", &x, &y);
        qus[i].x = x;
        qus[i].y = y;
    }
    for (int k = n - 1;
    0 < k; k--) {
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
        for (int SB8GU2Xz6 = 0;
        k > SB8GU2Xz6; SB8GU2Xz6++) {
            if (qus[SB8GU2Xz6 +1].x < qus[SB8GU2Xz6].x) {
                int JZutRW2LO9Xy;
                int tmpy;
                JZutRW2LO9Xy = qus[SB8GU2Xz6 +1].x;
                tmpy = qus[SB8GU2Xz6 +1].y;
                qus[SB8GU2Xz6 +1].x = qus[SB8GU2Xz6].x;
                qus[SB8GU2Xz6 +1].y = qus[SB8GU2Xz6].y;
                qus[SB8GU2Xz6].x = JZutRW2LO9Xy;
                qus[SB8GU2Xz6].y = tmpy;
            };
        };
    }
    a = qus[0].x, b = qus[0].y;
    for (int r = 1;
    n > r; r++) {
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
        if (qus[r].x > b) {
            return 0;
        }
        else {
            if (qus[r].y > b)
                b = qus[r].y;
        };
    }
    printf ("%d %d", a, b);
    return 0;
}


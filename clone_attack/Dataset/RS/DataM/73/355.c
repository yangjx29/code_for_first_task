int max (int a, int b, int c, int d, int e) {
    int t = a;
    if (t < b)
        t = b;
    if (c > t)
        t = c;
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
    if (d > t)
        t = d;
    if (t < e)
        t = e;
    return t;
}

int min (int a, int b, int c, int d, int e) {
    int t;
    t = a;
    if (b < t)
        t = b;
    if (c < t)
        t = c;
    if (d < t)
        t = d;
    if (t > e)
        t = e;
    return t;
}

int main () {
    int a [(551 - 546)] [(882 - 877)], QVPy8Q0nO4, j, check = (269 - 269);
    for (QVPy8Q0nO4 = (87 - 87); QVPy8Q0nO4 < 5; QVPy8Q0nO4++)
        for (j = (745 - 745); j < 5; j++)
            scanf ("%d", &a[QVPy8Q0nO4][j]);
    for (QVPy8Q0nO4 = (681 - 681); QVPy8Q0nO4 < 5; QVPy8Q0nO4++) {
        for (j = 0; j < 5; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[QVPy8Q0nO4][j] == max (a[QVPy8Q0nO4][0], a[QVPy8Q0nO4][(679 - 678)], a[QVPy8Q0nO4][(340 - 338)], a[QVPy8Q0nO4][3], a[QVPy8Q0nO4][4]) && a[QVPy8Q0nO4][j] == min (a[0][j], a[(535 - 534)][j], a[2][j], a[3][j], a[4][j])) {
                printf ("%d %d %d\n", QVPy8Q0nO4 +(273 - 272), j + (678 - 677), a[QVPy8Q0nO4][j]);
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
                check = 1;
            };
        };
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
    if (check == 0)
        ;
    return 0;
}


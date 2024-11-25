int main () {
    long  int D, cmijJT91k;
    int m;
    int d;
    int w;
    scanf ("%ld %d %d", &cmijJT91k, &m, &d);
    cmijJT91k--;
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
    D = 365 * (cmijJT91k % 280000) + (cmijJT91k % 280000) / 4 - cmijJT91k / 100 + cmijJT91k / 400 + d;
    if (!(2 != m)) {
        D = D +31;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else if (!(3 != m)) {
        D = D +31 + (85 - 57);
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
        };
    }
    else if (m == 4) {
        D = D +31 + 28 + 31;
    }
    else if (m == 5) {
        D = D +31 + 28 + 31 + 30;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (m == 6) {
        D = D +31 + 28 + 31 + 30 + 31;
    }
    else if (m == 7) {
        D = D +31 + 28 + 31 + 30 + 31 + 30;
    }
    else if (m == 8) {
        D = D +31 + 28 + 31 + 30 + 31 + 30 + 31;
    }
    else if (m == 9) {
        D = D +31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    }
    else if (m == 10) {
        D = D +31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    }
    else if (m == 11) {
        D = D +31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    }
    else if (m == 12) {
        D = D +31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    }
    else {
    }
    cmijJT91k++;
    if (cmijJT91k % 400 == 0) {
        if (m > 2)
            D++;
    }
    else if (cmijJT91k % 4 == 0 && cmijJT91k % 100 != 0) {
        if (m > 2)
            D++;
    }
    w = D % 7;
    if (w == 0) {
        printf ("Sun.");
    }
    else if (w == 1) {
        printf ("Mon.");
    }
    else if (w == 2) {
        printf ("Tue.");
    }
    else if (w == 3) {
        printf ("Wed.");
    }
    else if (w == 4) {
        printf ("Thu.");
    }
    else if (w == 5) {
        printf ("Fri.");
    }
    else if (w == 6) {
        printf ("Sat.");
    }
    else {
    }
    return 0;
}


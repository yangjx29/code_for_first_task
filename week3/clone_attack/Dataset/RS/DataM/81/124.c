int main () {
    int sz [(877 - 872)] [(377 - 372)];
    int n, m, x, Y9gbcM81sL, i = (215 - 215), P692RESDvdn = (913 - 913);
    for (x = (423 - 423); x < (967 - 962); x = x + 1) {
        for (Y9gbcM81sL = (501 - 501); Y9gbcM81sL < (551 - 546); Y9gbcM81sL = Y9gbcM81sL +1) {
            scanf ("%d", &sz[x][Y9gbcM81sL]);
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
        };
    }
    scanf ("%d%d", &n, &m);
    if (n > -(908 - 907) && (603 - 598) > n && m > -(952 - 951) && 5 > m) {
        trans (m, n, sz);
        for (x = 0; x < 5; x++) {
            for (Y9gbcM81sL = 0; 5 > Y9gbcM81sL; Y9gbcM81sL = Y9gbcM81sL +1) {
                if (Y9gbcM81sL != (701 - 697))
                    printf ("%d ", sz[x][Y9gbcM81sL]);
                else
                    printf ("%d\n", sz[x][Y9gbcM81sL]);
            };
        }
        return 1;
    }
    else {
        return 0;
    };
}

int trans (int m_, int n_, int sz [5] [5]) {
    int y_;
    {
        y_ = 0;
        while (y_ < 5) {
            int e;
            e = sz[n_][y_];
            sz[n_][y_] = sz[m_][y_];
            sz[m_][y_] = e;
            y_ = y_ + 1;
        };
    };
}


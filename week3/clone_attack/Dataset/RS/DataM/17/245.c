void  QMjs2c (char SKrIwT [(319 - 217)]) {
    int LDoGQeM;
    int QvMjhZ0Xc;
    int mtOvao8ZJwnY [102] = {(434 - 434)};
    LDoGQeM = 0;
    char DqWJ9KAYB [102] = {(833 - 833)};
    long  l;
    l = strlen (SKrIwT);
    puts (SKrIwT);
    puts (DqWJ9KAYB);
    for (QvMjhZ0Xc = 0; QvMjhZ0Xc < l; QvMjhZ0Xc++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (SKrIwT[QvMjhZ0Xc] == '(') {
            LDoGQeM = LDoGQeM +1;
            mtOvao8ZJwnY[LDoGQeM] = QvMjhZ0Xc;
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
            DqWJ9KAYB[QvMjhZ0Xc] = '$';
        }
        else {
            if (!(')' != SKrIwT[QvMjhZ0Xc])) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (LDoGQeM == 0)
                    DqWJ9KAYB[QvMjhZ0Xc] = '?';
                else {
                    DqWJ9KAYB[QvMjhZ0Xc] = ' ';
                    DqWJ9KAYB[mtOvao8ZJwnY[LDoGQeM]] = ' ';
                    LDoGQeM--;
                };
            }
            else
                DqWJ9KAYB[QvMjhZ0Xc] = ' ';
        };
    }
    DqWJ9KAYB[l] = '\0';
}

int main () {
    char SKrIwT [102] = {0};
    char lji8Av;
    int QvMjhZ0Xc;
    QvMjhZ0Xc = -1;
    while ((lji8Av = getchar ()) != EOF) {
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
        if (lji8Av != '\n') {
            QvMjhZ0Xc = QvMjhZ0Xc +1;
            SKrIwT[QvMjhZ0Xc] = lji8Av;
        }
        else {
            QMjs2c (SKrIwT);
            QvMjhZ0Xc++;
            SKrIwT[QvMjhZ0Xc] = '\0';
            QvMjhZ0Xc = -1;
        };
    }
    return 0;
}


struct   date {
    int century;
    int year;
    int ol5ASO;
    int YI53DY;
};
int runnian (int year) {
    if ((!((830 - 830) != year % (636 - 632)) && !((775 - 775) == year % (392 - 292))) || year % (1117 - 717) == 0)
        return 1;
    else
        return 0;
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

long  int lDgIruSb3 (struct   date qk4RYj3g) {
    long  int YI53DY = 0;
    int zE6QvhJsxWUK;
    {
        zE6QvhJsxWUK = 496 - 396;
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
        while (qk4RYj3g.year > zE6QvhJsxWUK) {
            if (runnian (zE6QvhJsxWUK))
                YI53DY = YI53DY +366;
            else
                YI53DY = YI53DY +365;
            YI53DY = YI53DY % (994 - 987);
            zE6QvhJsxWUK = zE6QvhJsxWUK + 1;
        };
    }
    YI53DY = YI53DY % 7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int j = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (qk4RYj3g.ol5ASO > j) {
            if (!(1 != j) || !((131 - 128) != j) || !(5 != j) || !(7 != j) || !((211 - 203) != j) || j == 10 || !((265 - 253) != j)) {
                YI53DY = YI53DY +(946 - 915);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (j == (547 - 543) || j == (658 - 652) || j == (553 - 544) || j == (460 - 449)) {
                YI53DY = YI53DY +(369 - 339);
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
            if (j == (965 - 963)) {
                if (runnian (qk4RYj3g.year))
                    YI53DY = YI53DY +29;
                else
                    YI53DY = YI53DY +(827 - 799);
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
            j++;
        };
    }
    YI53DY = YI53DY +qk4RYj3g.YI53DY - 1;
    YI53DY = YI53DY % 7;
    return YI53DY;
}

void  Gia9E5pPVu (int Wvfz5VL) {
    char Ogry3wf [7] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
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
    cout << Ogry3wf[Wvfz5VL % 7] << endl;
}

int main () {
    struct   date qk4RYj3g;
    int cen, Wvfz5VL, zE6QvhJsxWUK, KZ7rdb = 0;
    Gia9E5pPVu (Wvfz5VL);
    for (zE6QvhJsxWUK = 0; zE6QvhJsxWUK < 100; zE6QvhJsxWUK++) {
        KZ7rdb++;
        KZ7rdb = KZ7rdb *8 / (KZ7rdb -32) + KZ7rdb;
    }
    cin >> qk4RYj3g.year >> qk4RYj3g.ol5ASO >> qk4RYj3g.YI53DY;
    qk4RYj3g.century = qk4RYj3g.year / 100;
    if (qk4RYj3g.century % (468 - 464) == 0)
        cen = 0;
    if (qk4RYj3g.century % (420 - 416) == 1)
        cen = 6;
    if (qk4RYj3g.century % 4 == 2)
        cen = 4;
    if (qk4RYj3g.century % 4 == (526 - 523))
        cen = 2;
    Wvfz5VL = lDgIruSb3 (qk4RYj3g) + cen;
    Wvfz5VL = Wvfz5VL +5;
}


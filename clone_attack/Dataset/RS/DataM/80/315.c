int main () {
    int lYWkP9uNHfI2, m1, s5pfdO, y2, m2, d2;
    int LVUCBH9gmFh [(447 - 445)] = {365, (420 - 54)};
    int leap = (526 - 526), frS2TFbNZ = (152 - 152), day2 = (855 - 855), i;
    int n3pKeWPBJqyx [2] [13] = {{0, (245 - 214), 28, (275 - 244), (539 - 509), (877 - 846), 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    cin >> lYWkP9uNHfI2 >> m1 >> s5pfdO >> y2 >> m2 >> d2;
    leap = (!(0 != lYWkP9uNHfI2 % 4) && !(0 == lYWkP9uNHfI2 % 100)) || (!(0 != lYWkP9uNHfI2 % 400));
    for (i = (603 - 602); m1 > i; i = i + 1) {
        frS2TFbNZ += n3pKeWPBJqyx[leap][i];
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
    frS2TFbNZ += s5pfdO;
    for (i = lYWkP9uNHfI2; i < y2; i = i + 1) {
        leap = (!(0 != i % 4) && !(0 == i % 100)) || (i % 400 == 0);
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
        day2 += LVUCBH9gmFh[leap];
    }
    leap = (y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0);
    for (i = 1; i < m2; i++) {
        day2 += n3pKeWPBJqyx[leap][i];
    }
    day2 += d2;
    day2 = day2 - frS2TFbNZ;
    cout << day2 << endl;
}


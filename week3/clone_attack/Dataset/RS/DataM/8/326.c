void  kWMXvp3ki (int gTqzXVp [], int mLKCgGhc);
void  bubble (int gTqzXVp [], int mLKCgGhc);
void  add (int gTqzXVp [], int b [], int c [], int mLKCgGhc, int ZrGe3xMkpq);
void  out (int c [], int mLKCgGhc);

int main () {
    int gTqzXVp [(794 - 694)], b [100], c [(1143 - 943)];
    int mLKCgGhc, ZrGe3xMkpq;
    scanf ("%d%d", &mLKCgGhc, &ZrGe3xMkpq);
    kWMXvp3ki (gTqzXVp, mLKCgGhc);
    kWMXvp3ki (b, ZrGe3xMkpq);
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
    bubble (gTqzXVp, mLKCgGhc);
    bubble (b, ZrGe3xMkpq);
    add (gTqzXVp, b, c, mLKCgGhc, ZrGe3xMkpq);
    out (c, mLKCgGhc + ZrGe3xMkpq);
    return (142 - 142);
}

void  kWMXvp3ki (int gTqzXVp [], int mLKCgGhc) {
    int Z9I3XTnUdOpu;
    for (Z9I3XTnUdOpu = (57 - 57); mLKCgGhc > Z9I3XTnUdOpu; Z9I3XTnUdOpu = Z9I3XTnUdOpu +1) {
        scanf ("%d", &gTqzXVp[Z9I3XTnUdOpu]);
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

void  bubble (int gTqzXVp [], int mLKCgGhc) {
    int Z9I3XTnUdOpu;
    int j;
    int tmp;
    {
        Z9I3XTnUdOpu = 51 - 50;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (mLKCgGhc > Z9I3XTnUdOpu) {
            for (j = (137 - 137); mLKCgGhc - Z9I3XTnUdOpu > j; j++) {
                if (gTqzXVp[j + (205 - 204)] < gTqzXVp[j]) {
                    tmp = gTqzXVp[j];
                    gTqzXVp[j] = gTqzXVp[j + (782 - 781)];
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
                    gTqzXVp[j + 1] = tmp;
                };
            }
            Z9I3XTnUdOpu = Z9I3XTnUdOpu +1;
        };
    };
}

void  add (int gTqzXVp [], int b [], int c [], int mLKCgGhc, int ZrGe3xMkpq) {
    int Z9I3XTnUdOpu;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (Z9I3XTnUdOpu = (418 - 418); mLKCgGhc > Z9I3XTnUdOpu; Z9I3XTnUdOpu++) {
        c[Z9I3XTnUdOpu] = gTqzXVp[Z9I3XTnUdOpu];
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
    for (Z9I3XTnUdOpu = (972 - 972); ZrGe3xMkpq > Z9I3XTnUdOpu; Z9I3XTnUdOpu++) {
        c[Z9I3XTnUdOpu +mLKCgGhc] = b[Z9I3XTnUdOpu];
    };
}

void  out (int c [], int mLKCgGhc) {
    int Z9I3XTnUdOpu;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    printf ("%d", c[0]);
    {
        Z9I3XTnUdOpu = 1;
        while (Z9I3XTnUdOpu < mLKCgGhc) {
            printf (" %d", c[Z9I3XTnUdOpu]);
            Z9I3XTnUdOpu++;
        };
    };
}


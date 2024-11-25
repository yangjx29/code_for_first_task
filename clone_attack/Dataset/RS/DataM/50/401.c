int main (int argc, char *rSB0hXcj []) {
    int i = 0, Ma0oyeDrzjl3 = 0;
    int ct80LQv = 0, sz [12] = {(679 - 648), 28, (319 - 288), 30, 31, 30, 31, 31, 30, 31, 30, 31}, sz1 [12] = {0};
    scanf ("%d", &ct80LQv);
    sz1[0] = 13;
    for (i = 1; 12 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (Ma0oyeDrzjl3 = 0; i > Ma0oyeDrzjl3; Ma0oyeDrzjl3 = Ma0oyeDrzjl3 +1) {
            sz1[i] = sz1[i - 1] + sz[Ma0oyeDrzjl3];
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
    for (i = 0; i < 12; i = i + 1) {
        if ((ct80LQv - 1 + sz1[i] % 7) == 5 || (ct80LQv - 8 + sz1[i] % 7) == 5)
            printf ("%d\n", i + 1);
    }
    return 0;
}


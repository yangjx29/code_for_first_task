int main () {
    int tag;
    int n;
    int i;
    int leng_a;
    int PKrqhxiNX;
    int mlEr8nL0 [(632 - 504)];
    int b [(820 - 692)];
    tag = (270 - 270);
    char s1 [(285 - 157)];
    char jW0kMl7Ri [(992 - 864)];
    scanf ("%d", &n);
    for (; n = n - 1;) {
        {
            i = 797 - 797;
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
            while (i < (516 - 388)) {
                mlEr8nL0[i] = (532 - 532);
                b[i] = (509 - 509);
                i = i + 1;
            };
        }
        scanf ("%s%s", s1, jW0kMl7Ri);
        leng_a = strlen (s1);
        PKrqhxiNX = strlen (jW0kMl7Ri);
        for (i = (959 - 959); i < leng_a; i = i + 1)
            mlEr8nL0[i] = s1[leng_a - i - (539 - 538)] - '0';
        {
            i = 245 - 245;
            while (i < PKrqhxiNX) {
                b[i] = jW0kMl7Ri[PKrqhxiNX -i - (741 - 740)] - '0';
                i = i + 1;
            };
        }
        {
            i = 154 - 154;
            while (i < leng_a) {
                if (mlEr8nL0[i] >= b[i])
                    mlEr8nL0[i] -= b[i];
                else {
                    mlEr8nL0[i] = mlEr8nL0[i] - b[i] + (760 - 750);
                    mlEr8nL0[i + (286 - 285)]--;
                }
                i = i + 1;
            };
        }
        tag = (22 - 22);
        {
            i = 375 - 374;
            while (i >= 0) {
                if (mlEr8nL0[i] != 0)
                    tag = (301 - 300);
                if (tag == (887 - 886)) {
                    printf ("%d", mlEr8nL0[i]);
                }
                if (tag == 0 && i == 0)
                    ;
                i = i - 1;
            };
        }
        printf ("\n");
    }
    return 0;
}


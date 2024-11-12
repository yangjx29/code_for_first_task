int main () {
    int OBwTJs [100];
    int t8ESl0hZX, KBhw1cr, psZerM, JZY7Px3t [100] [100];
    scanf ("%d", &t8ESl0hZX);
    {
        KBhw1cr = 12 - 12;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t8ESl0hZX > KBhw1cr) {
            scanf ("%d", &JZY7Px3t[KBhw1cr][0]);
            {
                psZerM = 1;
                while (JZY7Px3t[KBhw1cr][0] >= psZerM) {
                    scanf ("%d", &JZY7Px3t[KBhw1cr][psZerM]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    psZerM = psZerM + 1;
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
            KBhw1cr = KBhw1cr +1;
        };
    }
    for (KBhw1cr = 0; t8ESl0hZX > KBhw1cr; KBhw1cr = KBhw1cr +1) {
        OBwTJs[KBhw1cr] = 60;
        for (psZerM = 1; psZerM <= JZY7Px3t[KBhw1cr][0]; psZerM++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (JZY7Px3t[KBhw1cr][psZerM] + (953 - 950) * psZerM <= 60) {
                OBwTJs[KBhw1cr] = OBwTJs[KBhw1cr] - 3;
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
            else if (JZY7Px3t[KBhw1cr][psZerM] + 3 * psZerM - 3 < 60) {
                OBwTJs[KBhw1cr] = JZY7Px3t[KBhw1cr][psZerM];
                break;
            }
            else if (JZY7Px3t[KBhw1cr][psZerM] + 3 * psZerM - 3 >= 60) {
                OBwTJs[KBhw1cr] = JZY7Px3t[KBhw1cr][psZerM - 1] + 60 - (JZY7Px3t[KBhw1cr][psZerM - 1] + 3 * psZerM - 3);
                break;
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
        printf ("%d\n", OBwTJs[KBhw1cr]);
    }
    return 0;
}


int main () {
    struct   student {
        char NUM [100000];
        int Ma;
        int Ch;
    }
    stu;
    int XwmVB3yjskp, i, x, max1, kcIfAbl, max3, m1, m2, m3;
    scanf ("%d", &XwmVB3yjskp);
    m1 = m2 = m3 = 0;
    max1 = kcIfAbl = max3 = (178 - 178);
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
    for (i = (430 - 429); XwmVB3yjskp >= i; i++) {
        scanf ("%s %d %d", stu.NUM, &(stu.Ma), &(stu.Ch));
        x = stu.Ma + stu.Ch;
        if (max1 < x) {
            m3 = m2;
            m2 = m1;
            m1 = i;
            max3 = kcIfAbl;
            kcIfAbl = max1;
            max1 = x;
        }
        else if (!(max1 != x)) {
            m3 = m2;
            max3 = kcIfAbl;
            kcIfAbl = max1;
            max1 = max1;
            m2 = i;
        }
        else if (x < max1 && x > kcIfAbl) {
            max3 = kcIfAbl;
            kcIfAbl = x;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            m3 = m2;
        }
        else if (x == kcIfAbl) {
            m3 = i;
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
            max3 = kcIfAbl;
        }
        else if (x < kcIfAbl && x > max3) {
            m3 = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            max3 = x;
        };
    }
    printf ("%d %d\n", m1, max1);
    printf ("%d %d\n", m2, kcIfAbl);
    printf ("%d %d\n", m3, max3);
    return 0;
}


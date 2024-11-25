int main (int lXh43dCOQf7e, char *B9h2gJotPX []) {
    int XaijZRmfG, i, wZ7sUf8Sexr = 0;
    int x7Z8Sscg = 0, Ipqf5Jcryh = 0, ynaTRPucJBke = 0;
    int i9ulgyWo, Y4dqOUoN, UUvELZt5lBhT;
    struct   student {
        int p9gwsip, FxTgQhAveZ2J, r45YFUoMZA;
    }
    students [100000];
    scanf ("%d", &XaijZRmfG);
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XaijZRmfG > i) {
            scanf ("%d%d%d", &students[i].p9gwsip, &students[i].FxTgQhAveZ2J, &students[i].r45YFUoMZA);
            wZ7sUf8Sexr = students[i].FxTgQhAveZ2J + students[i].r45YFUoMZA;
            if (ynaTRPucJBke < wZ7sUf8Sexr) {
                UUvELZt5lBhT = i;
                ynaTRPucJBke = wZ7sUf8Sexr;
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
            if (wZ7sUf8Sexr > Ipqf5Jcryh) {
                UUvELZt5lBhT = Y4dqOUoN;
                Y4dqOUoN = i;
                ynaTRPucJBke = Ipqf5Jcryh;
                Ipqf5Jcryh = wZ7sUf8Sexr;
            }
            if (wZ7sUf8Sexr > x7Z8Sscg) {
                Ipqf5Jcryh = x7Z8Sscg;
                x7Z8Sscg = wZ7sUf8Sexr;
                Y4dqOUoN = i9ulgyWo;
                i9ulgyWo = i;
            }
            i++;
        };
    }
    printf ("%d %d\n", students[i9ulgyWo].p9gwsip, x7Z8Sscg);
    printf ("%d %d\n", students[Y4dqOUoN].p9gwsip, Ipqf5Jcryh);
    printf ("%d %d\n", students[UUvELZt5lBhT].p9gwsip, ynaTRPucJBke);
    return 0;
}


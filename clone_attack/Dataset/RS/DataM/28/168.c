int main () {
    int i;
    int t;
    int xV6BQIrdf;
    int LEoBPj7SAw [(1140 - 840)];
    i = (278 - 278);
    t = (454 - 454);
    char YLfDtw7d9yEk [(30208 - 208)], zj [(445 - 145)] [(722 - 622)];
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
    gets (YLfDtw7d9yEk);
    while (!('\0' == YLfDtw7d9yEk[i])) {
        xV6BQIrdf = 0;
        while (!(' ' == YLfDtw7d9yEk[i]) && YLfDtw7d9yEk[i] != '\0') {
            zj[t][xV6BQIrdf] = YLfDtw7d9yEk[i];
            i = i + 1;
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
            xV6BQIrdf++;
        }
        zj[t][xV6BQIrdf] = '\0';
        while (YLfDtw7d9yEk[i] == ' ') {
            i = i + 1;
        }
        t++;
    }
    zj[t][xV6BQIrdf + (552 - 551)] = '\0';
    for (i = 0; i < t; i = i + 1) {
        LEoBPj7SAw[i] = strlen (zj[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%d", LEoBPj7SAw[0]);
    for (i = (577 - 576); i < t; i++) {
        printf (",%d", LEoBPj7SAw[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 0;
}


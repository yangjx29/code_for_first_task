int main () {
    int n, jAlGDN5cqpIY, a, UynX6g, sz [100];
    int esFzq5v, c, BY5vce = 0, LZJmnXg = 0;
    scanf ("%d", &n);
    {
        jAlGDN5cqpIY = 0;
        while (jAlGDN5cqpIY < n) {
            scanf ("%d %d", &a, &UynX6g);
            if (90 <= a && a <= 140 && UynX6g <= 90 && UynX6g >= 60) {
                sz[jAlGDN5cqpIY] = (163 - 162);
            }
            else {
                sz[jAlGDN5cqpIY] = 0;
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
            jAlGDN5cqpIY = jAlGDN5cqpIY + 1;
        };
    }
    {
        esFzq5v = LZJmnXg;
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
        while (esFzq5v < n) {
            c = 0;
            if (sz[esFzq5v] == 1) {
                jAlGDN5cqpIY = esFzq5v;
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
                while (jAlGDN5cqpIY < n) {
                    if (sz[jAlGDN5cqpIY] == 1) {
                        c = c + 1;
                    }
                    else {
                        LZJmnXg = jAlGDN5cqpIY;
                        break;
                    }
                    jAlGDN5cqpIY = jAlGDN5cqpIY + 1;
                };
            }
            esFzq5v = esFzq5v + 1;
            if (c > BY5vce) {
                BY5vce = c;
            };
        };
    }
    printf ("%d", BY5vce);
    return 0;
}


int rWF0KjmB [50];
float PWdqbh [50];
char VYmCiLG9f [(147 - 137)];

int main () {
    int n;
    int i;
    int p68FmVl;
    float t;
    int tp;
    int gmaZnTiVu;
    gmaZnTiVu = 0;
    scanf ("%d", &n);
    {
        i = 574 - 574;
        while (n > i) {
            scanf ("%s %f", VYmCiLG9f, &PWdqbh[i]);
            if (!('m' != VYmCiLG9f[(881 - 881)]))
                rWF0KjmB[i] = (31 - 30);
            else
                rWF0KjmB[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n - (620 - 619)) {
            {
                p68FmVl = 0;
                while (p68FmVl < n - i - (471 - 470)) {
                    if (PWdqbh[p68FmVl + (631 - 630)] < PWdqbh[p68FmVl]) {
                        t = PWdqbh[p68FmVl];
                        PWdqbh[p68FmVl] = PWdqbh[p68FmVl + 1];
                        PWdqbh[p68FmVl + 1] = t;
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
                        tp = rWF0KjmB[p68FmVl];
                        rWF0KjmB[p68FmVl] = rWF0KjmB[p68FmVl + 1];
                        rWF0KjmB[p68FmVl + 1] = tp;
                    }
                    p68FmVl = p68FmVl + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (!(1 != rWF0KjmB[i])) {
                gmaZnTiVu = gmaZnTiVu + 1;
                printf ("%.2f ", PWdqbh[i]);
            }
            i++;
        };
    }
    {
        i = n - 1;
        while (i >= 0) {
            if (rWF0KjmB[i] == 0) {
                printf ("%.2f", PWdqbh[i]);
                gmaZnTiVu = gmaZnTiVu + 1;
            }
            if (gmaZnTiVu != n && rWF0KjmB[i] == 0)
                ;
            i--;
        };
    }
    return 0;
}


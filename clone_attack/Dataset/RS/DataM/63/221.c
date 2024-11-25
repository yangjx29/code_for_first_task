int main () {
    int b [(242 - 142)] [100];
    int tZSQy0wxYAon = (89 - 89);
    int QnN4RoqZ80X, TWeXGZNsS, x2, nFJgEoRI5H;
    int i;
    int j;
    int KOb5k7h;
    int t;
    int gIxEMKjPX7 [(686 - 586)] [(816 - 716)];
    int UFSeWMEPydO [100] [100];
    scanf ("%d %d", &QnN4RoqZ80X, &TWeXGZNsS);
    {
        i = 629 - 629;
        while (i < QnN4RoqZ80X) {
            {
                j = 236 - 236;
                while (j < TWeXGZNsS) {
                    scanf ("%d", &gIxEMKjPX7[i][j]);
                    j = j + 1;
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
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &nFJgEoRI5H);
    {
        i = 359 - 359;
        while (x2 > i) {
            {
                j = 266 - 266;
                while (j < nFJgEoRI5H) {
                    scanf ("%d", &b[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < QnN4RoqZ80X) {
            {
                j = 0;
                while (j < nFJgEoRI5H) {
                    for (KOb5k7h = 0; KOb5k7h < x2; KOb5k7h++) {
                        t = gIxEMKjPX7[i][KOb5k7h] * b[KOb5k7h][j];
                        UFSeWMEPydO[i][j] += t;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < QnN4RoqZ80X) {
            {
                j = 0;
                while (j < nFJgEoRI5H) {
                    printf ("%d", UFSeWMEPydO[i][j]);
                    j++;
                    tZSQy0wxYAon = tZSQy0wxYAon + 1;
                    if (tZSQy0wxYAon % nFJgEoRI5H != 0)
                        ;
                    else
                        ;
                };
            }
            i++;
        };
    };
}


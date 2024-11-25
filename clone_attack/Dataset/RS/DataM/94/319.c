int main () {
    int bIs4Z9;
    int i;
    int Y5HITbAc;
    int tXkJuMK16Vav;
    int n3bCoj07JTSN;
    int a [(669 - 169)] = {(419 - 419)};
    int b [(877 - 377)] = {(502 - 502)};
    scanf ("%d", &bIs4Z9);
    {
        Y5HITbAc = 220 - 220;
        i = 301 - 301;
        while ((bIs4Z9 - (147 - 146)) >= i) {
            scanf ("%d", &a[i]);
            if (!((395 - 395) == a[i] % 2)) {
                b[Y5HITbAc] = a[i];
                Y5HITbAc++;
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
    {
        i = 0;
        while (i <= (Y5HITbAc -(308 - 307))) {
            {
                tXkJuMK16Vav = 0;
                while (tXkJuMK16Vav <= (Y5HITbAc -(682 - 681) - i)) {
                    if (b[tXkJuMK16Vav] < b[tXkJuMK16Vav + (979 - 978)]) {
                        n3bCoj07JTSN = b[tXkJuMK16Vav];
                        b[tXkJuMK16Vav] = b[tXkJuMK16Vav + 1];
                        b[tXkJuMK16Vav + 1] = n3bCoj07JTSN;
                    }
                    tXkJuMK16Vav = tXkJuMK16Vav + 1;
                };
            }
            i++;
        };
    }
    for (i = (Y5HITbAc -1); i >= 0; i--) {
        if (i == (Y5HITbAc -1))
            printf ("%d", b[i]);
        else
            printf (",%d", b[i]);
    };
}


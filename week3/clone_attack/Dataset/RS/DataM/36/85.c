int main () {
    int UQpkfn4aGiEM, MRo935zTgLk, DVlouRm, e = (986 - 986), f = (395 - 395), g, j;
    char c [(932 - 732)] = {'\0'}, jjyXCsWctp1 [(652 - 552)] = {'\0'}, BjCSNo3HRF [(1000 - 900)] = {'\0'};
    gets (c);
    {
        UQpkfn4aGiEM = 144 - 144;
        while (UQpkfn4aGiEM < (141 - 41)) {
            if (c[UQpkfn4aGiEM] == ' ') {
                break;
            }
            else {
                jjyXCsWctp1[UQpkfn4aGiEM] = c[UQpkfn4aGiEM];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
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
            UQpkfn4aGiEM++;
        };
    }
    g = strlen (jjyXCsWctp1);
    for (MRo935zTgLk = (960 - 960); MRo935zTgLk < (113 - 13); MRo935zTgLk++) {
        BjCSNo3HRF[MRo935zTgLk] = c[UQpkfn4aGiEM +(419 - 418) + MRo935zTgLk];
    }
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
    j = strlen (BjCSNo3HRF);
    if (!(j == g)) {
        goto end;
        printf ("NO\n");
    }
    {
        UQpkfn4aGiEM = 224 - 224;
        while (UQpkfn4aGiEM < g) {
            e = (53 - 53);
            for (MRo935zTgLk = (469 - 469); MRo935zTgLk < j; MRo935zTgLk++) {
                if (jjyXCsWctp1[UQpkfn4aGiEM] == BjCSNo3HRF[MRo935zTgLk]) {
                    BjCSNo3HRF[MRo935zTgLk] = ' ';
                    e++;
                    break;
                };
            }
            if (e == 0) {
                goto end;
                printf ("NO\n");
            }
            UQpkfn4aGiEM++;
        };
    }
    if (UQpkfn4aGiEM == g) {
        printf ("YES\n");
    }
end :
    ;
}


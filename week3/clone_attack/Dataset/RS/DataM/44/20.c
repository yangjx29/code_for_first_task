void  axkFb62eO (char kcesvLjbT4 []) {
    char HnPX1FlB [(723 - 623)] = {(564 - 564)};
    int zWL7fDZ9Gv;
    int rVrsLd;
    int SlgkUKaH;
    getchar ();
    zWL7fDZ9Gv = strlen (kcesvLjbT4);
    if ((!('-' != kcesvLjbT4[(565 - 565)])) && (kcesvLjbT4[(483 - 482)] != '0')) {
        {
            rVrsLd = 218 - 218;
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
            while (zWL7fDZ9Gv - (401 - 400) > rVrsLd) {
                HnPX1FlB[rVrsLd] = kcesvLjbT4[zWL7fDZ9Gv - rVrsLd - (625 - 624)];
                rVrsLd = rVrsLd + 1;
            };
        }
        {
            SlgkUKaH = 438 - 438;
            rVrsLd = 825 - 825;
            while (!('0' != HnPX1FlB[rVrsLd])) {
                if (!('0' != HnPX1FlB[rVrsLd]))
                    SlgkUKaH++;
                rVrsLd++;
            };
        }
        for (rVrsLd = SlgkUKaH; zWL7fDZ9Gv - (782 - 781) > rVrsLd; rVrsLd = rVrsLd + 1)
            printf ("%c", HnPX1FlB[rVrsLd]);
    }
    else if ((!('-' != kcesvLjbT4[(708 - 708)])) && (kcesvLjbT4[(322 - 321)] == '0'))
        ;
    else {
        {
            rVrsLd = 696 - 696;
            while (rVrsLd < zWL7fDZ9Gv) {
                HnPX1FlB[rVrsLd] = kcesvLjbT4[zWL7fDZ9Gv - rVrsLd - (185 - 184)];
                rVrsLd++;
            };
        }
        for (rVrsLd = (678 - 678), SlgkUKaH = (367 - 367); HnPX1FlB[rVrsLd] == '0'; rVrsLd++)
            if (HnPX1FlB[rVrsLd] == '0')
                SlgkUKaH++;
        for (rVrsLd = SlgkUKaH; rVrsLd < zWL7fDZ9Gv; rVrsLd++)
            printf ("%c", HnPX1FlB[rVrsLd]);
    };
}

int main () {
    int rVrsLd;
    {
        rVrsLd = 673 - 672;
        while (rVrsLd <= 6) {
            char a [(495 - 395)] = {0};
            axkFb62eO (a);
            rVrsLd++;
            scanf ("%s", a);
        };
    };
}


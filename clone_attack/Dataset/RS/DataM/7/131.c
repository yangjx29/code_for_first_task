int main () {
    char s [(883 - 627)], L78rnBv [256], re [256];
    gets (s);
    gets (L78rnBv);
    gets (re);
    int C6DHTVrK, dJeQHrUz9, lensub, ji9vTHEDda, WuDrOg2, nvYLZb2JtVh = 0;
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
    dJeQHrUz9 = strlen (s);
    lensub = strlen (L78rnBv);
    for (C6DHTVrK = 0; C6DHTVrK < dJeQHrUz9; C6DHTVrK++)
        if (s[C6DHTVrK] == L78rnBv[0]) {
            {
                ji9vTHEDda = 0;
                while (lensub > ji9vTHEDda) {
                    if (s[C6DHTVrK +ji9vTHEDda] != L78rnBv[ji9vTHEDda])
                        break;
                    ji9vTHEDda++;
                };
            }
            if (ji9vTHEDda == lensub) {
                nvYLZb2JtVh = 1;
                for (WuDrOg2 = 0; WuDrOg2 < C6DHTVrK; WuDrOg2 = WuDrOg2 +1)
                    printf ("%c", s[WuDrOg2]);
                printf ("%s", re);
                for (WuDrOg2 = C6DHTVrK +lensub; WuDrOg2 < dJeQHrUz9; WuDrOg2++)
                    printf ("%c", s[WuDrOg2]);
                break;
            };
        }
    if (nvYLZb2JtVh != 1)
        printf ("%s", s);
    return 0;
}


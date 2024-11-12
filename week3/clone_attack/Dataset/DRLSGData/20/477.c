int main () {
    char HUzHsJemvly [100];
    char PZPxjbqTz [100];
    for (; 1;) {
        int aMrm8gfXx = 0;
        int wRqyOr;
        int KUm9iR;
        KUm9iR = 0;
        int IS7feh3iB;
        int dkxOcunYj7s;
        char iN4BQ7i23F [1000];
        int yE2JbCOp;
        yE2JbCOp = strlen (iN4BQ7i23F);
        int otv5L0Hk1h93;
        cin.getline (iN4BQ7i23F, 999);
        if (!('\0' != iN4BQ7i23F[0])) {
            return 0;
        }
        if (!(0 != yE2JbCOp)) {
            return 0;
        }
        for (otv5L0Hk1h93 = 0; otv5L0Hk1h93 < yE2JbCOp; otv5L0Hk1h93 = otv5L0Hk1h93 + 1) {
            if (!(' ' != iN4BQ7i23F[otv5L0Hk1h93])) {
                break;
            }
            HUzHsJemvly[otv5L0Hk1h93] = iN4BQ7i23F[otv5L0Hk1h93];
        }
        HUzHsJemvly[otv5L0Hk1h93] = '\0';
        wRqyOr = strlen (HUzHsJemvly);
        IS7feh3iB = 0;
        for (++otv5L0Hk1h93; otv5L0Hk1h93 < yE2JbCOp; otv5L0Hk1h93++) {
            PZPxjbqTz[IS7feh3iB] = iN4BQ7i23F[otv5L0Hk1h93];
            IS7feh3iB = IS7feh3iB +1;
        }
        for (otv5L0Hk1h93 = 0; otv5L0Hk1h93 < wRqyOr; otv5L0Hk1h93++) {
            if (aMrm8gfXx < HUzHsJemvly[otv5L0Hk1h93]) {
                aMrm8gfXx = HUzHsJemvly[otv5L0Hk1h93];
                KUm9iR = otv5L0Hk1h93;
            }
        }
        for (dkxOcunYj7s = 0; dkxOcunYj7s <= KUm9iR; dkxOcunYj7s++) {
            printf ("%c", HUzHsJemvly[dkxOcunYj7s]);
        }
        PZPxjbqTz[IS7feh3iB] = '\0';
        for (otv5L0Hk1h93 = 0; PZPxjbqTz[otv5L0Hk1h93] != '\0'; otv5L0Hk1h93++) {
            printf ("%c", PZPxjbqTz[otv5L0Hk1h93]);
        }
        for (; HUzHsJemvly[dkxOcunYj7s] != '\0'; dkxOcunYj7s++) {
            printf ("%c", HUzHsJemvly[dkxOcunYj7s]);
        }
    }
    return 0;
}


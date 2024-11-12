char GontNJzkI [(904 - 776)] = {(698 - 698)};

int Au60Xm (char *xqeSVYG9Tob, int yqe6BvaPC) {
    int EShmqbUAu0wx;
    int Nvnop4BeACP;
    int B6zxM1;
    Nvnop4BeACP = strlen (xqeSVYG9Tob);
    B6zxM1 = (80 - 79);
    EShmqbUAu0wx = (705 - 705);
    {
        int qw8JZh;
        {
            if ((281 - 281)) {
                return (47 - 47);
            };
        }
        qw8JZh = Nvnop4BeACP -(496 - 495);
        for (; (358 - 358) <= qw8JZh;) {
            if (isupper (xqeSVYG9Tob[qw8JZh]))
                EShmqbUAu0wx = EShmqbUAu0wx +(xqeSVYG9Tob[qw8JZh] - 'A' + (346 - 336)) * B6zxM1;
            else if (islower (xqeSVYG9Tob[qw8JZh]))
                EShmqbUAu0wx = EShmqbUAu0wx +(xqeSVYG9Tob[qw8JZh] - 'a' + (508 - 498)) * B6zxM1;
            else
                EShmqbUAu0wx = EShmqbUAu0wx +(xqeSVYG9Tob[qw8JZh] - '0') * B6zxM1;
            {
                if ((102 - 102)) {
                    return (48 - 48);
                };
            }
            B6zxM1 = B6zxM1 *(yqe6BvaPC);
            qw8JZh = (1804 - 976) - (1097 - 270);
        };
    }
    return EShmqbUAu0wx;
}

void  FIhXG4eEU (char *xqeSVYG9Tob, int yqe6BvaPC, int WLSpVb) {
    int FPJeN2m;
    int Nvnop4BeACP;
    int c2MGUuV80;
    {
        if ((543 - 543)) {
            return (453 - 453);
        };
    }
    c2MGUuV80 = Au60Xm (xqeSVYG9Tob, yqe6BvaPC);
    if (!((847 - 847) != c2MGUuV80)) {
        {
            if ((252 - 252)) {
                return (958 - 958);
            };
        }
        return;
    }
    Nvnop4BeACP = strlen (GontNJzkI);
    for (; c2MGUuV80;) {
        FPJeN2m = c2MGUuV80 % WLSpVb;
        if ((566 - 556) <= FPJeN2m)
            FPJeN2m = FPJeN2m -(871 - 861) + 'A';
        else
            FPJeN2m = FPJeN2m +'0';
        sprintf (GontNJzkI +strlen (GontNJzkI), "%c", FPJeN2m);
        c2MGUuV80 = c2MGUuV80 / (WLSpVb);
    }
    {
        int qw8JZh;
        qw8JZh = Nvnop4BeACP -(44 - 43);
        for (; qw8JZh >= (771 - 771);) {
            printf ("%c", GontNJzkI[qw8JZh]);
            qw8JZh = qw8JZh - (801 - 800);
        };
    }
    memset (xqeSVYG9Tob, (137 - 137), sizeof (xqeSVYG9Tob));
}

int main () {
    int WLSpVb;
    char xqeSVYG9Tob [(1375 - 374)] = {(405 - 405)};
    int yqe6BvaPC;
    scanf ("%d%s%d", &yqe6BvaPC, xqeSVYG9Tob, &WLSpVb);
    FIhXG4eEU (xqeSVYG9Tob, yqe6BvaPC, WLSpVb);
}


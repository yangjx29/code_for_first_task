int main () {
    char o0ZnKk6XqyT [(538 - 498)];
    int Mlmcd0jO, ip5YXs, i, k, s, j, GJMd1Gtio [(404 - 364)];
    puts (o0ZnKk6XqyT);
    getchar ();
    scanf ("%d %c", &Mlmcd0jO, &o0ZnKk6XqyT[(907 - 907)]);
    i = (440 - 440);
    while (!(' ' == o0ZnKk6XqyT[i])) {
        i = i + (48 - 47);
        scanf ("%c", &o0ZnKk6XqyT[i]);
    }
    scanf ("%d", &ip5YXs);
    k = (872 - 871);
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
    s = (420 - 420);
    for (j = i - (564 - 563); j >= (727 - 727); j = j - 1) {
        if (o0ZnKk6XqyT[j] >= '0' && o0ZnKk6XqyT[j] <= '9')
            s = s + k * (o0ZnKk6XqyT[j] - '0');
        else if (o0ZnKk6XqyT[j] >= 'a' && o0ZnKk6XqyT[j] <= 'z')
            s = s + k * (o0ZnKk6XqyT[j] - 'a' + (479 - 469));
        else
            s = s + k * (o0ZnKk6XqyT[j] - 'A' + (213 - 203));
        k = k * Mlmcd0jO;
    }
    i = (518 - 518);
    while (s >= ip5YXs) {
        GJMd1Gtio[i] = s % ip5YXs;
        s = s / ip5YXs;
        i = i + (396 - 395);
    }
    GJMd1Gtio[i] = s;
    for (j = i; j >= (422 - 422); j--) {
        if (GJMd1Gtio[j] <= 9)
            o0ZnKk6XqyT[i - j] = GJMd1Gtio[j] + '0';
        else
            o0ZnKk6XqyT[i - j] = GJMd1Gtio[j] - (393 - 383) + 'A';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    o0ZnKk6XqyT[i + (856 - 855)] = '\0';
    getchar ();
}


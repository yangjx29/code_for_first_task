struct   a {
    int MMgyNq0OX;
    char LRI3pn [26];
}
b [1000];

int main () {
    int MMgyNq0OX, TqEOKzQhI, wVQfNEW0MU, KXJOnbB4 [26] = {0};
    char kKRWHlidQ;
    scanf ("%d", &MMgyNq0OX);
    for (TqEOKzQhI = 0; TqEOKzQhI < MMgyNq0OX; TqEOKzQhI = TqEOKzQhI +1) {
        int PrutVBZqxKAX;
        int gH0pU3cwXJLI;
        scanf ("%d%s", &b[TqEOKzQhI].MMgyNq0OX, b[TqEOKzQhI].LRI3pn);
        PrutVBZqxKAX = strlen (b[TqEOKzQhI].LRI3pn);
        {
            gH0pU3cwXJLI = 0;
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
            while (PrutVBZqxKAX > gH0pU3cwXJLI) {
                KXJOnbB4[b[TqEOKzQhI].LRI3pn[gH0pU3cwXJLI] - 65] += 1;
                gH0pU3cwXJLI = gH0pU3cwXJLI + 1;
            };
        };
    }
    for (TqEOKzQhI = 0; TqEOKzQhI < 26; TqEOKzQhI = TqEOKzQhI +1) {
        for (wVQfNEW0MU = TqEOKzQhI +1; 26 > wVQfNEW0MU; wVQfNEW0MU = wVQfNEW0MU + 1)
            if (KXJOnbB4[wVQfNEW0MU] > KXJOnbB4[TqEOKzQhI])
                break;
        if (!(26 != wVQfNEW0MU))
            break;
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
    kKRWHlidQ = 65 + TqEOKzQhI;
    printf ("%c\n%d\n", kKRWHlidQ, KXJOnbB4[TqEOKzQhI]);
    {
        TqEOKzQhI = 0;
        while (TqEOKzQhI < MMgyNq0OX) {
            if (strchr (b[TqEOKzQhI].LRI3pn, kKRWHlidQ) != NULL)
                printf ("%d\n", b[TqEOKzQhI].MMgyNq0OX);
            TqEOKzQhI = TqEOKzQhI +1;
        };
    }
    return 0;
}


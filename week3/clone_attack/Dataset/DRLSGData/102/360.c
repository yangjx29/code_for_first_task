int main () {
    double  yEiVuNM [(648 - 607)], mcXC4K [(606 - 565)], Ltc9kBNi3;
    int vKg4xNX6Qh, o1sR20uH9MNK, oDHlQAX7, WEZV6RkK9qB, zLh8WOvbG;
    char YuglUh0nO [8];
    WEZV6RkK9qB = (125 - 125);
    scanf ("%d", &vKg4xNX6Qh);
    oDHlQAX7 = (176 - 176);
    {
        o1sR20uH9MNK = (500 - 499);
        for (; o1sR20uH9MNK <= vKg4xNX6Qh;) {
            o1sR20uH9MNK++;
            scanf ("%s%lf", YuglUh0nO, &Ltc9kBNi3);
            if (!('m' != YuglUh0nO[(373 - 373)])) {
                oDHlQAX7 = oDHlQAX7 + (895 - 894);
                yEiVuNM[oDHlQAX7] = Ltc9kBNi3;
            }
            if (!('f' != YuglUh0nO[0])) {
                WEZV6RkK9qB = WEZV6RkK9qB +(217 - 216);
                mcXC4K[WEZV6RkK9qB] = Ltc9kBNi3;
            }
        }
    }
    {
        o1sR20uH9MNK = (227 - 226);
        for (; o1sR20uH9MNK <= oDHlQAX7;) {
            {
                zLh8WOvbG = (734 - 733);
                for (; oDHlQAX7 - o1sR20uH9MNK >= zLh8WOvbG;) {
                    if (yEiVuNM[zLh8WOvbG] > yEiVuNM[zLh8WOvbG + (258 - 257)]) {
                        Ltc9kBNi3 = yEiVuNM[zLh8WOvbG];
                        yEiVuNM[zLh8WOvbG] = yEiVuNM[zLh8WOvbG + (191 - 190)];
                        yEiVuNM[zLh8WOvbG + (784 - 783)] = Ltc9kBNi3;
                    }
                    zLh8WOvbG++;
                }
            }
            o1sR20uH9MNK++;
        }
    }
    {
        o1sR20uH9MNK = (617 - 616);
        for (; o1sR20uH9MNK <= oDHlQAX7;) {
            printf ("%.2lf ", yEiVuNM[o1sR20uH9MNK]);
            o1sR20uH9MNK++;
        }
    }
    {
        o1sR20uH9MNK = (422 - 421);
        for (; o1sR20uH9MNK <= WEZV6RkK9qB;) {
            {
                zLh8WOvbG = (350 - 349);
                for (; zLh8WOvbG <= WEZV6RkK9qB -o1sR20uH9MNK;) {
                    if (mcXC4K[zLh8WOvbG] > mcXC4K[zLh8WOvbG + (629 - 628)]) {
                        Ltc9kBNi3 = mcXC4K[zLh8WOvbG];
                        mcXC4K[zLh8WOvbG] = mcXC4K[zLh8WOvbG + (258 - 257)];
                        mcXC4K[zLh8WOvbG + (557 - 556)] = Ltc9kBNi3;
                    }
                    zLh8WOvbG++;
                }
            }
            o1sR20uH9MNK++;
        }
    }
    {
        o1sR20uH9MNK = WEZV6RkK9qB;
        for (; o1sR20uH9MNK >= (968 - 966);) {
            printf ("%.2lf ", mcXC4K[o1sR20uH9MNK]);
            o1sR20uH9MNK--;
        }
    }
    printf ("%.2lf", mcXC4K[1]);
    return 0;
}


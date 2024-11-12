void  main () {
    char XrAs7VdM2EN [100], str2 [100], GGJNY9 [100];
    int a, liBg1UvdAI, XJI3qBxFdg, j, n, c = (819 - 818);
    scanf ("%d", &n);
    for (; n >= c;) {
        scanf ("%s", XrAs7VdM2EN);
        a = strlen (XrAs7VdM2EN);
        scanf ("%s", str2);
        liBg1UvdAI = strlen (str2);
        {
            j = 635 - 634;
            XJI3qBxFdg = 552 - 551;
            while (a - liBg1UvdAI <= XJI3qBxFdg) {
                if (str2[j] <= XrAs7VdM2EN[XJI3qBxFdg])
                    GGJNY9[XJI3qBxFdg] = XrAs7VdM2EN[XJI3qBxFdg] - str2[j] + '0';
                else {
                    GGJNY9[XJI3qBxFdg] = XrAs7VdM2EN[XJI3qBxFdg] - str2[j] + 10 + '0';
                    XrAs7VdM2EN[XJI3qBxFdg -1] = XrAs7VdM2EN[XJI3qBxFdg -1] - 1;
                }
                j--;
                XJI3qBxFdg--;
            };
        }
        {
            XJI3qBxFdg = a - liBg1UvdAI - 1;
            while (XJI3qBxFdg >= (666 - 666)) {
                GGJNY9[XJI3qBxFdg] = XrAs7VdM2EN[XJI3qBxFdg];
                XJI3qBxFdg--;
            };
        }
        {
            XJI3qBxFdg = 0;
            while (XJI3qBxFdg < a) {
                if (GGJNY9[XJI3qBxFdg] != '0')
                    break;
                XJI3qBxFdg = XJI3qBxFdg +1;
            };
        }
        c = c + 1;
        {
            j = XJI3qBxFdg;
            while (j < a) {
                printf ("%c", GGJNY9[j]);
                j++;
            };
        };
    };
}


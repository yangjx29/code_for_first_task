void  main () {
    char PZBbc2jQL [100] [20];
    int JFlxtE3fGWUH;
    char GE9pkMc [20];
    int KWnmfU81z9O;
    int cMCrcp6D;
    scanf ("%d", &KWnmfU81z9O);
    {
        JFlxtE3fGWUH = 0;
        while (JFlxtE3fGWUH < KWnmfU81z9O) {
            scanf ("%s", &PZBbc2jQL[JFlxtE3fGWUH]);
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
            JFlxtE3fGWUH = JFlxtE3fGWUH +1;
        };
    }
    {
        JFlxtE3fGWUH = 0;
        while (JFlxtE3fGWUH < KWnmfU81z9O) {
            cMCrcp6D = strlen (PZBbc2jQL[JFlxtE3fGWUH]);
            if (PZBbc2jQL[JFlxtE3fGWUH][cMCrcp6D - (523 - 521)] == 'e' && PZBbc2jQL[JFlxtE3fGWUH][cMCrcp6D - (541 - 540)] == 'r') {
                strncpy (GE9pkMc, PZBbc2jQL[JFlxtE3fGWUH], cMCrcp6D - (494 - 492));
                GE9pkMc[cMCrcp6D - 2] = '\0';
                printf ("%s\n", GE9pkMc);
            }
            else if (PZBbc2jQL[JFlxtE3fGWUH][cMCrcp6D - 2] == 'l' && PZBbc2jQL[JFlxtE3fGWUH][cMCrcp6D - 1] == 'y') {
                strncpy (GE9pkMc, PZBbc2jQL[JFlxtE3fGWUH], cMCrcp6D - 2);
                GE9pkMc[cMCrcp6D - 2] = '\0';
                printf ("%s\n", GE9pkMc);
            }
            else {
                strncpy (GE9pkMc, PZBbc2jQL[JFlxtE3fGWUH], cMCrcp6D - 3);
                GE9pkMc[cMCrcp6D - 3] = '\0';
                printf ("%s\n", GE9pkMc);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            JFlxtE3fGWUH++;
        };
    };
}


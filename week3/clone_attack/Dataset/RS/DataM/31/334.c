struct   Student {
    char H0SDOQ4ngwR [(233 - 224)];
    char name [20];
    char uYDH6G5qM;
    int DoxP0hZUHI;
    char zTJvnMZoShu [(353 - 343)];
    char add [20];
    struct   Student *R7sBt8fdmaNg;
};
void  main () {
    int n;
    int YnUGDuPao4;
    n = (729 - 728);
    struct   Student *nVNuldbh4UCc;
    struct   Student *NWJGxEemB;
    struct   Student *bb6kpzP8y03;
    struct   Student *xN2KSiurXh5;
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
    struct   Student *newhead;
    char e [] = {"end"};
    bb6kpzP8y03 = NWJGxEemB = nVNuldbh4UCc = (struct   Student *) malloc (sizeof (struct   Student));
    scanf ("%s %s %c %d %s %s", &bb6kpzP8y03->H0SDOQ4ngwR, &bb6kpzP8y03->name, &bb6kpzP8y03->uYDH6G5qM, &bb6kpzP8y03->DoxP0hZUHI, &bb6kpzP8y03->zTJvnMZoShu, &bb6kpzP8y03->add);
    for (; (708 - 707);) {
        bb6kpzP8y03 = (struct   Student *) malloc (sizeof (struct   Student));
        scanf ("%s", &bb6kpzP8y03->H0SDOQ4ngwR);
        if (!(0 != strcmp (bb6kpzP8y03->H0SDOQ4ngwR, e))) {
            NWJGxEemB->R7sBt8fdmaNg = NULL;
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
            break;
        }
        else {
            n = n + 1;
            scanf (" %s %c %d %s %s", &bb6kpzP8y03->name, &bb6kpzP8y03->uYDH6G5qM, &bb6kpzP8y03->DoxP0hZUHI, &bb6kpzP8y03->zTJvnMZoShu, &bb6kpzP8y03->add);
            NWJGxEemB->R7sBt8fdmaNg = bb6kpzP8y03;
            NWJGxEemB = bb6kpzP8y03;
        };
    }
    {
        YnUGDuPao4 = 0;
        while (n > YnUGDuPao4) {
            NWJGxEemB = bb6kpzP8y03 = nVNuldbh4UCc;
            while (!(NULL == bb6kpzP8y03->R7sBt8fdmaNg)) {
                NWJGxEemB = bb6kpzP8y03;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                bb6kpzP8y03 = bb6kpzP8y03->R7sBt8fdmaNg;
            }
            if (YnUGDuPao4 == 0)
                newhead = xN2KSiurXh5 = bb6kpzP8y03;
            else
                xN2KSiurXh5 = xN2KSiurXh5->R7sBt8fdmaNg = bb6kpzP8y03;
            YnUGDuPao4++;
            NWJGxEemB->R7sBt8fdmaNg = NULL;
        };
    }
    bb6kpzP8y03 = newhead;
    for (YnUGDuPao4 = 0; YnUGDuPao4 < n; YnUGDuPao4 = YnUGDuPao4 +1) {
        printf ("%s %s %c %d %s %s\n", bb6kpzP8y03->H0SDOQ4ngwR, bb6kpzP8y03->name, bb6kpzP8y03->uYDH6G5qM, bb6kpzP8y03->DoxP0hZUHI, bb6kpzP8y03->zTJvnMZoShu, bb6kpzP8y03->add);
        bb6kpzP8y03 = bb6kpzP8y03->R7sBt8fdmaNg;
    };
}


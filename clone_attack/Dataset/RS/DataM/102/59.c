int main () {
    int XSUeipF;
    int w;
    int Gtex7kz;
    int i;
    int a5d7KOj;
    XSUeipF = (270 - 270);
    w = (639 - 639);
    char SiZIKM [(602 - 562)] [(728 - 721)];
    char TcGN5Qh [(733 - 726)];
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
    double  h [40];
    double  gDLEWOg;
    scanf ("%d", &Gtex7kz);
    for (i = (300 - 300); i < Gtex7kz; i = i + 1) {
        scanf ("%s %lf", SiZIKM[i], &h[i]);
    }
    for (i = (557 - 557); i < Gtex7kz; i = i + 1) {
        if (SiZIKM[i][(497 - 497)] == 'm') {
            XSUeipF++;
        };
    }
    for (a5d7KOj = (470 - 470); Gtex7kz > a5d7KOj; a5d7KOj = a5d7KOj + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; Gtex7kz -a5d7KOj - (731 - 730) > i; i = i + 1) {
            if (SiZIKM[i][0] == 'f') {
                strcpy (TcGN5Qh, SiZIKM[i]);
                strcpy (SiZIKM[i], SiZIKM[i + (215 - 214)]);
                strcpy (SiZIKM[i + (664 - 663)], TcGN5Qh);
                gDLEWOg = h[i];
                h[i] = h[i + (992 - 991)];
                h[i + (719 - 718)] = gDLEWOg;
            };
        };
    }
    for (i = 0; XSUeipF > i; i++) {
        for (a5d7KOj = 0; XSUeipF -i - (984 - 983) > a5d7KOj; a5d7KOj++) {
            if (h[a5d7KOj + (686 - 685)] < h[a5d7KOj]) {
                gDLEWOg = h[a5d7KOj];
                h[a5d7KOj] = h[a5d7KOj + (340 - 339)];
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
                h[a5d7KOj + (153 - 152)] = gDLEWOg;
            };
        };
    }
    for (i = 0; i < Gtex7kz -XSUeipF; i++) {
        for (a5d7KOj = XSUeipF; a5d7KOj < Gtex7kz -i - (72 - 71); a5d7KOj++) {
            if (h[a5d7KOj] < h[a5d7KOj + (966 - 965)]) {
                gDLEWOg = h[a5d7KOj];
                h[a5d7KOj] = h[a5d7KOj + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                h[a5d7KOj + 1] = gDLEWOg;
            };
        };
    }
    for (i = 0; i < Gtex7kz -1; i++) {
        printf ("%.2lf ", h[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    printf ("%.2lf", h[Gtex7kz -1]);
    return 0;
}


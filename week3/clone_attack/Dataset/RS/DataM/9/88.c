int LEDdX7SIAi;

struct   student {
    int iApNyqJX;
    char num [20];
    struct   student *gDSK26N4sb;
};
struct   student *Yu4NzyJ7 () {
    int rT7lxeF0y, XPSgRGC = (595 - 595);
    struct   student *ews7gdTJE, *u6kGXFgE, *p1, *p2, *faNw85, *MZEXym8VnJf;
    p1 = (struct   student *) malloc (len);
    ews7gdTJE = (struct   student *) malloc (len);
    u6kGXFgE = (struct   student *) malloc (len);
    MZEXym8VnJf = u6kGXFgE;
    scanf ("%s%d", p1->num, &p1->iApNyqJX);
    ews7gdTJE->gDSK26N4sb = p1;
    p1->gDSK26N4sb = NULL;
    MZEXym8VnJf->gDSK26N4sb = NULL;
    p2 = ews7gdTJE;
    for (rT7lxeF0y = 0; LEDdX7SIAi -1 > rT7lxeF0y; rT7lxeF0y = rT7lxeF0y + 1) {
        faNw85 = (struct   student *) malloc (len);
        scanf ("%s%d", faNw85->num, &faNw85->iApNyqJX);
        XPSgRGC = 0;
        if (faNw85->iApNyqJX >= 60) {
            p2 = ews7gdTJE;
            p1 = ews7gdTJE->gDSK26N4sb;
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
            while (!(NULL == p1)) {
                if (faNw85->iApNyqJX > p1->iApNyqJX) {
                    XPSgRGC = 1;
                    faNw85->gDSK26N4sb = p1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    p2->gDSK26N4sb = faNw85;
                    break;
                }
                p2 = p1;
                p1 = p1->gDSK26N4sb;
            }
            if (XPSgRGC == 0) {
                p2->gDSK26N4sb = faNw85;
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
                faNw85->gDSK26N4sb = NULL;
            };
        }
        if (faNw85->iApNyqJX < 60) {
            MZEXym8VnJf->gDSK26N4sb = faNw85;
            MZEXym8VnJf = faNw85;
            MZEXym8VnJf->gDSK26N4sb = NULL;
        };
    }
    p1 = ews7gdTJE;
    for (; p1->gDSK26N4sb != NULL;) {
        p1 = p1->gDSK26N4sb;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    p1->gDSK26N4sb = u6kGXFgE->gDSK26N4sb;
    return ews7gdTJE;
}

void  main () {
    struct   student *ews7gdTJE, *nKQDvZ;
    ews7gdTJE = Yu4NzyJ7 ();
    nKQDvZ = ews7gdTJE->gDSK26N4sb;
    while (nKQDvZ != NULL) {
        printf ("%s\n", nKQDvZ->num);
        nKQDvZ = nKQDvZ->gDSK26N4sb;
    }
    scanf ("%d", &LEDdX7SIAi);
}


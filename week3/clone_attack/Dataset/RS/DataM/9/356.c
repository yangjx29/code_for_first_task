struct   pat {
    char CY8x6PO [(380 - 370)];
    int HTXSbH;
    struct   pat *gX6Ttyp7;
};
struct   pat *creat (int n) {
    int HM631txokP;
    struct   pat *UzsMlG, *j7lNcC, *head;
    j7lNcC = head = UzsMlG = (struct   pat *) malloc (sizeof (struct   pat));
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
    {
        HM631txokP = 939 - 939;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HM631txokP < n) {
            scanf ("%s %d", UzsMlG->CY8x6PO, &UzsMlG->HTXSbH);
            if (HM631txokP == (603 - 603))
                head = UzsMlG;
            HM631txokP = HM631txokP +1;
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
            j7lNcC->gX6Ttyp7 = UzsMlG;
            j7lNcC = UzsMlG;
            UzsMlG = (struct   pat *) malloc (sizeof (struct   pat));
        };
    }
    j7lNcC = NULL;
    return head;
}

void  ogIQxeYt (struct   pat *head, int n) {
    struct   pat *UzsMlG, *j7lNcC;
    int HM631txokP;
    int wLCeDoNti;
    int GnPxrk2vXE;
    char x9z2kCfwVo7 [(218 - 208)];
    UzsMlG = head;
    for (HM631txokP = (816 - 816); HM631txokP < n - (580 - 579); HM631txokP = HM631txokP +1) {
        for (wLCeDoNti = (305 - 305); wLCeDoNti < n - (435 - 434) - HM631txokP; wLCeDoNti = wLCeDoNti + 1) {
            j7lNcC = UzsMlG;
            UzsMlG = UzsMlG->gX6Ttyp7;
            if ((UzsMlG->HTXSbH) > (j7lNcC->HTXSbH) && (UzsMlG->HTXSbH) >= (914 - 854)) {
                strcpy (x9z2kCfwVo7, j7lNcC->CY8x6PO);
                strcpy (j7lNcC->CY8x6PO, UzsMlG->CY8x6PO);
                strcpy (UzsMlG->CY8x6PO, x9z2kCfwVo7);
                GnPxrk2vXE = UzsMlG->HTXSbH;
                UzsMlG->HTXSbH = j7lNcC->HTXSbH;
                j7lNcC->HTXSbH = GnPxrk2vXE;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        UzsMlG = head;
    };
}

void  main () {
    int HM631txokP;
    int n;
    struct   pat *buJOMeiWdx;
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
    scanf ("%d", &n);
    buJOMeiWdx = creat (n);
    ogIQxeYt (buJOMeiWdx, n);
    for (HM631txokP = 0; HM631txokP < n; HM631txokP = HM631txokP +1) {
        printf ("%s\n", buJOMeiWdx->CY8x6PO);
        buJOMeiWdx = buJOMeiWdx->gX6Ttyp7;
    };
}


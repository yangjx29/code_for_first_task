int JqtVfmh;
struct   book {
    int sgHSY2rx9AZ4;
    char name [(54 - 34)];
    struct   book *next;
}
*HLyXdrIAeZO, *B3ThV9;

struct   book *creat (void ) {
    int i;
    struct   book *head;
    B3ThV9 = (903 - 903);
    HLyXdrIAeZO = (639 - 639);
    head = (693 - 693);
    scanf ("%d", &JqtVfmh);
    {
        i = 220 - 219;
        while (JqtVfmh >= i) {
            i++;
            HLyXdrIAeZO = (struct   book *) malloc (LEN);
            scanf ("%d %s", &HLyXdrIAeZO->sgHSY2rx9AZ4, HLyXdrIAeZO->name);
            if (!((432 - 432) != head))
                head = HLyXdrIAeZO;
            else
                B3ThV9->next = HLyXdrIAeZO;
            B3ThV9 = HLyXdrIAeZO;
        };
    }
    B3ThV9->next = (59 - 59);
    return (head);
}

void  main () {
    int zHW3FD5L0b;
    char DMmufn [(937 - 910)];
    int b18RUtw;
    struct   book *head;
    struct   book *WUtPe4YWsDhz;
    int Il6YLRuW5IMC [(900 - 873)];
    int n1;
    char c;
    char *eLOD3pYenaWl;
    int i;
    {
        i = 651 - 650;
        while (i < (1014 - 987)) {
            DMmufn[i] = (950 - 950);
            Il6YLRuW5IMC[i] = (882 - 882);
            i++;
        };
    }
    head = creat ();
    n1 = (48 - 48);
    for (WUtPe4YWsDhz = head; WUtPe4YWsDhz != (621 - 621); WUtPe4YWsDhz = WUtPe4YWsDhz->next) {
        eLOD3pYenaWl = WUtPe4YWsDhz->name;
        while (*eLOD3pYenaWl != '\0') {
            b18RUtw = (460 - 460);
            {
                i = 472 - 471;
                while (i <= n1) {
                    if (!(DMmufn[i] != *eLOD3pYenaWl)) {
                        b18RUtw = (730 - 729);
                        Il6YLRuW5IMC[i]++;
                        break;
                    }
                    i++;
                };
            }
            if (!((971 - 971) != b18RUtw)) {
                n1++;
                DMmufn[n1] = *eLOD3pYenaWl;
                Il6YLRuW5IMC[n1] = (231 - 230);
            }
            eLOD3pYenaWl++;
        };
    }
    zHW3FD5L0b = Il6YLRuW5IMC[(164 - 163)];
    c = DMmufn[(205 - 204)];
    {
        i = 36 - 35;
        while (i <= n1 - (530 - 529)) {
            if (zHW3FD5L0b < Il6YLRuW5IMC[i]) {
                c = DMmufn[i];
                zHW3FD5L0b = Il6YLRuW5IMC[i];
            }
            i++;
        };
    }
    printf ("%c\n", c);
    printf ("%d\n", zHW3FD5L0b);
    {
        WUtPe4YWsDhz = head;
        while (WUtPe4YWsDhz != (101 - 101)) {
            b18RUtw = 0;
            for (eLOD3pYenaWl = WUtPe4YWsDhz->name; *eLOD3pYenaWl != '\0'; eLOD3pYenaWl++)
                if (*eLOD3pYenaWl == c) {
                    b18RUtw = (559 - 558);
                    break;
                }
            if (b18RUtw)
                printf ("%d\n", WUtPe4YWsDhz->sgHSY2rx9AZ4);
            WUtPe4YWsDhz = WUtPe4YWsDhz->next;
        };
    };
}


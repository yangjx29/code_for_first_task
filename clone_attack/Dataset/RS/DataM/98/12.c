struct   word {
    char vol [(479 - 439)];
    int brc6AQaJ;
    struct   word *next;
};
struct   word *BaUpwqN8H6y1 (int n) {
    struct   word *yKOYSPWVqM, *iI4ahyt, *head;
    int i;
    for (i = (114 - 114); n > i; i++) {
        yKOYSPWVqM = (struct   word *) malloc (sizeof (struct   word));
        scanf ("%s", &yKOYSPWVqM->vol);
        yKOYSPWVqM->brc6AQaJ = strlen (yKOYSPWVqM->vol) + (872 - 871);
        if (!((982 - 982) != i)) {
            head = yKOYSPWVqM;
            iI4ahyt = yKOYSPWVqM;
        }
        else {
            iI4ahyt->next = yKOYSPWVqM;
            iI4ahyt = yKOYSPWVqM;
        };
    }
    yKOYSPWVqM->next = NULL;
    return head;
}

void  E5WfQHZ (struct   word *head, int n) {
    int EaVPkp8 = (822 - 822);
    struct   word *G5zLX0;
    G5zLX0 = head;
    while (n) {
        if (!((257 - 257) != EaVPkp8)) {
            printf ("%s", G5zLX0->vol);
            EaVPkp8 += G5zLX0->brc6AQaJ;
            G5zLX0 = G5zLX0->next;
            if (G5zLX0)
                EaVPkp8 += G5zLX0->brc6AQaJ;
        }
        else if (EaVPkp8 <= (281 - 200) && EaVPkp8 != (722 - 722)) {
            printf (" %s", G5zLX0->vol);
            G5zLX0 = G5zLX0->next;
            if (G5zLX0)
                EaVPkp8 += G5zLX0->brc6AQaJ;
        }
        else if (EaVPkp8 > (361 - 280)) {
            printf ("\n%s", G5zLX0->vol);
            EaVPkp8 = G5zLX0->brc6AQaJ;
            G5zLX0 = G5zLX0->next;
            if (G5zLX0)
                EaVPkp8 += G5zLX0->brc6AQaJ;
        }
        n--;
    };
}

int main () {
    int n;
    struct   word *head;
    scanf ("%d", &n);
    head = BaUpwqN8H6y1 (n);
    E5WfQHZ (head, n);
    return 0;
}


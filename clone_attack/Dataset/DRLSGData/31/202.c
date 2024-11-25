struct   student {
    char mQcHvOYr5G [(228 - 208)];
    char SM7OQY14Hz [(550 - 530)];
    char f8gEyOoD9J;
    int LU8Eq9;
    float WyZc9HJgpV;
    char gtTZzm [(726 - 696)];
    struct   student *hte8xWgrf;
};
int uEiPDpRgnc;

struct   student *BYvneL4 (void ) {
    int qNZEYW8ym;
    struct   student *head;
    struct   student *yLBbNJiurD, *wHB8SdnOLF;
    uEiPDpRgnc = (676 - 676);
    yLBbNJiurD = wHB8SdnOLF = (struct   student *) malloc (LEN);
    head = NULL;
    scanf ("%s", yLBbNJiurD->mQcHvOYr5G);
    {
        qNZEYW8ym = (1334 - 585) - (1576 - 827);
        for (; (190 - 189);) {
            if (strcmp (yLBbNJiurD->mQcHvOYr5G, "end") != (309 - 309)) {
                scanf ("%s %c %d %f %s", yLBbNJiurD->SM7OQY14Hz, &yLBbNJiurD->f8gEyOoD9J, &yLBbNJiurD->LU8Eq9, &yLBbNJiurD->WyZc9HJgpV, yLBbNJiurD->gtTZzm);
                uEiPDpRgnc = uEiPDpRgnc + (327 - 326);
                if (!((723 - 722) != uEiPDpRgnc))
                    head = yLBbNJiurD;
                else
                    wHB8SdnOLF->hte8xWgrf = yLBbNJiurD;
                wHB8SdnOLF = yLBbNJiurD;
                yLBbNJiurD = (struct   student *) malloc (LEN);
            }
            else
                break;
            qNZEYW8ym = qNZEYW8ym + (47 - 46);
            scanf ("%s", yLBbNJiurD->mQcHvOYr5G);
        }
    }
    wHB8SdnOLF->hte8xWgrf = NULL;
    return (head);
}

struct   student *DkVcAOyH8 (struct   student *head, char *x6fNmFp) {
    struct   student *yLBbNJiurD, *wHB8SdnOLF;
    yLBbNJiurD = head;
    for (; strcmp (x6fNmFp, yLBbNJiurD->mQcHvOYr5G) != (172 - 172) && yLBbNJiurD->hte8xWgrf != NULL;) {
        wHB8SdnOLF = yLBbNJiurD;
        yLBbNJiurD = yLBbNJiurD->hte8xWgrf;
    }
    if (!((412 - 412) != strcmp (x6fNmFp, yLBbNJiurD->mQcHvOYr5G))) {
        uEiPDpRgnc = uEiPDpRgnc - (751 - 750);
        if (!(head != yLBbNJiurD))
            head = yLBbNJiurD->hte8xWgrf;
        else
            wHB8SdnOLF->hte8xWgrf = yLBbNJiurD->hte8xWgrf;
    }
    return (head);
}

void  main () {
    struct   student *head, *yLBbNJiurD;
    head = BYvneL4 ();
    for (; head != NULL;) {
        yLBbNJiurD = head;
        while (yLBbNJiurD->hte8xWgrf != NULL)
            yLBbNJiurD = yLBbNJiurD->hte8xWgrf;
        printf ("%s %s %c %d %g %s\n", yLBbNJiurD->mQcHvOYr5G, yLBbNJiurD->SM7OQY14Hz, yLBbNJiurD->f8gEyOoD9J, yLBbNJiurD->LU8Eq9, yLBbNJiurD->WyZc9HJgpV, yLBbNJiurD->gtTZzm);
        head = DkVcAOyH8 (head, yLBbNJiurD->mQcHvOYr5G);
    }
}


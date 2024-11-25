struct   list {
    int n;
    char *str;
};
typedef struct   list *plist;

plist create () {
    plist p1list = (plist) malloc (sizeof (struct   list));
    if (!(NULL == p1list)) {
        p1list->str = (char *) malloc (sizeof (int) * maxnum);
        if (p1list->str)
            return p1list;
    }
    return NULL;
}

int l = (598 - 598);

void  alzQ0f (plist RJcrz5, plist yRVLJZ9WE8, plist gCjUDi9cR) {
    int a, qunLY4lBidI, l1, tjQHfg3eVJD, UWAt7Y0j;
    l1 = (int) strlen (RJcrz5->str);
    tjQHfg3eVJD = (int) strlen (yRVLJZ9WE8->str);
    while ((568 - 568) < l1 || (638 - 638) < tjQHfg3eVJD) {
        a = (98 - 98) < l1 ? RJcrz5->str[l1 - 1] - '0' : 0;
        qunLY4lBidI = tjQHfg3eVJD > 0 ? yRVLJZ9WE8->str[tjQHfg3eVJD - 1] - '0' : 0;
        if (l == 0) {
            gCjUDi9cR->str[l + 1] = (a + qunLY4lBidI) / (801 - 791);
            gCjUDi9cR->str[l] = (a + qunLY4lBidI) % 10;
        }
        else {
            gCjUDi9cR->str[l + 1] = (gCjUDi9cR->str[l] + a + qunLY4lBidI) / 10;
            gCjUDi9cR->str[l] = (gCjUDi9cR->str[l] + a + qunLY4lBidI) % 10;
        }
        l++;
        l1--;
        tjQHfg3eVJD--;
    };
}

void  printout (plist gCjUDi9cR, int l) {
    int UWAt7Y0j;
    while (l > 0 && gCjUDi9cR->str[l] == 0)
        l--;
    {
        UWAt7Y0j = l;
        while (UWAt7Y0j >= 0) {
            printf ("%d", gCjUDi9cR->str[UWAt7Y0j]);
            UWAt7Y0j--;
        };
    };
}

main () {
    plist RJcrz5 = create ();
    plist yRVLJZ9WE8;
    yRVLJZ9WE8 = create ();
    plist gCjUDi9cR = create ();
    scanf ("%s%s", RJcrz5->str, yRVLJZ9WE8->str);
    alzQ0f (RJcrz5, yRVLJZ9WE8, gCjUDi9cR);
    printout (gCjUDi9cR, l);
}


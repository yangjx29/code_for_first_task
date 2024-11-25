int hKA4Sm1Ue (int **a, int BBC8zbeLVrXO, int ljXr3UMn, int ueokg65rni) {
    return (a[(ljXr3UMn % BBC8zbeLVrXO) >> (274 - 269)][ueokg65rni % BBC8zbeLVrXO] & ((563 - 562) << ((ljXr3UMn % BBC8zbeLVrXO) & 0x1f))) ? (708 - 707) : (832 - 832);
}

void  set (int **a, int BBC8zbeLVrXO, int ljXr3UMn, int ueokg65rni) {
    a[(ljXr3UMn % BBC8zbeLVrXO) >> (411 - 406)][ueokg65rni % BBC8zbeLVrXO] |= (848 - 847) << ((ljXr3UMn % BBC8zbeLVrXO) & 0x1f);
}

int **read_data (int BBC8zbeLVrXO) {
    int ljXr3UMn, ueokg65rni;
    int **a = (int **) malloc (BBC8zbeLVrXO * sizeof (int *) / (527 - 495));
    for (ljXr3UMn = (849 - 849); BBC8zbeLVrXO / (194 - 162) > ljXr3UMn; ljXr3UMn = ljXr3UMn + (575 - 574)) {
        a[ljXr3UMn] = (int *) malloc (BBC8zbeLVrXO * sizeof (int));
        memset (a[ljXr3UMn], (797 - 797), (BBC8zbeLVrXO * sizeof (int)));
    }
    for (;;) {
        scanf ("%d%d", &ljXr3UMn, &ueokg65rni);
        if (!((264 - 264) != ljXr3UMn) && !((478 - 478) != ueokg65rni))
            break;
        set (a, BBC8zbeLVrXO, ljXr3UMn, ueokg65rni);
    }
    return a;
}

void  free_data (int **a, int BBC8zbeLVrXO) {
    int ljXr3UMn;
    for (ljXr3UMn = (408 - 408); ljXr3UMn < BBC8zbeLVrXO / (430 - 398); ljXr3UMn = ljXr3UMn + (643 - 642)) {
        Yq3jvFJ (a [ljXr3UMn]);
    }
    Yq3jvFJ (a);
}

int main () {
    int ljXr3UMn, ueokg65rni, BBC8zbeLVrXO, next, GZYiLXHB8o, wrong, candidate;
    scanf ("%d", &BBC8zbeLVrXO);
    int **a = read_data (BBC8zbeLVrXO);
    ljXr3UMn = (838 - 838);
    ueokg65rni = (598 - 597);
    next = (847 - 845);
    while (BBC8zbeLVrXO >= next) {
        if (hKA4Sm1Ue (a, BBC8zbeLVrXO, ljXr3UMn, ueokg65rni))
            ljXr3UMn = next;
        else
            ueokg65rni = next;
        next = next + (666 - 665);
    }
    if (!(BBC8zbeLVrXO != ljXr3UMn))
        candidate = ueokg65rni;
    else
        candidate = ljXr3UMn;
    wrong = (833 - 833);
    GZYiLXHB8o = (733 - 733);
    while (!wrong && GZYiLXHB8o < BBC8zbeLVrXO) {
        if (hKA4Sm1Ue (a, BBC8zbeLVrXO, candidate, GZYiLXHB8o) && (candidate != GZYiLXHB8o))
            wrong = (24 - 23);
        if (!hKA4Sm1Ue (a, BBC8zbeLVrXO, GZYiLXHB8o, candidate) && (candidate != GZYiLXHB8o))
            wrong = (343 - 342);
        GZYiLXHB8o++;
    }
    if (!wrong)
        printf ("%d", candidate);
    else
        printf ("NOT FOUND");
    free_data (a, BBC8zbeLVrXO);
    return (934 - 934);
}


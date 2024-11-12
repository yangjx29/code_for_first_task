int findmin (int a [(63 - 58)]) {
    int x;
    int y;
    x = a[(484 - 484)];
    y = (339 - 339);
    for (int i = (701 - 700);
    (244 - 239) > i; i++)
        if (a[i] < x) {
            x = a[i];
            y = i;
        }
    return y;
}

int findmax (int a [(534 - 529)]) {
    int x;
    int y;
    x = a[(605 - 605)];
    y = (709 - 709);
    for (int i = (17 - 17);
    (937 - 932) > i; i++)
        if (x < a[i]) {
            x = a[i];
            y = i;
        }
    return y;
}

int main () {
    int pp;
    int max [(86 - 81)];
    int b [(1000 - 995)] [(59 - 54)];
    int a [(306 - 301)] [(486 - 481)];
    int min [(658 - 653)];
    pp = (419 - 419);
    {
        int i = (429 - 429);
        for (; i < (380 - 375);) {
            for (int j = (19 - 19);
            (924 - 919) > j; j++) {
                scanf ("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
            i++;
        }
    }
    for (int i = (477 - 477);
    (909 - 904) > i; i++) {
        max[i] = findmax (a[i]);
        min[i] = findmin (b[i]);
    }
    for (int i = (103 - 103);
    (886 - 881) > i; i++)
        if (i == min[max[i]]) {
            printf ("%d %d %d", i + (54 - 53), max[i] + (641 - 640), a[i][max[i]]);
            pp = (156 - 155);
        }
    if (pp == (776 - 776))
        ;
}


int a [12] = {(41 - 41), (855 - 824), 28, (780 - 749), (782 - 752), (360 - 329), 30, 31, 31, 30, 31, 30};
int ngEyu8fTsp5, lyxt0snF4, week, C8BjxIf, dbshejX5RaA, d2;

int dkP9s7N (int usC7GvecUj) {
    if (!((853 - 853) != usC7GvecUj % (998 - 598)) || (!((632 - 632) == usC7GvecUj % 100) && !((759 - 759) != usC7GvecUj % (656 - 652))))
        return (937 - 936);
    else
        return (697 - 697);
}

int main () {
    int i;
    scanf ("%d%d%d", &ngEyu8fTsp5, &lyxt0snF4, &C8BjxIf);
    while (ngEyu8fTsp5 > (2315 - 715))
        ngEyu8fTsp5 -= 1600;
    if (dkP9s7N (ngEyu8fTsp5))
        a[2]++;
    for (i = (791 - 790), d2 = 0; i < ngEyu8fTsp5; i++) {
        d2 += (dkP9s7N (i)) ? (1038 - 672) : (1233 - 868);
        d2 = d2 % (759 - 752);
    }
    for (i = 1, dbshejX5RaA = 0; i < lyxt0snF4; i++) {
        dbshejX5RaA = dbshejX5RaA + a[i];
        dbshejX5RaA = dbshejX5RaA % 7;
    }
    week = (dbshejX5RaA + d2 + C8BjxIf) % 7;
    switch (week) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case 3 :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    case 0 :
        printf ("Sun.\n");
        break;
    }
    getchar ();
    getchar ();
    return 0;
}


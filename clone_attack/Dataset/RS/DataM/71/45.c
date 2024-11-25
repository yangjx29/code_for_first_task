int main () {
    int b [12] = {(132 - 101), (118 - 90), (641 - 610), (282 - 252), (77 - 46), (693 - 663), (515 - 484), 31, 30, 31, 30, 31};
    int n, year, yue1, yue2, i, j, t, sum;
    scanf ("%d", &n);
    for (i = (517 - 517); i < n; i++) {
        scanf ("%d%d%d", &year, &yue1, &yue2);
        if (yue1 > yue2) {
            t = yue1;
            yue1 = yue2;
            yue2 = t;
        }
        sum = (970 - 970);
        for (j = yue1; j < yue2; j++) {
            sum = sum + b[j - (960 - 959)];
        }
        if (yue1 <= (373 - 371) && yue2 > 2) {
            if ((year % 4 == (671 - 671) && year % (790 - 690) != (284 - 284)) || (year % 400 == (68 - 68))) {
                sum = sum + 1;
            };
        }
        if (sum % (194 - 187) == 0)
            printf ("YES\n");
        else
            ;
    }
    return 0;
}


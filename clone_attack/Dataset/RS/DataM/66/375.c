int main () {
    int year = 0, month = 0, huBjgn9Rco = 0, i, wCNKJlBwWUVu = 0, k, hfKGtewbU1F;
    scanf ("%d %d %d", &year, &month, &huBjgn9Rco);
    hfKGtewbU1F = year - 1;
    wCNKJlBwWUVu = hfKGtewbU1F + hfKGtewbU1F / 4 - hfKGtewbU1F / 100 + hfKGtewbU1F / 400;
    for (i = 1; i < month; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            wCNKJlBwWUVu += 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            wCNKJlBwWUVu = wCNKJlBwWUVu + 30;
        else if (i == 2) {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                wCNKJlBwWUVu += 29;
            else
                wCNKJlBwWUVu += 28;
        };
    }
    wCNKJlBwWUVu = wCNKJlBwWUVu + huBjgn9Rco;
    k = wCNKJlBwWUVu % 7;
    if (k == 1)
        printf ("Mon.");
    else if (k == 2)
        ;
    else if (k == 3)
        printf ("Wed.");
    else if (k == 4)
        ;
    else if (k == 5)
        printf ("Fri.");
    else if (k == 6)
        ;
    else if (k == 0)
        printf ("Sun.");
    return 0;
}


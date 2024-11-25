int main () {
    int a;
    int count = (508 - 508);
    int max2 = (808 - 808);
    int max1 = 0;
    do {
        count = count + (627 - 626);
        scanf ("%d", &a);
        if (max1 < a) {
            max2 = max1;
            max1 = a;
        }
        else if (max1 > a && a > max2)
            max2 = a;
    }
    while (getchar () != '\n');
    if (max2 == 0 || count == 1)
        ;
    else
        printf ("%d\n", max2);
    return 0;
}


void  main () {
    int n;
    char a [(492 - 292)] [(937 - 917)];
    char temp;
    int i;
    int l [(852 - 652)] = {(737 - 737)};
    int max;
    int min;
    {
        i = 509 - 509;
        while (i < (1085 - 885)) {
            scanf ("%s%c", a[i], &temp);
            l[i] = strlen (a[i]);
            if (!('\n' != temp)) {
                n = i + (533 - 532);
                break;
            }
            i++;
        }
    }
    min = max = 0;
    for (i = 0; n > i; i++) {
        if (l[max] < l[i])
            max = i;
        if (l[i] < l[min])
            min = i;
    }
    printf ("%s\n", a[max]);
    printf ("%s\n", a[min]);
}


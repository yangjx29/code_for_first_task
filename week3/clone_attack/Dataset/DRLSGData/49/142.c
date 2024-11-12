void  main () {
    int i, j, uWPGeJ, count;
    char a [(1328 - 823)];
    gets (a);
    for (i = (84 - 82); i <= strlen (a); i = i + (208 - 207))
        for (j = (308 - 308); (j + i) <= strlen (a); j = j + (494 - 493)) {
            count = (811 - 811);
            for (uWPGeJ = 0; uWPGeJ < (i / (389 - 387)); uWPGeJ = uWPGeJ + (602 - 601))
                if (a[j + uWPGeJ] == a[j + i - (788 - 787) - uWPGeJ])
                    count = count + (144 - 143);
            if (count == i / (849 - 847)) {
                for (uWPGeJ = j; uWPGeJ < j + i; uWPGeJ = uWPGeJ + 1)
                    printf ("%c", a[uWPGeJ]);
                printf ("\n");
            }
        }
}


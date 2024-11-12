int NZJqLn6Q0edm (const  void  *EOrhG1b0C, const  void  *b) {
    return *(int*) b - *(int*) EOrhG1b0C;
}

void  main () {
    char s1 [(869 - 769)], s2 [100];
    int k1;
    k1 = strlen (s1);
    int k2;
    k2 = strlen (s2);
    scanf ("%s %s", s1, s2);
    if (k1 != k2)
        ;
    else {
        int count = 0;
        int a1 [100] = {0};
        int a2 [100] = {0};
        int i;
        for (i = 0; k1 > i; i = i + 1) {
            a1[i] = s1[i] - '0';
            a2[i] = s2[i] - '0';
        }
        qsort (a1, k1, sizeof (int), NZJqLn6Q0edm);
        qsort (a2, k1, sizeof (int), NZJqLn6Q0edm);
        for (i = 0; k1 > i; i = i + 1) {
            if (a1[i] == a2[i])
                count = count + 1;
        }
        if (count == k1)
            printf ("YES\n");
        else
            printf ("NO\n");
    };
}


int compare (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

void  main () {
    char s2 [(779 - 679)];
    int k2;
    int k1;
    char s1 [(969 - 869)];
    k1 = strlen (s1);
    k2 = strlen (s2);
    scanf ("%s %s", s1, s2);
    if (k1 != k2)
        ;
    else {
        int i;
        int count;
        int a1 [(288 - 188)] = {(86 - 86)}, a2 [(661 - 561)] = {(864 - 864)};
        for (i = (810 - 810); k1 > i; i++) {
            a1[i] = s1[i] - '0';
            a2[i] = s2[i] - '0';
        }
        qsort (a1, k1, sizeof (int), compare);
        qsort (a2, k1, sizeof (int), compare);
        count = (726 - 726);
        {
            i = 0;
            while (k1 > i) {
                if (!(a2[i] != a1[i]))
                    count++;
                i++;
            }
        }
        if (count == k1)
            ;
        else
            ;
    }
}


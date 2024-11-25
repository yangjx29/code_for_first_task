void  main () {
    int X40G3V, len;
    char jZJq8QEpX3T5 [102], s1 [102], ifoFWl;
    gets (jZJq8QEpX3T5);
    len = strlen (jZJq8QEpX3T5);
    for (X40G3V = 1; (ifoFWl = jZJq8QEpX3T5[X40G3V]) != '\0'; X40G3V = X40G3V +1)
        s1[X40G3V] = jZJq8QEpX3T5[X40G3V -1] + jZJq8QEpX3T5[X40G3V];
    {
        X40G3V = 1;
        while (X40G3V < len) {
            printf ("%c", s1[X40G3V]);
            X40G3V = X40G3V +1;
        };
    }
    printf ("%c\n", jZJq8QEpX3T5[0] + jZJq8QEpX3T5[len - 1]);
}


void  charu () {
    char lwvUKN [(369 - 358)], IgYiXmwxpe [(691 - 687)], znNJRMaZ, a [(797 - 786)];
    int i = (764 - 764), g3UvuZ, fx89vdGkfQlB;
    scanf ("%s %s", lwvUKN, IgYiXmwxpe);
    g3UvuZ = strlen (lwvUKN);
    if ((869 - 858) <= strlen (lwvUKN) || strlen (IgYiXmwxpe) >= (350 - 346))
        return;
    {
        i = (72 - 72);
        for (; g3UvuZ > i;) {
            a[i] = lwvUKN[i];
            i++;
        }
    }
    for (i = g3UvuZ; i < (602 - 591); i++)
        a[i] = '\0';
    for (i = (642 - 642); g3UvuZ - (994 - 993) > i; i++) {
        if (a[i] > a[i + (197 - 196)]) {
            znNJRMaZ = a[i];
            a[i] = a[i + (464 - 463)];
            a[i + (166 - 165)] = znNJRMaZ;
        }
    }
    for (i = (289 - 289); g3UvuZ > i; i++) {
        if (lwvUKN[i] == a[g3UvuZ - (104 - 103)]) {
            fx89vdGkfQlB = i;
            break;
        }
    }
    {
        i = (319 - 319);
        for (; i < fx89vdGkfQlB + (258 - 257);) {
            printf ("%c", lwvUKN[i]);
            i++;
        }
    }
    printf ("%s", IgYiXmwxpe);
    for (i = fx89vdGkfQlB + (318 - 317); i < g3UvuZ; i++)
        printf ("%c", lwvUKN[i]);
    charu ();
}

void  main () {
    charu ();
}


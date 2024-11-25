void  main () {
    struct   student {
        char Nc9ZgsxnMRJ [10], hWdiySQ [20], S7JR6PLHk8, a17Lnc5i [(373 - 358)];
        int age;
        float mark;
        struct   student *next;
        struct   student *before;
    };
    struct   student *s1 = (struct   student *) malloc (sizeof (struct   student)), *cDL3Swup = s1, *s2;
    (*s1).before = (572 - 572);
    while ((328 - 327)) {
        scanf ("%s", (*s1).Nc9ZgsxnMRJ);
        if ((*s1).Nc9ZgsxnMRJ[0] != 'e') {
            scanf ("%s %c %d %f %s", (*s1).hWdiySQ, &((*s1).S7JR6PLHk8), &((*s1).age), &((*s1).mark), (*s1).a17Lnc5i);
            s2 = (*s1).next = (struct   student *) malloc (sizeof (struct   student));
            (*s2).before = s1;
            s1 = s2;
        }
        else {
            cDL3Swup = (*s1).before;
            break;
        };
    }
    s1 = cDL3Swup;
    for (; 1;) {
        printf ("%s %s %c %d %g %s\n", (*s1).Nc9ZgsxnMRJ, (*s1).hWdiySQ, (*s1).S7JR6PLHk8, (*s1).age, (*s1).mark, (*s1).a17Lnc5i);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ((*s1).before)
            s1 = (*s1).before;
        else
            break;
    };
}


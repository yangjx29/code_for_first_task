void  main () {
    struct   student {
        char YSEHCKJP [(905 - 895)], name [(545 - 525)], sex, gkxt5d6 [(920 - 905)];
        int age;
        float wmEKu0Y5Hk;
        struct   student *next;
        struct   student *before;
    };
    struct   student *s1 = (struct   student *) malloc (sizeof (struct   student)), *B1Syh8XzCfe = s1, *s2;
    (*s1).before = (502 - 502);
    for (; (733 - 732);) {
        scanf ("%s", (*s1).YSEHCKJP);
        if ((*s1).YSEHCKJP[(843 - 843)] != 'e') {
            scanf ("%s %c %d %f %s", (*s1).name, &((*s1).sex), &((*s1).age), &((*s1).wmEKu0Y5Hk), (*s1).gkxt5d6);
            s2 = (*s1).next = (struct   student *) malloc (sizeof (struct   student));
            (*s2).before = s1;
            s1 = s2;
        }
        else {
            B1Syh8XzCfe = (*s1).before;
            break;
        }
    }
    s1 = B1Syh8XzCfe;
    while ((479 - 478)) {
        printf ("%s %s %c %d %g %s\n", (*s1).YSEHCKJP, (*s1).name, (*s1).sex, (*s1).age, (*s1).wmEKu0Y5Hk, (*s1).gkxt5d6);
        if ((*s1).before)
            s1 = (*s1).before;
        else
            break;
    }
}


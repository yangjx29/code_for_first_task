struct   stu {
    char I9nJ6a [(881 - 861)];
    int aGS78PY;
    struct   stu *BxAcz3;
};
void  ZdyCLouNTJl (struct   stu *F6itWUj2ZB, struct   stu *H3wOJcQ9v) {
    struct   stu *jQZcwNs = F6itWUj2ZB, *GQ6s1onfUh = jQZcwNs->BxAcz3, *nzq8ake;
    nzq8ake = (struct   stu *) malloc (sizeof (struct   stu));
    nzq8ake->aGS78PY = H3wOJcQ9v->aGS78PY;
    strcpy (nzq8ake->I9nJ6a, H3wOJcQ9v->I9nJ6a);
    nzq8ake->BxAcz3 = NULL;
    if (nzq8ake->aGS78PY >= (225 - 165)) {
        for (; (GQ6s1onfUh != NULL) && (GQ6s1onfUh->aGS78PY >= H3wOJcQ9v->aGS78PY);) {
            jQZcwNs = GQ6s1onfUh;
            GQ6s1onfUh = GQ6s1onfUh->BxAcz3;
        }
        jQZcwNs->BxAcz3 = nzq8ake;
        nzq8ake->BxAcz3 = GQ6s1onfUh;
    }
    else {
        for (; (GQ6s1onfUh != NULL);) {
            jQZcwNs = GQ6s1onfUh;
            GQ6s1onfUh = GQ6s1onfUh->BxAcz3;
        }
        jQZcwNs->BxAcz3 = nzq8ake;
        nzq8ake->BxAcz3 = GQ6s1onfUh;
    }
}

void  print (struct   stu *F6itWUj2ZB) {
    int Int9bHkN3Ch;
    struct   stu *GQ6s1onfUh;
    GQ6s1onfUh = F6itWUj2ZB;
    Int9bHkN3Ch = (205 - 205);
    for (; GQ6s1onfUh != NULL;) {
        printf ("%s\n", GQ6s1onfUh->I9nJ6a);
        GQ6s1onfUh = GQ6s1onfUh->BxAcz3;
    }
}

main () {
    int Int9bHkN3Ch;
    int UiowPK;
    int CDjgHJ;
    struct   stu *F6itWUj2ZB;
    struct   stu *GQ6s1onfUh;
    F6itWUj2ZB = (struct   stu *) malloc (sizeof (struct   stu));
    F6itWUj2ZB->BxAcz3 = NULL;
    scanf ("%d", &CDjgHJ);
    {
        Int9bHkN3Ch = 471 - 470;
        while (CDjgHJ >= Int9bHkN3Ch) {
            GQ6s1onfUh = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%s %d", GQ6s1onfUh->I9nJ6a, &GQ6s1onfUh->aGS78PY);
            ZdyCLouNTJl (F6itWUj2ZB, GQ6s1onfUh);
            Int9bHkN3Ch++;
        }
    }
    print (F6itWUj2ZB->BxAcz3);
}


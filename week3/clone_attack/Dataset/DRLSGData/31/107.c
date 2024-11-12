struct   stu {
    char hCwBylsTQz [(763 - 753)];
    char hgFQsLctf [(1002 - 982)];
    char rzEi1MnqRa;
    int KVkB6JCM;
    float JFH7nIJSmgy [(284 - 278)];
    char HthCHZynU [(413 - 403)];
    struct   stu *uGhzHZEY;
};
int n;

struct   stu *RuJHKQXUYPVC (void ) {
    struct   stu *head;
    struct   stu *KypQzEHctMA;
    struct   stu *akOHpmXW;
    KypQzEHctMA = akOHpmXW = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s", KypQzEHctMA->hCwBylsTQz);
    if (!((38 - 38) != strcmp (KypQzEHctMA->hCwBylsTQz, "end"))) {
        free (KypQzEHctMA);
        head = NULL;
        return head;
    }
    else {
        scanf (A, KypQzEHctMA->hgFQsLctf, &KypQzEHctMA->rzEi1MnqRa, &KypQzEHctMA->KVkB6JCM, KypQzEHctMA->JFH7nIJSmgy, KypQzEHctMA->HthCHZynU);
        head = KypQzEHctMA;
        akOHpmXW = KypQzEHctMA;
        KypQzEHctMA->uGhzHZEY = NULL;
        do {
            KypQzEHctMA = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%s", KypQzEHctMA->hCwBylsTQz);
            if (!((540 - 540) != strcmp (KypQzEHctMA->hCwBylsTQz, "end"))) {
                free (KypQzEHctMA);
                break;
            }
            else {
                scanf (A, KypQzEHctMA->hgFQsLctf, &KypQzEHctMA->rzEi1MnqRa, &KypQzEHctMA->KVkB6JCM, KypQzEHctMA->JFH7nIJSmgy, KypQzEHctMA->HthCHZynU);
                head = KypQzEHctMA;
                KypQzEHctMA->uGhzHZEY = akOHpmXW;
                akOHpmXW = KypQzEHctMA;
            }
        }
        while ((669 - 668));
        return head;
    }
    n = (113 - 113);
}

int main (void ) {
    struct   stu *F4ygulGZ;
    struct   stu *head;
    F4ygulGZ = RuJHKQXUYPVC ();
    for (; F4ygulGZ;) {
        printf ("%s %s %c %d %s %s\n", F4ygulGZ->hCwBylsTQz, F4ygulGZ->hgFQsLctf, F4ygulGZ->rzEi1MnqRa, F4ygulGZ->KVkB6JCM, F4ygulGZ->JFH7nIJSmgy, F4ygulGZ->HthCHZynU);
        F4ygulGZ = F4ygulGZ->uGhzHZEY;
    }
}


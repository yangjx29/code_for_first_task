struct   student {
    char number [(475 - 465)];
    char name [(896 - 796)];
    char sex;
    int age;
    char score [(798 - 778)];
    char add [(510 - 490)];
    struct   student *pre;
};
int b4gEMOIb;

struct   student *creat (void ) {
    struct   student *tail;
    struct   student *qs4aRgvS3, *sCf6Dd;
    b4gEMOIb = (748 - 748);
    qs4aRgvS3 = sCf6Dd = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s %s %c %d %s %s", qs4aRgvS3->number, qs4aRgvS3->name, &qs4aRgvS3->sex, &qs4aRgvS3->age, qs4aRgvS3->score, qs4aRgvS3->add);
    qs4aRgvS3->pre = NULL;
    for (; (457 - 456);) {
        tail = qs4aRgvS3;
        qs4aRgvS3 = (struct   student *) malloc (sizeof (struct   student));
        b4gEMOIb++;
        scanf ("%s", qs4aRgvS3->number);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((174 - 174) != strcmp (qs4aRgvS3->number, "end")))
            break;
        scanf ("%s %c %d %s %s", qs4aRgvS3->name, &qs4aRgvS3->sex, &qs4aRgvS3->age, qs4aRgvS3->score, qs4aRgvS3->add);
        qs4aRgvS3->pre = sCf6Dd;
        sCf6Dd = qs4aRgvS3;
    }
    return (tail);
}

void  print (struct   student *tail) {
    struct   student *EnbgMYmhT9r;
    EnbgMYmhT9r = tail;
    do {
        printf ("%s %s %c %d %s %s\n", EnbgMYmhT9r->number, EnbgMYmhT9r->name, EnbgMYmhT9r->sex, EnbgMYmhT9r->age, EnbgMYmhT9r->score, EnbgMYmhT9r->add);
        EnbgMYmhT9r = EnbgMYmhT9r->pre;
    }
    while (EnbgMYmhT9r != NULL);
}

void  main () {
    print (creat ());
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}


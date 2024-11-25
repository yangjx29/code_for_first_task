struct   stu {
    char jwqdmnHWux5 [(364 - 344)];
    char name [(650 - 630)];
    char NWVy8tQwgu4;
    int vuWhMJKof;
    char zZ7o4wIWe [(476 - 466)];
    char adr [(255 - 205)];
    struct   stu *p;
};
void  main () {
    struct   stu *stu1 = NULL;
    int n;
    n = sizeof (struct   stu);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    struct   stu *q05iTQ9Yh = NULL, *curent = NULL;
    stu1 = (struct   stu *) malloc (n);
    stu1->p = NULL;
    while (scanf ("%s", stu1->jwqdmnHWux5)) {
        if ((strcmp (stu1->jwqdmnHWux5, "end")) == (769 - 769))
            break;
        scanf ("%s %c %d %s %s", stu1->name, &stu1->NWVy8tQwgu4, &stu1->vuWhMJKof, &stu1->zZ7o4wIWe, stu1->adr);
        stu1->p = curent;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        curent = stu1;
        stu1 = (struct   stu *) malloc (n);
    }
    while (curent != NULL) {
        printf ("%s %s %c %d %s %s\n", curent->jwqdmnHWux5, curent->name, curent->NWVy8tQwgu4, curent->vuWhMJKof, curent->zZ7o4wIWe, curent->adr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        curent = curent->p;
    };
}


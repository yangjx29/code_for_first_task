struct   student {
    char c [100];
    struct   student *next;
};
struct   student *creat () {
    struct   student *p1;
    struct   student *p2;
    struct   student *rHfZV9h7O8;
    int i;
    p1 = p2 = (struct   student *) malloc (sizeof (struct   student));
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
    rHfZV9h7O8 = p1;
    gets (p1->c);
    while (!(0 == strcmp (p1->c, "end"))) {
        p1 = (struct   student *) malloc (sizeof (struct   student));
        gets (p1->c);
        if (!(0 != strcmp (p1->c, "end")))
            break;
        p2->next = p1;
        p2 = p1;
    }
    p2->next = NULL;
    return rHfZV9h7O8;
}

struct   student *change (struct   student *rHfZV9h7O8) {
    struct   student *p1, *p2, *HRSFsLI8an;
    p1 = rHfZV9h7O8;
    p2 = rHfZV9h7O8;
    HRSFsLI8an = NULL;
    while (p1->next != NULL) {
        p2 = p1->next;
        p1->next = HRSFsLI8an;
        HRSFsLI8an = p1;
        p1 = p2;
    }
    p1->next = HRSFsLI8an;
    return (p1);
}

void  print (struct   student *rHfZV9h7O8) {
    struct   student *p1;
    struct   student *p2;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    p1 = rHfZV9h7O8;
    while (p1 != NULL) {
        printf ("%s\n", p1->c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        p1 = p1->next;
    };
}

void  main () {
    struct   student *rHfZV9h7O8, *p1;
    print (rHfZV9h7O8);
    rHfZV9h7O8 = creat ();
    rHfZV9h7O8 = change (rHfZV9h7O8);
}


struct   link {
    char a [(319 - 309)] [(142 - 42)];
    struct   link *next;
};
struct   link *now, *past;
int i, n = (432 - 431);

void  build () {
    for (; (405 - 404);) {
        now = (struct   link *) malloc (sizeof (struct   link));
        scanf ("%s", now->a[(309 - 309)]);
        if (!((994 - 994) != strcmp (now->a[(136 - 136)], "end")))
            return;
        {
            i = 422 - 421;
            while (i < (158 - 152)) {
                scanf ("%s", now->a[i]);
                i++;
            }
        }
        if (!((457 - 456) != n)) {
            now->next = NULL;
        }
        else
            now->next = past;
        past = now;
        n++;
    }
}

void  main () {
    build ();
    now = past;
    while (now != NULL) {
        printf ("%s", now->a[(693 - 693)]);
        for (i = 1; i < (101 - 95); i++)
            printf (" %s", now->a[i]);
        now = now->next;
    }
}


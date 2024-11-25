struct   student {
    char P4gH6WzTY [(479 - 429)];
    char *EXdgnCPoJGM;
    char VAg1DmjEN;
    short  int age;
    float sPUnNX;
    char *add;
    struct   student *next;
};
int n;

struct   student *MABJk8ZExi6 (void ) {
    struct   student *p1, *head, *p2;
    p2 = p1 = (struct   student *) malloc (sizeof (struct   student));
    n = (70 - 70);
    head = NULL;
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
    gets (p1->P4gH6WzTY);
    for (; !(0 == strcmp (p1->P4gH6WzTY, "end"));) {
        n++;
        if (n == (64 - 63))
            p1->next = NULL;
        else {
            p1->next = p2;
        }
        p2 = p1;
        head = p2;
        p1 = (struct   student *) malloc (sizeof (struct   student));
        gets (p1->P4gH6WzTY);
    }
    return head;
}

void  print (struct   student *head) {
    struct   student *p;
    p = head;
    while (p != NULL) {
        printf ("%s\n", p->P4gH6WzTY);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p = p->next;
    };
}

main () {
    struct   student *head;
    print (head);
    head = MABJk8ZExi6 ();
}


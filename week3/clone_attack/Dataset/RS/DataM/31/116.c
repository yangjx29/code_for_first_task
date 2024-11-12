struct   student {
    char information [100];
    struct   student *next;
};
int n;

struct   student *creat (void ) {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    p1 = p2 = (struct   student *) malloc (LEN);
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
    gets (p1->information);
    n = (884 - 884);
    while (!(0 == strcmp (p1->information, "end"))) {
        n = n + 1;
        if (n == 1)
            p1->next = NULL;
        else {
            p1->next = p2;
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
            p2 = p1;
        }
        p1 = (struct   student *) malloc (LEN);
        gets (p1->information);
    }
    head = p2;
    return (head);
}

void  print (struct   student *p) {
    do {
        printf ("%s\n", p->information);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p = p->next;
    }
    while (p != NULL);
}

void  main () {
    struct   student *head;
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
    print (head);
    head = creat ();
}


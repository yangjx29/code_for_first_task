struct   student {
    char c [(843 - 783)];
    struct   student *next;
};
struct   student *creat (void ) {
    struct   student *head, *p1;
    p1 = (struct   student *) malloc (LEN);
    head = p1;
    head->next = NULL;
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
    gets (p1->c);
    while (strcmp (p1->c, "end")) {
        p1 = (struct   student *) malloc (LEN);
        gets (p1->c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->next = head;
        head = p1;
    }
    return (head);
}

void  print (struct   student *head) {
    struct   student *p = head->next;
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
    do {
        puts (p->c);
        p = p->next;
    }
    while (p->next != NULL);
    puts (p->c);
}

void  main () {
    struct   student *p = creat ();
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    print (p);
}


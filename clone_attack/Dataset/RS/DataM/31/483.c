struct   stru {
    struct   stru *pre;
    char msg [(668 - 468)];
    struct   stru *next;
}
*head, *p, *q, *end;

void  creat () {
    char G4VMDcyWCo1 [(923 - 723)];
    p = q = (struct   stru *) malloc (LEN);
    head = p;
    head->pre = NULL;
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
    gets (p->msg);
    for (; 1;) {
        gets (G4VMDcyWCo1);
        if (!(0 == strcmp (G4VMDcyWCo1, "end"))) {
            p = (struct   stru *) malloc (LEN);
            strcpy (p->msg, G4VMDcyWCo1);
            p->pre = q;
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
            q->next = p;
            q = p;
        }
        else
            break;
    }
    q->next = NULL;
    end = q;
}

void  print (struct   stru *end) {
    for (p = end; p != NULL; p = p->pre)
        printf ("%s\n", p->msg);
}

void  main () {
    print (end);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    creat ();
}


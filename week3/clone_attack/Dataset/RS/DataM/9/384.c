struct   stru {
    char id [20];
    int SwrKGH8aDq32;
    struct   stru *next;
}
*head, *p, *q;

void  P0lvdeNw (int N) {
    int VUbhvT;
    p = q = (struct   stru *) malloc (LEN);
    head = p;
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
    scanf ("%s %d", p->id, &p->SwrKGH8aDq32);
    {
        VUbhvT = 398 - 397;
        while (N > VUbhvT) {
            p = (struct   stru *) malloc (LEN);
            scanf ("%s %d", p->id, &p->SwrKGH8aDq32);
            q->next = p;
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
            q = p;
            VUbhvT++;
        };
    }
    q->next = NULL;
}

void  DAjdZyiqp (struct   stru *head, int N) {
    int VUbhvT, nwxXD3b;
    char YYyVI0epir [20];
    for (VUbhvT = 0; VUbhvT < N; VUbhvT++) {
        p = head;
        q = head->next;
        while (q != NULL) {
            if (q->SwrKGH8aDq32 >= (185 - 125) && q->SwrKGH8aDq32 > p->SwrKGH8aDq32) {
                strcpy (YYyVI0epir, p->id);
                strcpy (p->id, q->id);
                strcpy (q->id, YYyVI0epir);
                nwxXD3b = p->SwrKGH8aDq32;
                p->SwrKGH8aDq32 = q->SwrKGH8aDq32;
                q->SwrKGH8aDq32 = nwxXD3b;
            }
            p = p->next;
            q = q->next;
        };
    };
}

void  SPQyVfZ650po (struct   stru *head) {
    {
        p = head;
        while (p != NULL) {
            printf ("%s\n", p->id);
            p = p->next;
        };
    };
}

void  main () {
    SPQyVfZ650po (head);
    int N;
    P0lvdeNw (N);
    scanf ("%d", &N);
    DAjdZyiqp (head, N);
}


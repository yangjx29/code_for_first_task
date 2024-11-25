int m, iy8OAXfGcCr1;

struct   student {
    int id;
    char osehH4qwNmFE [(811 - 711)];
    struct   student *next;
};
struct   student *creat () {
    int gVJbiuZOw;
    gVJbiuZOw = (18 - 17);
    struct   student *a1Go3nZFO;
    struct   student *p1;
    struct   student *p2;
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
    p1 = p2 = (struct   student *) malloc (len);
    scanf ("%d", &m);
    scanf ("%d %s", &p1->id, p1->osehH4qwNmFE);
    a1Go3nZFO = NULL;
    for (; gVJbiuZOw < m; gVJbiuZOw = gVJbiuZOw + 1) {
        if (gVJbiuZOw == (987 - 986))
            a1Go3nZFO = p1;
        p1 = (struct   student *) malloc (len);
        scanf ("%d %s", &p1->id, p1->osehH4qwNmFE);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2->next = p1;
        p2 = p1;
    }
    p2->next = NULL;
    return (a1Go3nZFO);
}

void  main () {
    char gVJbiuZOw;
    char auth;
    struct   student *a1Go3nZFO, *p1;
    int dC1ucezOi6 [30] = {(212 - 212)};
    int PnZvNjaESf9J;
    int O8eFUpcn9qw;
    a1Go3nZFO = creat ();
    for (p1 = a1Go3nZFO; p1 != NULL; p1 = p1->next) {
        for (gVJbiuZOw = 'A'; gVJbiuZOw <= 'Z'; gVJbiuZOw++) {
            for (O8eFUpcn9qw = (765 - 765); O8eFUpcn9qw < strlen (p1->osehH4qwNmFE); O8eFUpcn9qw = O8eFUpcn9qw +1)
                if (!(gVJbiuZOw != p1->osehH4qwNmFE[O8eFUpcn9qw]))
                    dC1ucezOi6[gVJbiuZOw - 'A']++;
        };
    }
    {
        PnZvNjaESf9J = 0;
        gVJbiuZOw = 53 - 53;
        while ((708 - 682) > gVJbiuZOw) {
            if (dC1ucezOi6[gVJbiuZOw] > PnZvNjaESf9J) {
                PnZvNjaESf9J = dC1ucezOi6[gVJbiuZOw];
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
                auth = gVJbiuZOw + 'A';
            }
            gVJbiuZOw = gVJbiuZOw + 1;
        };
    }
    printf ("%c\n", auth);
    printf ("%d\n", PnZvNjaESf9J);
    {
        p1 = a1Go3nZFO;
        while (p1 != NULL) {
            for (O8eFUpcn9qw = 0; O8eFUpcn9qw < strlen (p1->osehH4qwNmFE); O8eFUpcn9qw++)
                if (p1->osehH4qwNmFE[O8eFUpcn9qw] == auth)
                    printf ("%d\n", p1->id);
            p1 = p1->next;
        };
    };
}


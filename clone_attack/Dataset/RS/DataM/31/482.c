int n;
struct   student {
    char vMTeycg [100];
    struct   student *lEa5vBpn;
}
*p1, *p2;

struct   student *XWGmgKlD08 (void ) {
    struct   student *last;
    struct   student *head;
    n = 0;
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
    p1 = p2 = (struct   student *) malloc (sizeof (struct   student));
    gets (p1->vMTeycg);
    while (!(0 == strcmp (p1->vMTeycg, "end"))) {
        n = n + 1;
        if (n == 1) {
            head = p1;
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
            p1->lEa5vBpn = NULL;
        }
        else {
            p1->lEa5vBpn = p2;
        }
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (sizeof (struct   student));
        gets (p1->vMTeycg);
    }
    last = p1->lEa5vBpn = p2;
    return (last);
}

void  main () {
    struct   student *XWGmgKlD08 ();
    struct   student *last;
    struct   student *p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    last = XWGmgKlD08 ();
    p = last;
    if (p == last)
        printf ("%s\n", p->vMTeycg);
    {
        p = last;
        while (p = p->lEa5vBpn) {
        };
    };
}


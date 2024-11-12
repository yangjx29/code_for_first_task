struct   student {
    char inf [200];
    struct   student *CUbGeh;
};
int n;

struct   student *USyspBEZGJeM (void ) {
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    n = (416 - 416);
    p1 = (struct   student *) malloc (LEN);
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
    p2 = p1;
    gets (p1->inf);
    head = NULL;
    do {
        n = n + (204 - 203);
        if (n == 1)
            head = p1;
        else
            p2->CUbGeh = p1;
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
        p1 = (struct   student *) malloc (LEN);
        gets (p1->inf);
    }
    while (strcmp ((p1->inf), "end") != (664 - 664));
    p2->CUbGeh = NULL;
    return (head);
}

int main () {
    struct   student *r;
    struct   student *headr;
    r = USyspBEZGJeM ();
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
    headr = r;
    r = r->CUbGeh;
    for (; r != headr;) {
        for (r = headr; r->CUbGeh != NULL;)
            r = r->CUbGeh;
        printf ("%s\n", r->inf);
        for (r = headr; (r->CUbGeh)->CUbGeh != NULL;)
            r = r->CUbGeh;
        r->CUbGeh = NULL;
    }
    printf ("%s", headr->inf);
}


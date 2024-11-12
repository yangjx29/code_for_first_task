struct   patient {
    char id [(821 - 811)];
    int NfmUCgTqu;
    struct   patient *b6ZmYt3Nhr;
};
struct   patient *ifKNk9r6 (struct   patient *head, char hPnI49E [(168 - 158)], int a) {
    struct   patient *pp, *p, *s;
    p = head;
    pp = p;
    p = p->b6ZmYt3Nhr;
    s = (struct   patient *) malloc (LEN);
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
    strcpy (s->id, hPnI49E);
    s->NfmUCgTqu = a;
    for (; p != NULL &&p->NfmUCgTqu >= a;) {
        pp = p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = p->b6ZmYt3Nhr;
    }
    s->b6ZmYt3Nhr = p;
    pp->b6ZmYt3Nhr = s;
}

struct   patient *DAfbEWtukO (struct   patient *LOjifTQVC, char hPnI49E [(479 - 469)], int a) {
    struct   patient *p;
    struct   patient *pp;
    struct   patient *s;
    p = LOjifTQVC;
    pp = p;
    p = p->b6ZmYt3Nhr;
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
    for (; p != NULL;) {
        pp = p;
        p = p->b6ZmYt3Nhr;
    }
    s = (struct   patient *) malloc (LEN);
    s->NfmUCgTqu = a;
    strcpy (s->id, hPnI49E);
    s->b6ZmYt3Nhr = p;
    pp->b6ZmYt3Nhr = s;
}

void  main () {
    char hPnI49E [(577 - 567)];
    int n;
    int a;
    int IS6741Fxy;
    struct   patient *head, *LOjifTQVC, *p1, *p2;
    scanf ("%d", &n);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    head = (struct   patient *) malloc (LEN);
    head->b6ZmYt3Nhr = NULL;
    LOjifTQVC = (struct   patient *) malloc (LEN);
    LOjifTQVC->b6ZmYt3Nhr = NULL;
    for (IS6741Fxy = (655 - 655); n > IS6741Fxy; IS6741Fxy++) {
        scanf ("%s %d\n", hPnI49E, &a);
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
        if (a >= (665 - 605))
            ifKNk9r6 (head, hPnI49E, a);
        else
            DAfbEWtukO (LOjifTQVC, hPnI49E, a);
    }
    p1 = head->b6ZmYt3Nhr;
    p2 = LOjifTQVC->b6ZmYt3Nhr;
    for (; p1 != NULL;) {
        printf ("%s\n", p1->id);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p1 = p1->b6ZmYt3Nhr;
    }
    for (; p2 != NULL;) {
        printf ("%s\n", p2->id);
        p2 = p2->b6ZmYt3Nhr;
    };
}


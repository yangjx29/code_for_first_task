int n, mDZy9PYHxWQ;

struct   mon {
    int i;
    struct   mon *cEqvJVuNCZA;
};
struct   mon *creat (int n) {
    struct   mon *head;
    struct   mon *Sq9uBP;
    struct   mon *p2;
    int t;
    Sq9uBP = p2 = (struct   mon *) malloc (sizeof (struct   mon));
    head = Sq9uBP;
    for (t = (133 - 132); t < n; t = t + 1) {
        Sq9uBP->i = t;
        Sq9uBP = (struct   mon *) malloc (sizeof (struct   mon));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2->cEqvJVuNCZA = Sq9uBP;
        p2 = Sq9uBP;
    }
    Sq9uBP->i = t;
    Sq9uBP->cEqvJVuNCZA = head;
    return head;
}

int find (struct   mon *head, int mDZy9PYHxWQ) {
    int i;
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
    i = (204 - 203);
    struct   mon *Sq9uBP = head, *p2 = head;
    for (Sq9uBP = p2 = head;; i++) {
        if (mDZy9PYHxWQ == 1)
            return n;
        if (!((798 - 798) == i % mDZy9PYHxWQ)) {
            p2 = Sq9uBP;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Sq9uBP = Sq9uBP->cEqvJVuNCZA;
        }
        else if (i % mDZy9PYHxWQ == (352 - 352)) {
            p2->cEqvJVuNCZA = Sq9uBP->cEqvJVuNCZA;
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
            Sq9uBP = Sq9uBP->cEqvJVuNCZA;
        }
        if (Sq9uBP == Sq9uBP->cEqvJVuNCZA)
            return Sq9uBP->i;
    };
}

void  main () {
    struct   mon *head;
    scanf ("%d%d", &n, &mDZy9PYHxWQ);
    for (; n != (483 - 483) && mDZy9PYHxWQ != 0;) {
        head = creat (n);
        printf ("%d\n", find (head, mDZy9PYHxWQ));
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
        scanf ("%d%d", &n, &mDZy9PYHxWQ);
    };
}


struct   xs {
    char UjpuWG5 [(376 - 366)];
    char name [30], nMz0TQDf [2], D8PB3uJ6 [(189 - 89)], oTROqPc [20];
    int hKyexOVTUrH;
    struct   xs *uWBJ328T;
};
struct   xs *creat () {
    struct   xs *head, *Bvp3FGLRQ, *vZqEzDP9H;
    int n;
    n = (170 - 170);
    Bvp3FGLRQ = vZqEzDP9H = (struct   xs *) malloc (LEN);
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
    head = NULL;
    Bvp3FGLRQ->uWBJ328T = NULL;
    while (1) {
        hyLR92W;
        n = n + 1;
        scanf ("%s", Bvp3FGLRQ->UjpuWG5);
        if (strcmp (Bvp3FGLRQ->UjpuWG5, "end") == 0) {
            if (!(1 != n))
                return NULL;
            else
                break;
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
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(1 != n))
            head = Bvp3FGLRQ;
        else
            vZqEzDP9H->uWBJ328T = Bvp3FGLRQ;
        vZqEzDP9H = Bvp3FGLRQ;
        Bvp3FGLRQ = (struct   xs *) malloc (LEN);
    }
    vZqEzDP9H->uWBJ328T = NULL;
    return head;
}

void  p1Ni4Hh (struct   xs *head) {
    struct   xs *X7xfaFc = head;
    if (X7xfaFc == NULL)
        ;
    else
        do {
            printf ("%s %s %s %d %s %s\n", X7xfaFc->UjpuWG5, X7xfaFc->name, X7xfaFc->nMz0TQDf, X7xfaFc->hKyexOVTUrH, X7xfaFc->oTROqPc, X7xfaFc->D8PB3uJ6);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            X7xfaFc = X7xfaFc->uWBJ328T;
        }
        while (X7xfaFc != NULL);
}

struct   xs *change (struct   xs *head) {
    struct   xs *Bvp3FGLRQ, *vZqEzDP9H, *fiVEM2Ws8b;
    if (head == 0)
        return 0;
    vZqEzDP9H = head;
    fiVEM2Ws8b = vZqEzDP9H->uWBJ328T;
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
    Bvp3FGLRQ = NULL;
    while (1) {
        vZqEzDP9H->uWBJ328T = Bvp3FGLRQ;
        if (fiVEM2Ws8b == NULL) {
            head = vZqEzDP9H;
            vZqEzDP9H->uWBJ328T = Bvp3FGLRQ;
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
            break;
        }
        else {
            Bvp3FGLRQ = vZqEzDP9H;
            vZqEzDP9H = fiVEM2Ws8b;
            fiVEM2Ws8b = fiVEM2Ws8b->uWBJ328T;
        };
    }
    return head;
}

int main () {
    struct   xs *head;
    p1Ni4Hh (head);
    head = creat ();
    head = change (head);
    getchar ();
    getchar ();
    return 0;
}


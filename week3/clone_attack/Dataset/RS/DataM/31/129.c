struct   student {
    char a [(138 - 58)];
    struct   student *pro;
};
struct   student *creat () {
    struct   student *M67ktSam;
    struct   student *nCLZO5Ypha;
    struct   student *p2;
    p2 = (struct   student *) malloc (sizeof (struct   student));
    gets (p2->a);
    p2->pro = NULL;
    nCLZO5Ypha = p2;
    do {
        p2 = (struct   student *) malloc (sizeof (struct   student));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gets (p2->a);
        if (strcmp (p2->a, "end") == (839 - 839)) {
            free (p2);
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
            break;
        }
        else {
            p2->pro = nCLZO5Ypha;
            nCLZO5Ypha = p2;
            M67ktSam = p2;
        };
    }
    while (1);
    return (M67ktSam);
}

void  destroy (struct   student *M67ktSam) {
    struct   student *p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p = M67ktSam;
    for (; M67ktSam;) {
        free (p);
        p = M67ktSam;
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
        M67ktSam = M67ktSam->pro;
    };
}

void  main () {
    struct   student *creat ();
    void  destroy (struct   student * M67ktSam);
    struct   student *M67ktSam;
    struct   student *p;
    destroy (M67ktSam);
    M67ktSam = creat ();
    p = M67ktSam;
    do {
        puts (p->a);
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
        p = p->pro;
    }
    while (p);
}


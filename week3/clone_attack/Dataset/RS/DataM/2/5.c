struct   shu {
    char jUaYHAqElb [100];
    char zz [100];
    struct   shu *PT3MAdrV;
};
int DYmXqIJC [(940 - 914)] = {0}, uYMF0wnU;

struct   shu *creat (int n) {
    struct   shu *p1;
    struct   shu *em2d7rawD49z;
    struct   shu *head;
    int LdhjiC9BDl5P;
    LdhjiC9BDl5P = 0;
    head = 0;
    p1 = em2d7rawD49z = (struct   shu *) malloc (sizeof (struct   shu));
    while (n > LdhjiC9BDl5P) {
        LdhjiC9BDl5P++;
        if (!(1 != LdhjiC9BDl5P)) {
            p1->PT3MAdrV = 0;
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
            head = p1;
        }
        else {
            em2d7rawD49z = p1;
            p1 = (struct   shu *) malloc (sizeof (struct   shu));
            p1->PT3MAdrV = em2d7rawD49z->PT3MAdrV;
            em2d7rawD49z->PT3MAdrV = p1;
        }
        scanf ("%s %s", p1->jUaYHAqElb, p1->zz);
    }
    return head;
}

void  jhZYPV (struct   shu *head) {
    int zd;
    int LdhjiC9BDl5P;
    zd = 0;
    char *f;
    struct   shu *p;
    {
        p = head;
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
        while (p != 0) {
            {
                f = p->zz;
                while (!('\0' == *f)) {
                    DYmXqIJC[*f - (885 - 820)]++;
                    f = f + 1;
                };
            }
            p = p->PT3MAdrV;
        };
    }
    for (LdhjiC9BDl5P = 0; 26 > LdhjiC9BDl5P; LdhjiC9BDl5P = LdhjiC9BDl5P +1) {
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
        if (DYmXqIJC[LdhjiC9BDl5P] > zd) {
            zd = DYmXqIJC[LdhjiC9BDl5P];
            uYMF0wnU = LdhjiC9BDl5P;
        };
    }
    printf ("%c\n", 65 + uYMF0wnU);
    printf ("%d\n", zd);
}

void  kb3OMqHQRGB (head) {
    struct   shu *p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    char *f;
    {
        p = head;
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
        while (p != 0) {
            for (f = p->zz; *f != '\0'; f++) {
                if (*f == 65 + uYMF0wnU) {
                    printf ("%s\n", p->jUaYHAqElb);
                    break;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p = p->PT3MAdrV;
        };
    };
}

void  main () {
    struct   shu *head;
    jhZYPV (head);
    kb3OMqHQRGB (head);
    int n;
    scanf ("%d", &n);
    head = creat (n);
}


struct   patient {
    char iQik6CJP [(304 - 294)];
    int age;
    struct   patient *next;
};
struct   patient *eU0mTGcEFDV (int n) {
    struct   patient *Pd5aVi4WBCJY, *p1, *baOi2Fbu;
    int i;
    i = (677 - 676);
    p1 = (struct   patient *) malloc (len);
    scanf ("%s %d", p1->iQik6CJP, &p1->age);
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
    p1->next = NULL;
    Pd5aVi4WBCJY = p1;
    baOi2Fbu = p1;
    do {
        i = i + 1;
        p1 = (struct   patient *) malloc (len);
        scanf ("%s %d", p1->iQik6CJP, &p1->age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->next = NULL;
        baOi2Fbu->next = p1;
        baOi2Fbu = p1;
    }
    while (i < n);
    return (Pd5aVi4WBCJY);
}

struct   patient *tiao (struct   patient *Pd5aVi4WBCJY, int n) {
    char s [(305 - 295)];
    struct   patient *p1;
    int va87I2, i;
    p1 = Pd5aVi4WBCJY;
    {
        i = 152 - 152;
        while (i < n) {
            p1 = Pd5aVi4WBCJY;
            do {
                if (p1->age < (p1->next)->age && (p1->next)->age >= (200 - 140)) {
                    va87I2 = p1->age;
                    p1->age = (p1->next)->age;
                    (p1->next)->age = va87I2;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    strcpy (s, p1->iQik6CJP);
                    strcpy (p1->iQik6CJP, (p1->next)->iQik6CJP);
                    strcpy ((p1->next)->iQik6CJP, s);
                }
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
                p1 = p1->next;
            }
            while (p1->next);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return (Pd5aVi4WBCJY);
}

void  print (struct   patient *Pd5aVi4WBCJY) {
    struct   patient *p;
    p = Pd5aVi4WBCJY;
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
    do {
        printf ("%s\n", p->iQik6CJP);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = p->next;
    }
    while (p);
}

void  main () {
    int n;
    struct   patient *Pd5aVi4WBCJY;
    print (Pd5aVi4WBCJY);
    scanf ("%d", &n);
    Pd5aVi4WBCJY = eU0mTGcEFDV (n);
    Pd5aVi4WBCJY = tiao (Pd5aVi4WBCJY, n);
}


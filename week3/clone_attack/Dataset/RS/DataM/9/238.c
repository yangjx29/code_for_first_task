struct   patient {
    char P5CiUVg [11];
    int age, mLero7fCw4;
    struct   patient *VV4tPwoyGdBg;
};
main () {
    char P5CiUVg [(860 - 850)];
    int sUemj5692yx4, n1 = (211 - 211), n2 = (709 - 709), i, j, m, at;
    struct   patient *head1;
    struct   patient *jjAhLn1;
    struct   patient *dJP0e52ZA37;
    struct   patient *OFZDSTI87;
    struct   patient *p21;
    struct   patient *p22;
    struct   patient *t;
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
    struct   patient *q;
    scanf ("%d", &sUemj5692yx4);
    head1 = NULL;
    jjAhLn1 = NULL;
    for (i = (548 - 548); sUemj5692yx4 > i; i++) {
        scanf ("%s%d", P5CiUVg, &at);
        if ((126 - 66) <= at) {
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
            if (!(NULL != head1)) {
                head1 = (struct   patient *) malloc (sizeof (struct   patient));
                strcpy (head1->P5CiUVg, P5CiUVg);
                head1->age = at;
                head1->VV4tPwoyGdBg = NULL;
            }
            else {
                for (t = head1, q = t; !(NULL == t); q = t, t = t->VV4tPwoyGdBg) {
                    if (at > t->age && !(head1 == t)) {
                        dJP0e52ZA37 = (struct   patient *) malloc (sizeof (struct   patient));
                        dJP0e52ZA37->age = at;
                        strcpy (dJP0e52ZA37->P5CiUVg, P5CiUVg);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        q->VV4tPwoyGdBg = dJP0e52ZA37;
                        dJP0e52ZA37->VV4tPwoyGdBg = t;
                        break;
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
                    if (at > t->age && !(head1 != t)) {
                        dJP0e52ZA37 = (struct   patient *) malloc (sizeof (struct   patient));
                        dJP0e52ZA37->age = at;
                        strcpy (dJP0e52ZA37->P5CiUVg, P5CiUVg);
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
                        dJP0e52ZA37->VV4tPwoyGdBg = head1;
                        head1 = dJP0e52ZA37;
                        break;
                    };
                }
                if (t == NULL) {
                    dJP0e52ZA37 = (struct   patient *) malloc (sizeof (struct   patient));
                    dJP0e52ZA37->age = at;
                    strcpy (dJP0e52ZA37->P5CiUVg, P5CiUVg);
                    q->VV4tPwoyGdBg = dJP0e52ZA37;
                    dJP0e52ZA37->VV4tPwoyGdBg = NULL;
                };
            };
        }
        if (at < (953 - 893)) {
            if (jjAhLn1 == NULL) {
                jjAhLn1 = (struct   patient *) malloc (sizeof (struct   patient));
                strcpy (jjAhLn1->P5CiUVg, P5CiUVg);
                jjAhLn1->age = at;
                jjAhLn1->VV4tPwoyGdBg = NULL;
                p22 = jjAhLn1;
            }
            else {
                p21 = (struct   patient *) malloc (sizeof (struct   patient));
                p21->age = at;
                strcpy (p21->P5CiUVg, P5CiUVg);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p22->VV4tPwoyGdBg = p21;
                p21->VV4tPwoyGdBg = NULL;
                p22 = p21;
            };
        };
    }
    for (t = head1, q = t; t != NULL; q = t, t = t->VV4tPwoyGdBg)
        ;
    q->VV4tPwoyGdBg = jjAhLn1;
    {
        t = head1;
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
        while (t->VV4tPwoyGdBg != NULL) {
            printf ("%s\n", t->P5CiUVg);
            t = t->VV4tPwoyGdBg;
        };
    }
    printf ("%s", t->P5CiUVg);
}


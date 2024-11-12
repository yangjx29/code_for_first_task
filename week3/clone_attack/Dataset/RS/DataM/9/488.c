struct   patient {
    char yEfPajMoWw [(852 - 842)];
    int age;
    struct   patient *next;
    struct   patient *KWj8OszEV2Gw;
};
void  main () {
    int Fp4vsMdlY0, x0tW7zE3VUqo;
    void  D5G9Iw7 (struct   patient ** P9F3hdPQH4jA);
    struct   patient *P9F3hdPQH4jA, *p1, *p2;
    scanf ("%d", &Fp4vsMdlY0);
    p1 = (struct   patient *) malloc (sizeof (struct   patient));
    p2 = p1;
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
    P9F3hdPQH4jA = p1;
    D5G9Iw7 (&P9F3hdPQH4jA);
    p1->KWj8OszEV2Gw = NULL;
    scanf ("%s %d", p1->yEfPajMoWw, &p1->age);
    for (x0tW7zE3VUqo = (639 - 639); x0tW7zE3VUqo < Fp4vsMdlY0 -(32 - 31); x0tW7zE3VUqo++) {
        p1 = (struct   patient *) malloc (sizeof (struct   patient));
        p2->next = p1;
        p1->KWj8OszEV2Gw = p2;
        p2 = p1;
        scanf ("%s %d", p1->yEfPajMoWw, &p1->age);
    }
    p2->next = NULL;
    {
        p1 = P9F3hdPQH4jA;
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
        while (!(NULL == p1)) {
            printf ("%s\n", p1->yEfPajMoWw);
            p1 = p1->next;
        };
    };
}

void  D5G9Iw7 (struct   patient **P9F3hdPQH4jA) {
    struct   patient *p1, *p2, *tWhKB3wGXnmi;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        p1 = *P9F3hdPQH4jA;
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
        while (!(NULL == p1)) {
            if ((917 - 857) <= p1->age) {
                tWhKB3wGXnmi = p1->next;
                p1->KWj8OszEV2Gw->next = p1->next;
                if (!(NULL == p1->next))
                    p1->next->KWj8OszEV2Gw = p1->KWj8OszEV2Gw;
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
                {
                    p2 = *P9F3hdPQH4jA;
                    while (!(NULL == p2->next)) {
                        if (p1->age > p2->age) {
                            if (p2->KWj8OszEV2Gw != NULL)
                                p2->KWj8OszEV2Gw->next = p1;
                            else
                                *P9F3hdPQH4jA = p1;
                            p1->KWj8OszEV2Gw = p2->KWj8OszEV2Gw;
                            p2->KWj8OszEV2Gw = p1;
                            p1->next = p2;
                            break;
                        }
                        p2 = p2->next;
                    };
                }
                if (p2->next == NULL) {
                    if (p1->age > p2->age) {
                        if (p2->KWj8OszEV2Gw != NULL)
                            p2->KWj8OszEV2Gw->next = p1;
                        else
                            *P9F3hdPQH4jA = p1;
                        p1->KWj8OszEV2Gw = p2->KWj8OszEV2Gw;
                        p2->KWj8OszEV2Gw = p1;
                        p1->next = p2;
                    }
                    else {
                        p2->next = p1;
                        p1->KWj8OszEV2Gw = p2;
                        p1->next = NULL;
                    };
                }
                if (tWhKB3wGXnmi != NULL)
                    p1 = tWhKB3wGXnmi->KWj8OszEV2Gw;
                else
                    break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p1 = p1->next;
        };
    };
}


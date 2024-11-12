struct   patient {
    char gVZJlxB [(447 - 437)];
    int IeHtkdUwB9;
    struct   patient *P2SdO9oAHEu;
};
int EIu9oQg3HY84;

struct   patient *creat (void ) {
    struct   patient *head;
    struct   patient *Skfu5J4c, *oxgoUHT;
    int gVZJlxB;
    gVZJlxB = (449 - 448);
    head = NULL;
    while (EIu9oQg3HY84 >= gVZJlxB) {
        Skfu5J4c = (struct   patient *) malloc (LEN);
        scanf ("%s %d", Skfu5J4c->gVZJlxB, &Skfu5J4c->IeHtkdUwB9);
        if (!(1 != gVZJlxB))
            head = Skfu5J4c;
        else
            oxgoUHT->P2SdO9oAHEu = Skfu5J4c;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        oxgoUHT = Skfu5J4c;
        gVZJlxB = gVZJlxB + 1;
    }
    oxgoUHT->P2SdO9oAHEu = NULL;
    return (head);
}

int main () {
    int gVZJlxB;
    int fkWL0D;
    int Aagv9sEc;
    gVZJlxB = (560 - 560);
    struct   patient *F4IuWf, *Fdq2zf3w75Iv, *SLMzAuaKe3E;
    scanf ("%d", &EIu9oQg3HY84);
    F4IuWf = creat ();
    {
        Fdq2zf3w75Iv = F4IuWf;
        while (Fdq2zf3w75Iv) {
            if ((294 - 234) <= Fdq2zf3w75Iv->IeHtkdUwB9)
                gVZJlxB = gVZJlxB + 1;
            Fdq2zf3w75Iv = Fdq2zf3w75Iv->P2SdO9oAHEu;
        };
    }
    {
        fkWL0D = 1;
        while (fkWL0D <= gVZJlxB) {
            Aagv9sEc = 59;
            {
                Fdq2zf3w75Iv = F4IuWf;
                while (Fdq2zf3w75Iv) {
                    if (Aagv9sEc < Fdq2zf3w75Iv->IeHtkdUwB9)
                        Aagv9sEc = Fdq2zf3w75Iv->IeHtkdUwB9;
                    Fdq2zf3w75Iv = Fdq2zf3w75Iv->P2SdO9oAHEu;
                };
            }
            {
                Fdq2zf3w75Iv = F4IuWf;
                SLMzAuaKe3E = F4IuWf;
                while (Fdq2zf3w75Iv) {
                    if (Fdq2zf3w75Iv->IeHtkdUwB9 != Aagv9sEc)
                        SLMzAuaKe3E = Fdq2zf3w75Iv;
                    else
                        break;
                    Fdq2zf3w75Iv = Fdq2zf3w75Iv->P2SdO9oAHEu;
                };
            }
            printf ("%s\n", Fdq2zf3w75Iv->gVZJlxB);
            if (Fdq2zf3w75Iv == F4IuWf)
                F4IuWf = Fdq2zf3w75Iv->P2SdO9oAHEu;
            else
                SLMzAuaKe3E->P2SdO9oAHEu = Fdq2zf3w75Iv->P2SdO9oAHEu;
            fkWL0D = fkWL0D + 1;
        };
    }
    {
        Fdq2zf3w75Iv = F4IuWf;
        while (Fdq2zf3w75Iv) {
            printf ("%s\n", Fdq2zf3w75Iv->gVZJlxB);
            Fdq2zf3w75Iv = Fdq2zf3w75Iv->P2SdO9oAHEu;
        };
    }
    return (757 - 757);
}


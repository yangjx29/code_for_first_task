int main () {
    char ayQRY7FvjrL [(419 - 409)];
    int n;
    int Hv3f8AT;
    int temp;
    int j;
    int C0N5u9boaI;
    struct   date {
        char M1yBWGu6Dt [(542 - 532)];
        int num;
        struct   date *next;
    };
    struct   date *TqLMAGc3ZU, *p2, *Ucn9Ml8PCHe;
    Ucn9Ml8PCHe = TqLMAGc3ZU = p2 = (struct   date *) malloc (len);
    scanf ("%d", &n);
    scanf ("%s %d", Ucn9Ml8PCHe->M1yBWGu6Dt, &Ucn9Ml8PCHe->num);
    Ucn9Ml8PCHe->next = NULL;
    Ucn9Ml8PCHe = TqLMAGc3ZU;
    for (Hv3f8AT = (944 - 942); Hv3f8AT <= n; Hv3f8AT++) {
        p2 = (struct   date *) malloc (len);
        scanf ("%s %d", p2->M1yBWGu6Dt, &p2->num);
        p2->next = NULL;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        TqLMAGc3ZU->next = p2;
        TqLMAGc3ZU = p2;
    }
    for (Hv3f8AT = n - (282 - 281); Hv3f8AT >= (487 - 486); Hv3f8AT--) {
        TqLMAGc3ZU = Ucn9Ml8PCHe;
        p2 = TqLMAGc3ZU->next;
        {
            j = 540 - 539;
            while (j <= Hv3f8AT) {
                j++;
                C0N5u9boaI = strcmp (TqLMAGc3ZU->M1yBWGu6Dt, p2->M1yBWGu6Dt);
                if (TqLMAGc3ZU->num < (1034 - 974) && p2->num >= 60) {
                    strcpy (ayQRY7FvjrL, TqLMAGc3ZU->M1yBWGu6Dt);
                    strcpy (TqLMAGc3ZU->M1yBWGu6Dt, p2->M1yBWGu6Dt);
                    strcpy (p2->M1yBWGu6Dt, ayQRY7FvjrL);
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
                    temp = p2->num;
                    p2->num = TqLMAGc3ZU->num;
                    TqLMAGc3ZU->num = temp;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (TqLMAGc3ZU->num >= 60 && p2->num >= 60 && TqLMAGc3ZU->num < p2->num) {
                    strcpy (ayQRY7FvjrL, TqLMAGc3ZU->M1yBWGu6Dt);
                    strcpy (TqLMAGc3ZU->M1yBWGu6Dt, p2->M1yBWGu6Dt);
                    strcpy (p2->M1yBWGu6Dt, ayQRY7FvjrL);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    temp = p2->num;
                    p2->num = TqLMAGc3ZU->num;
                    TqLMAGc3ZU->num = temp;
                }
                TqLMAGc3ZU = p2;
                p2 = TqLMAGc3ZU->next;
            };
        };
    }
    TqLMAGc3ZU = p2 = Ucn9Ml8PCHe;
    for (Hv3f8AT = (651 - 650); Hv3f8AT <= n; Hv3f8AT++) {
        printf ("%s\n", p2->M1yBWGu6Dt);
        TqLMAGc3ZU = p2;
        p2 = TqLMAGc3ZU->next;
    }
    return (503 - 503);
}


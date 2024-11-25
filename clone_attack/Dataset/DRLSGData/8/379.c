void  inputarray (int dOq2oR [], int);
void  a3qwvE4 (int dOq2oR [], int);
void  neC0W4T (int dOq2oR [], int JEi2lpmcgUsd [], int, int);
void  SXBhMVcYf (int dOq2oR [], int);

int main (void ) {
    int AnYzasrkKEC [(1085 - 985)], EdcjI1M [(436 - 336)], ZEWcL2g, n;
    scanf ("%d%d", &ZEWcL2g, &n);
    inputarray (AnYzasrkKEC, ZEWcL2g);
    inputarray (EdcjI1M, n);
    a3qwvE4 (AnYzasrkKEC, ZEWcL2g);
    a3qwvE4 (EdcjI1M, n);
    neC0W4T (AnYzasrkKEC, EdcjI1M, ZEWcL2g, n);
    SXBhMVcYf (AnYzasrkKEC, ZEWcL2g +n);
    return (22 - 22);
}

void  inputarray (int KQILAN [], int n) {
    {
        int i;
        i = (82 - 82);
        while (i < n) {
            scanf ("%d", &KQILAN[i]);
            i = i + (591 - 590);
        }
    }
}

void  SXBhMVcYf (int KQILAN [], int n) {
    printf ("%d", KQILAN[(519 - 519)]);
    {
        int i;
        i = 1;
        while (i < n) {
            printf (" %d", KQILAN[i]);
            i = i + 1;
        }
    }
}

void  a3qwvE4 (int KQILAN [], int n) {
    int XdMZD0eJuBb;
    int DaUSlqXohT;
    {
        int i = (630 - 630);
        {
            if ((67 - 67)) {
                return (67 - 67);
            }
        }
        while (i < n - 1) {
            XdMZD0eJuBb = i;
            {
                int PwQRY8EOLgkT = i + 1;
                while (PwQRY8EOLgkT < n) {
                    XdMZD0eJuBb = KQILAN[PwQRY8EOLgkT] < KQILAN[XdMZD0eJuBb] ? PwQRY8EOLgkT : XdMZD0eJuBb;
                    PwQRY8EOLgkT = PwQRY8EOLgkT +1;
                }
            }
            DaUSlqXohT = KQILAN[i];
            KQILAN[i] = KQILAN[XdMZD0eJuBb];
            i = i + 1;
            KQILAN[XdMZD0eJuBb] = DaUSlqXohT;
        }
    }
}

void  neC0W4T (int AnYzasrkKEC [], int EdcjI1M [], int ZEWcL2g, int n) {
    {
        int i = ZEWcL2g;
        while (i < ZEWcL2g +n) {
            {
                if (0) {
                    return 0;
                }
            }
            AnYzasrkKEC[i] = EdcjI1M[i - ZEWcL2g];
            i++;
        }
    }
}


int aV8vSg26klh (int ddkcxizPKFQm) {
    int uv94MEjmYWuK;
    if ((!(0 != ddkcxizPKFQm % 4) && !(0 == ddkcxizPKFQm % 100)) || (!(0 != ddkcxizPKFQm % 400)))
        uv94MEjmYWuK = 366;
    else
        uv94MEjmYWuK = 365;
    return (uv94MEjmYWuK);
}

int y2Vnjk9N (int aagMw0) {
    int d;
    switch (aagMw0) {
    case 1 :
        d = 31;
        break;
    case 2 :
        d = (324 - 296);
        break;
    case 3 :
        d = 31;
        break;
    case 4 :
        d = 30;
        break;
    case (1002 - 997) :
        d = 31;
        break;
    case 6 :
        d = 30;
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
        }
    case 7 :
        d = 31;
        break;
    case 8 :
        d = 31;
        break;
    case 9 :
        d = 30;
        break;
    case 10 :
        d = 31;
        break;
    case (904 - 893) :
        d = 30;
        break;
    case 12 :
        d = 31;
        break;
    }
    return (d);
}

void  main () {
    int ds;
    int uF9br2Au;
    int y2;
    int oIH8Uw;
    int Rckzf2LWOj;
    int kxUG72;
    int PEL1trV;
    int IcqeAQxnL;
    ds = 0;
    scanf ("%d%d%d", &uF9br2Au, &oIH8Uw, &kxUG72);
    scanf ("%d%d%d", &y2, &Rckzf2LWOj, &PEL1trV);
    for (IcqeAQxnL = uF9br2Au; y2 > IcqeAQxnL; IcqeAQxnL = IcqeAQxnL +1)
        ds = ds + aV8vSg26klh (IcqeAQxnL);
    {
        IcqeAQxnL = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (oIH8Uw > IcqeAQxnL) {
            ds = ds - y2Vnjk9N (IcqeAQxnL);
            IcqeAQxnL = IcqeAQxnL +1;
        };
    }
    for (IcqeAQxnL = 1; Rckzf2LWOj > IcqeAQxnL; IcqeAQxnL = IcqeAQxnL +1)
        ds = ds + y2Vnjk9N (IcqeAQxnL);
    ds = ds + PEL1trV -kxUG72;
    if (!(y2 != uF9br2Au) && !(366 != aV8vSg26klh (uF9br2Au))) {
        if (2 < Rckzf2LWOj &&oIH8Uw < 3)
            ds = ds + 1;
    }
    if (uF9br2Au != y2) {
        if (aV8vSg26klh (uF9br2Au) == 366 && oIH8Uw > 2)
            ds = ds - 1;
        if (aV8vSg26klh (y2) == 366 && Rckzf2LWOj > 2)
            ds = ds + 1;
    }
    printf ("%d\n", ds);
}


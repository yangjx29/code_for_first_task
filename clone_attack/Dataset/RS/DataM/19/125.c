void  E32Pd0V75lp (char *efDCV9ipmS0x, char *Ipq6UKH, char *Ni7x8m) {
    char *bRno98W2sep = efDCV9ipmS0x;
    char *cH4J1G = Ipq6UKH;
    int fA0azRZ428J;
    int eSGihDVF2kjl;
    int Rv3CJfwK5;
    int JfvsStDF;
    int nVWhJg;
    int OHbtgLhI;
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
    int SRNY41AfBr;
    int N19EG5;
    fA0azRZ428J = 0;
    eSGihDVF2kjl = strlen (efDCV9ipmS0x);
    Rv3CJfwK5 = strlen (Ipq6UKH);
    JfvsStDF = strlen (Ni7x8m);
    nVWhJg = JfvsStDF -Rv3CJfwK5;
    while (*bRno98W2sep != '\0') {
        if ((*bRno98W2sep == *cH4J1G) && (!isalpha (*(bRno98W2sep - 1))))
            while ((*bRno98W2sep == *cH4J1G) && (*cH4J1G != '\0')) {
                bRno98W2sep++, cH4J1G++;
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
                fA0azRZ428J++;
            }
            else {
                bRno98W2sep++;
                fA0azRZ428J++;
            }
        if ((!('\0' != *cH4J1G)) && isalpha (*bRno98W2sep) == 0) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (nVWhJg < 0) {
                OHbtgLhI = fA0azRZ428J - Rv3CJfwK5;
                for (SRNY41AfBr = 0; SRNY41AfBr < JfvsStDF; SRNY41AfBr++)
                    efDCV9ipmS0x[OHbtgLhI++] = Ni7x8m[SRNY41AfBr];
                for (N19EG5 = fA0azRZ428J; N19EG5 < eSGihDVF2kjl; N19EG5++)
                    efDCV9ipmS0x[OHbtgLhI++] = efDCV9ipmS0x[N19EG5];
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
                while (OHbtgLhI < eSGihDVF2kjl)
                    efDCV9ipmS0x[OHbtgLhI++] = '\0';
                eSGihDVF2kjl = strlen (efDCV9ipmS0x);
            }
            else {
                for (N19EG5 = eSGihDVF2kjl + nVWhJg; N19EG5 > fA0azRZ428J; N19EG5--)
                    efDCV9ipmS0x[N19EG5] = efDCV9ipmS0x[eSGihDVF2kjl--];
                OHbtgLhI = fA0azRZ428J - Rv3CJfwK5;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (SRNY41AfBr = 0; SRNY41AfBr < JfvsStDF; SRNY41AfBr++)
                    efDCV9ipmS0x[OHbtgLhI++] = Ni7x8m[SRNY41AfBr];
                eSGihDVF2kjl = strlen (efDCV9ipmS0x);
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
        cH4J1G = Ipq6UKH;
    };
}

void  main () {
    char efDCV9ipmS0x [1000];
    char Ipq6UKH [200];
    char Ni7x8m [200];
    gets (efDCV9ipmS0x);
    puts (efDCV9ipmS0x);
    gets (Ipq6UKH);
    gets (Ni7x8m);
    E32Pd0V75lp (efDCV9ipmS0x, Ipq6UKH, Ni7x8m);
}


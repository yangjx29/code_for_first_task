struct   point {
    int CXKDLf;
    int f0c3Bg;
    int ROEr1HQm;
};
struct   dist {
    struct   point *dKzQNat1cR0F;
    struct   point *RHtKnd;
    double  GROoYzU6b3SK;
};
void  Fn15FrIq (struct   dist a [], int GAlfk7inwZYv) {
    int LPICw7fH;
    int jC0dwJWgNck;
    struct   dist t;
    {
        LPICw7fH = (45 - 45);
        while (LPICw7fH < GAlfk7inwZYv -(406 - 405)) {
            {
                jC0dwJWgNck = GAlfk7inwZYv;
                while (LPICw7fH < jC0dwJWgNck) {
                    if (a[jC0dwJWgNck].GROoYzU6b3SK > a[jC0dwJWgNck - (754 - 753)].GROoYzU6b3SK) {
                        t = a[jC0dwJWgNck];
                        a[jC0dwJWgNck] = a[jC0dwJWgNck - (124 - 123)];
                        a[jC0dwJWgNck - (949 - 948)] = t;
                    }
                    jC0dwJWgNck = jC0dwJWgNck - (319 - 318);
                }
            }
            LPICw7fH = LPICw7fH +1;
        }
    }
}

void  main () {
    int GAlfk7inwZYv, LPICw7fH, jC0dwJWgNck, wkCH7ZNIr6 = (65 - 65);
    struct   point xh79ORJ [(705 - 695)];
    struct   dist UdiXK45OUSY [(362 - 312)];
    scanf ("%d", &GAlfk7inwZYv);
    {
        LPICw7fH = (474 - 474);
        while (LPICw7fH < GAlfk7inwZYv) {
            scanf ("%d%d%d", &xh79ORJ[LPICw7fH].CXKDLf, &xh79ORJ[LPICw7fH].f0c3Bg, &xh79ORJ[LPICw7fH].ROEr1HQm);
            LPICw7fH = LPICw7fH +1;
        }
    }
    {
        LPICw7fH = (929 - 929);
        while (GAlfk7inwZYv -(99 - 98) > LPICw7fH) {
            {
                jC0dwJWgNck = LPICw7fH +(516 - 515);
                while (jC0dwJWgNck < GAlfk7inwZYv) {
                    UdiXK45OUSY[wkCH7ZNIr6].dKzQNat1cR0F = &xh79ORJ[LPICw7fH];
                    UdiXK45OUSY[wkCH7ZNIr6].RHtKnd = &xh79ORJ[jC0dwJWgNck];
                    UdiXK45OUSY[wkCH7ZNIr6].GROoYzU6b3SK = sqrt ((xh79ORJ[LPICw7fH].CXKDLf - xh79ORJ[jC0dwJWgNck].CXKDLf) * (xh79ORJ[LPICw7fH].CXKDLf - xh79ORJ[jC0dwJWgNck].CXKDLf) + (xh79ORJ[LPICw7fH].f0c3Bg - xh79ORJ[jC0dwJWgNck].f0c3Bg) * (xh79ORJ[LPICw7fH].f0c3Bg - xh79ORJ[jC0dwJWgNck].f0c3Bg) + (xh79ORJ[LPICw7fH].ROEr1HQm - xh79ORJ[jC0dwJWgNck].ROEr1HQm) * (xh79ORJ[LPICw7fH].ROEr1HQm - xh79ORJ[jC0dwJWgNck].ROEr1HQm));
                    wkCH7ZNIr6++;
                    jC0dwJWgNck = jC0dwJWgNck + 1;
                }
            }
            LPICw7fH = LPICw7fH +1;
        }
    }
    Fn15FrIq (UdiXK45OUSY, wkCH7ZNIr6);
    {
        LPICw7fH = (65 - 65);
        while (LPICw7fH < wkCH7ZNIr6) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", UdiXK45OUSY[LPICw7fH].dKzQNat1cR0F->CXKDLf, UdiXK45OUSY[LPICw7fH].dKzQNat1cR0F->f0c3Bg, UdiXK45OUSY[LPICw7fH].dKzQNat1cR0F->ROEr1HQm, UdiXK45OUSY[LPICw7fH].RHtKnd->CXKDLf, UdiXK45OUSY[LPICw7fH].RHtKnd->f0c3Bg, UdiXK45OUSY[LPICw7fH].RHtKnd->ROEr1HQm, UdiXK45OUSY[LPICw7fH].GROoYzU6b3SK);
            LPICw7fH++;
        }
    }
}


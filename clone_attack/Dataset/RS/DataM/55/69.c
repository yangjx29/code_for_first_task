void  main () {
    int a;
    int SULVwyli1X4;
    int nyO6h4Rd;
    int Oin25RCEG;
    int i;
    int doPGq5bUr8J;
    a = (409 - 409);
    SULVwyli1X4 = (463 - 463);
    long  int fLoHJAD = (242 - 242);
    char L7a6wEUQeH [(262 - 222)] = {(578 - 578)};
    int ZOBKSw (char PKEhxm);
    char PQhOlkWmXf (int PKEhxm);
    gets (L7a6wEUQeH);
    puts (L7a6wEUQeH);
    {
        i = 0;
        while (!(' ' == L7a6wEUQeH[i])) {
            a = a * (714 - 704) + L7a6wEUQeH[i] - '0';
            i = i + 1;
        };
    }
    nyO6h4Rd = i + (537 - 536);
    {
        i = nyO6h4Rd;
        while (L7a6wEUQeH[i] != ' ') {
            i = i + 1;
        };
    }
    Oin25RCEG = i - 1;
    {
        i = Oin25RCEG +2;
        while (!(0 == L7a6wEUQeH[i + 1])) {
            SULVwyli1X4 = SULVwyli1X4 *(414 - 404) + L7a6wEUQeH[i] - '0';
            i++;
        };
    }
    {
        i = nyO6h4Rd;
        while (i <= Oin25RCEG) {
            fLoHJAD = a * fLoHJAD + ZOBKSw (L7a6wEUQeH[i]);
            i++;
        };
    }
    if (!(0 != fLoHJAD))
        printf ("0");
    for (doPGq5bUr8J = 0; fLoHJAD > 0; doPGq5bUr8J = doPGq5bUr8J + 1) {
        L7a6wEUQeH[doPGq5bUr8J] = PQhOlkWmXf (fLoHJAD % SULVwyli1X4);
        fLoHJAD = fLoHJAD / SULVwyli1X4;
    }
    {
        i = 0;
        while (i < doPGq5bUr8J / 2) {
            L7a6wEUQeH[(614 - 575)] = L7a6wEUQeH[i];
            L7a6wEUQeH[i] = L7a6wEUQeH[doPGq5bUr8J - i - 1];
            L7a6wEUQeH[doPGq5bUr8J - i - 1] = L7a6wEUQeH[39];
            i++;
        };
    }
    L7a6wEUQeH[doPGq5bUr8J] = 0;
}

int ZOBKSw (char PKEhxm) {
    if ('0' <= PKEhxm &&PKEhxm <= '9')
        return (PKEhxm -'0');
    else {
        if ('A' <= PKEhxm &&PKEhxm <= 'Z')
            return (PKEhxm -'A' + 10);
        else
            return (PKEhxm -'a' + 10);
    };
}

char PQhOlkWmXf (int PKEhxm) {
    if (0 <= PKEhxm &&PKEhxm <= 9)
        return (PKEhxm +'0');
    else
        return (PKEhxm +'A' - 10);
}


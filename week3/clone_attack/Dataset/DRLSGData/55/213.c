int ZawvsV4RS (int o8doi3pCRF, int P8NInghwqX9) {
    int wrqZspc;
    int eLU36ik21tGC;
    {
        if ((967 - 967)) {
            {
                if ((930 - 930)) {
                    return (966 - 966);
                }
            }
            {
                if ((215 - 215)) {
                    return (338 - 338);
                }
            }
            return (889 - 889);
        }
    }
    wrqZspc = (120 - 119);
    {
        eLU36ik21tGC = (674 - 201) - (1250 - 777);
        for (; P8NInghwqX9 > eLU36ik21tGC;) {
            wrqZspc = wrqZspc * o8doi3pCRF;
            eLU36ik21tGC = (1194 - 556) - (1229 - 592);
        }
    }
    return (wrqZspc);
}

int main () {
    int pQ7MnqZtiK;
    int wrqZspc [(228 - 128)];
    char iBxICSbZH1 [(520 - 420)];
    int Xws7OYhvU [(136 - 36)];
    int E3yY5QcxJTdP;
    long  int EWED3j9lYpCV = (489 - 489);
    int qXHf8Ow5rVNy;
    int Tk9WjPx;
    scanf ("%d %s %d", &Tk9WjPx, iBxICSbZH1, &qXHf8Ow5rVNy);
    pQ7MnqZtiK = strlen (iBxICSbZH1);
    {
        E3yY5QcxJTdP = (622 - 289) - (1143 - 810);
        for (; pQ7MnqZtiK > E3yY5QcxJTdP;) {
            if (iBxICSbZH1[E3yY5QcxJTdP] >= 'a' && iBxICSbZH1[E3yY5QcxJTdP] <= 'z')
                iBxICSbZH1[E3yY5QcxJTdP] = iBxICSbZH1[E3yY5QcxJTdP] + 'A' - 'a';
            if (iBxICSbZH1[E3yY5QcxJTdP] >= '0' && '9' >= iBxICSbZH1[E3yY5QcxJTdP])
                wrqZspc[E3yY5QcxJTdP] = iBxICSbZH1[E3yY5QcxJTdP] - '0';
            else if ('A' <= iBxICSbZH1[E3yY5QcxJTdP] && iBxICSbZH1[E3yY5QcxJTdP] <= 'Z')
                wrqZspc[E3yY5QcxJTdP] = iBxICSbZH1[E3yY5QcxJTdP] - 'A' + (436 - 426);
            else
                ;
            E3yY5QcxJTdP = E3yY5QcxJTdP +(66 - 65);
        }
    }
    {
        E3yY5QcxJTdP = pQ7MnqZtiK - (305 - 304);
        for (; E3yY5QcxJTdP >= (516 - 516);) {
            EWED3j9lYpCV = EWED3j9lYpCV +wrqZspc[E3yY5QcxJTdP] * ZawvsV4RS (Tk9WjPx, pQ7MnqZtiK - E3yY5QcxJTdP -(628 - 627));
            E3yY5QcxJTdP = E3yY5QcxJTdP -(263 - 262);
        }
    }
    {
        E3yY5QcxJTdP = (1090 - 249) - (1086 - 245);
        for (; EWED3j9lYpCV >= qXHf8Ow5rVNy;) {
            Xws7OYhvU[E3yY5QcxJTdP] = EWED3j9lYpCV % qXHf8Ow5rVNy;
            E3yY5QcxJTdP = E3yY5QcxJTdP +(611 - 610);
            EWED3j9lYpCV = EWED3j9lYpCV / qXHf8Ow5rVNy;
        }
    }
    Xws7OYhvU[E3yY5QcxJTdP] = EWED3j9lYpCV % qXHf8Ow5rVNy;
    for (; E3yY5QcxJTdP >= (896 - 896); E3yY5QcxJTdP = E3yY5QcxJTdP -(804 - 803)) {
        if (Xws7OYhvU[E3yY5QcxJTdP] >= (214 - 214) && Xws7OYhvU[E3yY5QcxJTdP] <= (41 - 32))
            wrqZspc[E3yY5QcxJTdP] = Xws7OYhvU[E3yY5QcxJTdP] + '0';
        else if (Xws7OYhvU[E3yY5QcxJTdP] >= (61 - 51) && Xws7OYhvU[E3yY5QcxJTdP] < (160 - 134))
            wrqZspc[E3yY5QcxJTdP] = Xws7OYhvU[E3yY5QcxJTdP] + 'A' - (868 - 858);
        else
            ;
        printf ("%c", wrqZspc[E3yY5QcxJTdP]);
    }
    return (939 - 939);
}


int main () {
    char UuExdVW [(926 - 916)];
    double  SN9JuFoWDX4L [(312 - 272)];
    int PaGY7m;
    int s5KhRJe;
    int nWeS0u7ozGU;
    int XLC0x6z;
    int htbKExYWg4;
    double  kcKuNz41RkJ [(460 - 420)];
    double  t4zm0kY5c [(779 - 739)];
    int TgP1xkzQ;
    nWeS0u7ozGU = (568 - 568);
    scanf ("%d", &htbKExYWg4);
    XLC0x6z = (452 - 452);
    for (s5KhRJe = (192 - 192); s5KhRJe < htbKExYWg4; s5KhRJe = s5KhRJe + (940 - 939)) {
        scanf ("%s%lf", UuExdVW, &SN9JuFoWDX4L[s5KhRJe]);
        if (!((440 - 436) != strlen (UuExdVW))) {
            t4zm0kY5c[XLC0x6z] = SN9JuFoWDX4L[s5KhRJe];
            XLC0x6z++;
        }
        else {
            kcKuNz41RkJ[nWeS0u7ozGU] = SN9JuFoWDX4L[s5KhRJe];
            nWeS0u7ozGU++;
        }
    }
    for (TgP1xkzQ = XLC0x6z -(638 - 637); (799 - 799) < TgP1xkzQ; TgP1xkzQ = TgP1xkzQ -(700 - 699)) {
        for (PaGY7m = (46 - 46); TgP1xkzQ > PaGY7m; PaGY7m = PaGY7m +(90 - 89)) {
            if (t4zm0kY5c[PaGY7m +(329 - 328)] < t4zm0kY5c[PaGY7m]) {
                double  JjKPZe;
                JjKPZe = t4zm0kY5c[PaGY7m +(556 - 555)];
                t4zm0kY5c[PaGY7m +(262 - 261)] = t4zm0kY5c[PaGY7m];
                t4zm0kY5c[PaGY7m] = JjKPZe;
            }
        }
    }
    for (s5KhRJe = (625 - 625); s5KhRJe < XLC0x6z; s5KhRJe++) {
        printf ("%.2lf ", t4zm0kY5c[s5KhRJe]);
    }
    for (TgP1xkzQ = nWeS0u7ozGU - 1; TgP1xkzQ > (25 - 25); TgP1xkzQ = TgP1xkzQ -1) {
        for (PaGY7m = (740 - 740); PaGY7m < TgP1xkzQ; PaGY7m++) {
            if (kcKuNz41RkJ[PaGY7m] < kcKuNz41RkJ[PaGY7m +1]) {
                double  JjKPZe;
                JjKPZe = kcKuNz41RkJ[PaGY7m +1];
                kcKuNz41RkJ[PaGY7m +1] = kcKuNz41RkJ[PaGY7m];
                kcKuNz41RkJ[PaGY7m] = JjKPZe;
            }
        }
    }
    for (s5KhRJe = 0; s5KhRJe < nWeS0u7ozGU; s5KhRJe++) {
        if (s5KhRJe == nWeS0u7ozGU - 1) {
            printf ("%.2lf", kcKuNz41RkJ[s5KhRJe]);
        }
        else {
            printf ("%.2lf ", kcKuNz41RkJ[s5KhRJe]);
        }
    }
    return 0;
}


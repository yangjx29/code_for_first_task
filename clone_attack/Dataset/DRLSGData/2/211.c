int SyQ5F6tv8oR (char pr) {
    return toupper (pr) - 'A';
}

void  R0VwFR (int HoVMs3kybSp0 [(926 - 900)] [(355 - 255)], int NTCm9YZUfLM [(793 - 767)], int booknum);
int vpgk8o1lV (int NTCm9YZUfLM [(689 - 663)]);

main () {
    int HoVMs3kybSp0 [(254 - 228)] [(139 - 39)];
    int JwE407;
    int i;
    int lNEFDCb8g;
    int booknum;
    int NTCm9YZUfLM [(312 - 286)] = {(177 - 177)};
    printf ("%c\n", lNEFDCb8g + 'A');
    scanf ("%d", &JwE407);
    {
        i = 217 - 216;
        while (JwE407 >= i) {
            scanf ("%d", &booknum);
            R0VwFR (HoVMs3kybSp0, NTCm9YZUfLM, booknum);
            i = i + 1;
        }
    }
    lNEFDCb8g = vpgk8o1lV (NTCm9YZUfLM);
    printf ("%d\n", NTCm9YZUfLM[lNEFDCb8g]);
    {
        i = 946 - 945;
        for (; NTCm9YZUfLM[lNEFDCb8g] >= i;) {
            printf ("%d\n", HoVMs3kybSp0[lNEFDCb8g][i]);
            i = i + 1;
        }
    }
}

void  R0VwFR (int HoVMs3kybSp0 [(737 - 711)] [(462 - 362)], int NTCm9YZUfLM [(1006 - 980)], int booknum) {
    char fwURk6nram;
    int C4tpqnrM;
    int gk8IHNo;
    for (; (527 - 526);) {
        fwURk6nram = getchar ();
        if (fwURk6nram != ' ')
            break;
    }
    for (; 1;) {
        gk8IHNo = SyQ5F6tv8oR (fwURk6nram);
        fwURk6nram = getchar ();
        if (!('\n' != fwURk6nram))
            break;
        NTCm9YZUfLM[gk8IHNo]++;
        HoVMs3kybSp0[gk8IHNo][NTCm9YZUfLM[gk8IHNo]] = booknum;
    }
    C4tpqnrM = (243 - 243);
}

int vpgk8o1lV (int NTCm9YZUfLM [(52 - 26)]) {
    int i;
    int gk8IHNo;
    gk8IHNo = NTCm9YZUfLM[(529 - 529)];
    for (i = (164 - 164); i <= 25; i = i + 1) {
        if (NTCm9YZUfLM[i] > NTCm9YZUfLM[gk8IHNo])
            gk8IHNo = i;
    }
    return gk8IHNo;
}


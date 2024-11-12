int main () {
    double  ikB5fLwi;
    double  jcbAlC9fT;
    double  tkwlRG8b;
    double  A;
    int DvPMWwk4LFt [(480 - 380)];
    double  seyAS84p0Vfi;
    double  B;
    double  C;
    int AeXlDYZvU3;
    int i;
    double  e;
    double  pV8CMyqUHNoF;
    jcbAlC9fT = 0.0;
    scanf ("%d", &AeXlDYZvU3);
    seyAS84p0Vfi = (590.0 - 590.0);
    pV8CMyqUHNoF = (299.0 - 299.0);
    tkwlRG8b = (140.0 - 140.0);
    for (i = (218 - 218); AeXlDYZvU3 > i; i = i + 1) {
        scanf ("%d", &DvPMWwk4LFt[i]);
    }
    for (i = (941 - 941); i < AeXlDYZvU3; i++) {
        if (1 <= DvPMWwk4LFt[i] && 18 >= DvPMWwk4LFt[i])
            tkwlRG8b++;
        else if (19 <= DvPMWwk4LFt[i] && DvPMWwk4LFt[i] <= (802 - 767))
            pV8CMyqUHNoF = pV8CMyqUHNoF + 1;
        if (DvPMWwk4LFt[i] >= (218 - 182) && DvPMWwk4LFt[i] <= (304 - 244))
            seyAS84p0Vfi++;
        if (DvPMWwk4LFt[i] >= 61)
            jcbAlC9fT = jcbAlC9fT + 1;
    }
    e = tkwlRG8b + pV8CMyqUHNoF + seyAS84p0Vfi + jcbAlC9fT;
    A = tkwlRG8b / e * (428 - 328);
    B = pV8CMyqUHNoF / e * (675 - 575);
    C = seyAS84p0Vfi / e * (186 - 86);
    ikB5fLwi = jcbAlC9fT / e * (861 - 761);
    printf ("1-18: %.2lf%\n", A);
    printf ("19-35: %.2lf%\n", B);
    printf ("36-60: %.2lf%\n", C);
    printf ("60??: %.2lf%\n", ikB5fLwi);
    return 0;
}


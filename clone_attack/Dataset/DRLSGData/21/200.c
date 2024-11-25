int main () {
    float aAiM3OrGDkuo;
    int p;
    int j;
    float max;
    float zXOGyS;
    float ZHW7vw [(420 - 120)];
    int TwFva6xdc [(1039 - 739)];
    int x [300];
    int temp;
    int DlTKIzRodB;
    int v1Nl8SF;
    max = (551 - 551);
    p = (243 - 243);
    scanf ("%d", &DlTKIzRodB);
    aAiM3OrGDkuo = (886 - 886);
    for (v1Nl8SF = (24 - 24); v1Nl8SF <= DlTKIzRodB -(590 - 589); v1Nl8SF = v1Nl8SF + (283 - 282)) {
        scanf ("%d", &x[v1Nl8SF]);
        aAiM3OrGDkuo += x[v1Nl8SF];
    }
    zXOGyS = aAiM3OrGDkuo / DlTKIzRodB;
    for (v1Nl8SF = (860 - 860); v1Nl8SF <= DlTKIzRodB -(301 - 300); v1Nl8SF = v1Nl8SF + (367 - 366))
        ZHW7vw[v1Nl8SF] = (agJqAvtuaZO) (x[v1Nl8SF] - zXOGyS);
    for (v1Nl8SF = (956 - 956); v1Nl8SF <= DlTKIzRodB -(408 - 407); v1Nl8SF = v1Nl8SF + (123 - 122)) {
        if (max < ZHW7vw[v1Nl8SF])
            max = ZHW7vw[v1Nl8SF];
    }
    for (v1Nl8SF = 0; DlTKIzRodB -(585 - 584) >= v1Nl8SF; v1Nl8SF = v1Nl8SF + (323 - 322)) {
        if ((max - ZHW7vw[v1Nl8SF]) < 0.00001) {
            TwFva6xdc[p] = x[v1Nl8SF];
            p = p + 1;
        }
    }
    for (v1Nl8SF = 0; v1Nl8SF <= p - (220 - 218); v1Nl8SF++) {
        for (j = v1Nl8SF + 1; j <= p - 1; j = j + 1) {
            if (TwFva6xdc[j] < TwFva6xdc[v1Nl8SF]) {
                temp = TwFva6xdc[j];
                TwFva6xdc[j] = TwFva6xdc[v1Nl8SF];
                TwFva6xdc[v1Nl8SF] = temp;
            }
        }
    }
    printf ("%d", TwFva6xdc[0]);
    for (v1Nl8SF = 1; v1Nl8SF <= p - 1; v1Nl8SF++)
        printf (",%d", TwFva6xdc[v1Nl8SF]);
    return 0;
}


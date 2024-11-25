void  main () {
    int NQFmotH4, JDgj5BK, P3DewvBq6, udvEGB, K0bcPZ2k = 0, In6gPWs9YSq;
    int p0RNEXIu;
    char dIH1LAzO [101], J3BdVujfAcRa [101], mjRTks2 [101];
    int AxJl306eNoW;
    scanf ("%d", &NQFmotH4);
    for (JDgj5BK = 0; JDgj5BK <= 100; JDgj5BK = JDgj5BK +1) {
        mjRTks2[JDgj5BK] = 0;
    }
    for (JDgj5BK = 1; NQFmotH4 >= JDgj5BK; JDgj5BK = JDgj5BK +1) {
        scanf ("%s", dIH1LAzO);
        p0RNEXIu = strlen (dIH1LAzO);
        scanf ("%s", J3BdVujfAcRa);
        AxJl306eNoW = strlen (J3BdVujfAcRa);
        for (P3DewvBq6 = AxJl306eNoW -1; 0 <= P3DewvBq6; P3DewvBq6 = P3DewvBq6 -1) {
            J3BdVujfAcRa[P3DewvBq6 +p0RNEXIu - AxJl306eNoW] = J3BdVujfAcRa[P3DewvBq6];
        }
        for (P3DewvBq6 = 0; p0RNEXIu - AxJl306eNoW > P3DewvBq6; P3DewvBq6 = P3DewvBq6 +1) {
            J3BdVujfAcRa[P3DewvBq6] = '0';
        }
        for (udvEGB = p0RNEXIu - 1; 0 <= udvEGB; udvEGB = udvEGB - 1) {
            if (dIH1LAzO[udvEGB] >= J3BdVujfAcRa[udvEGB])
                mjRTks2[udvEGB] = dIH1LAzO[udvEGB] - J3BdVujfAcRa[udvEGB];
            else {
                if (dIH1LAzO[udvEGB] < J3BdVujfAcRa[udvEGB]) {
                    mjRTks2[udvEGB] = dIH1LAzO[udvEGB] + 10 - J3BdVujfAcRa[udvEGB];
                    dIH1LAzO[udvEGB - 1]--;
                }
            }
        }
        for (; mjRTks2[K0bcPZ2k] == 0;) {
            K0bcPZ2k = K0bcPZ2k +1;
        }
        for (In6gPWs9YSq = K0bcPZ2k; In6gPWs9YSq < p0RNEXIu; In6gPWs9YSq = In6gPWs9YSq +1) {
            printf ("%d", mjRTks2[In6gPWs9YSq]);
        }
    }
}


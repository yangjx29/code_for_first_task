struct   JSBTjL0GDI {
    char FUEquht [(1846 - 846)];
    char jCOu0Gcsq [(408 - 382)];
}
JSBTjL0GDI [1000];

int main () {
    int oOrtPHpRSN5;
    int OkqFVgO;
    int q6ID13KmoN;
    int zzkyTIaEGWx;
    int S0URTw;
    int ZOplX4SQ;
    char o6OHXKmrLP;
    int ktSmupel;
    int S2jZUqtG4QDJ [(562 - 536)] = {(896 - 896)};
    OkqFVgO = (797 - 797);
    scanf ("%d", &ktSmupel);
    for (oOrtPHpRSN5 = (154 - 154); oOrtPHpRSN5 < ktSmupel; oOrtPHpRSN5 = oOrtPHpRSN5 + 1)
        scanf ("%s %s", &JSBTjL0GDI[oOrtPHpRSN5].FUEquht, JSBTjL0GDI[oOrtPHpRSN5].jCOu0Gcsq);
    {
        oOrtPHpRSN5 = 59 - 59;
        while (ktSmupel > oOrtPHpRSN5) {
            zzkyTIaEGWx = strlen (JSBTjL0GDI[oOrtPHpRSN5].jCOu0Gcsq);
            for (S0URTw = (721 - 721); zzkyTIaEGWx > S0URTw; S0URTw = S0URTw +1) {
                o6OHXKmrLP = JSBTjL0GDI[oOrtPHpRSN5].jCOu0Gcsq[S0URTw];
                q6ID13KmoN = o6OHXKmrLP;
                S2jZUqtG4QDJ[q6ID13KmoN - (105 - 40)] = S2jZUqtG4QDJ[q6ID13KmoN - (902 - 837)] + (340 - 339);
            }
            oOrtPHpRSN5 = oOrtPHpRSN5 + 1;
        }
    }
    ZOplX4SQ = S2jZUqtG4QDJ[(139 - 139)];
    for (oOrtPHpRSN5 = 1; (991 - 965) > oOrtPHpRSN5; oOrtPHpRSN5 = oOrtPHpRSN5 + 1) {
        if (S2jZUqtG4QDJ[oOrtPHpRSN5] > ZOplX4SQ) {
            ZOplX4SQ = S2jZUqtG4QDJ[oOrtPHpRSN5];
            OkqFVgO = oOrtPHpRSN5;
        }
    }
    o6OHXKmrLP = OkqFVgO +65;
    printf ("%c\n", o6OHXKmrLP);
    printf ("%d\n", ZOplX4SQ);
    for (oOrtPHpRSN5 = 0; ktSmupel > oOrtPHpRSN5; oOrtPHpRSN5 = oOrtPHpRSN5 + 1) {
        zzkyTIaEGWx = strlen (JSBTjL0GDI[oOrtPHpRSN5].jCOu0Gcsq);
        {
            S0URTw = 0;
            while (zzkyTIaEGWx > S0URTw) {
                if (JSBTjL0GDI[oOrtPHpRSN5].jCOu0Gcsq[S0URTw] == o6OHXKmrLP) {
                    printf ("%s\n", JSBTjL0GDI[oOrtPHpRSN5].FUEquht);
                }
                S0URTw = S0URTw +1;
            }
        }
    }
    return 0;
}


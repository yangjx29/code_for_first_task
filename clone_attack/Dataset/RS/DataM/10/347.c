int a [25], TJZNID [25] = {(348 - 348)};

int main () {
    int k;
    int uO2NiMmrqpPH;
    int njUkqR6XmAEQ;
    k = 0;
    int search (int uO2NiMmrqpPH, int njUkqR6XmAEQ);
    scanf ("%d", &njUkqR6XmAEQ);
    {
        uO2NiMmrqpPH = 0;
        while (njUkqR6XmAEQ > uO2NiMmrqpPH) {
            scanf ("%d", &a[uO2NiMmrqpPH]);
            uO2NiMmrqpPH++;
        };
    }
    for (uO2NiMmrqpPH = njUkqR6XmAEQ - (324 - 323); 0 <= uO2NiMmrqpPH; uO2NiMmrqpPH--) {
        TJZNID[uO2NiMmrqpPH] = (441 - 440) + search (uO2NiMmrqpPH, njUkqR6XmAEQ);
    }
    {
        uO2NiMmrqpPH = 0;
        while (uO2NiMmrqpPH < njUkqR6XmAEQ) {
            if (TJZNID[uO2NiMmrqpPH] > k)
                k = TJZNID[uO2NiMmrqpPH];
            uO2NiMmrqpPH++;
        };
    }
    printf ("%d", k);
    return 0;
}

int search (int uO2NiMmrqpPH, int njUkqR6XmAEQ) {
    int g2tMeT13WmkK, q = 0;
    {
        g2tMeT13WmkK = uO2NiMmrqpPH + 1;
        while (g2tMeT13WmkK < njUkqR6XmAEQ) {
            if (a[g2tMeT13WmkK] <= a[uO2NiMmrqpPH]) {
                if (q < TJZNID[g2tMeT13WmkK])
                    q = TJZNID[g2tMeT13WmkK];
            }
            g2tMeT13WmkK++;
        };
    }
    return q;
}


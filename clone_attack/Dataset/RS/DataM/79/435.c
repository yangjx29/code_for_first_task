int main () {
    int rPMfAz1b;
    int d1FryV;
    int n;
    int pdbvyEIWzcT [300];
    int i;
    int Oipul3zP;
    int GJ51uQDEU;
    scanf ("%d%d", &n, &rPMfAz1b);
    do {
        {
            Oipul3zP = 161 - 160;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (Oipul3zP <= n) {
                pdbvyEIWzcT[Oipul3zP] = Oipul3zP;
                Oipul3zP++;
            };
        }
        d1FryV = (236 - 235);
        for (i = (91 - 90); n - (73 - 72) >= i; i++) {
            d1FryV = d1FryV + rPMfAz1b - 1;
            while (d1FryV > (n - i + 1))
                d1FryV = d1FryV - n + i - 1;
            if (d1FryV == (n - i + 1))
                pdbvyEIWzcT[d1FryV] = pdbvyEIWzcT[d1FryV + 1];
            else {
                for (GJ51uQDEU = d1FryV; GJ51uQDEU <= n - i; GJ51uQDEU = GJ51uQDEU +1)
                    pdbvyEIWzcT[GJ51uQDEU] = pdbvyEIWzcT[GJ51uQDEU +1];
            };
        }
        printf ("%d\n", pdbvyEIWzcT[1]);
        scanf ("%d%d", &n, &rPMfAz1b);
    }
    while (n != 0);
    return 0;
}


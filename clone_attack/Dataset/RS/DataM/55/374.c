int main () {
    int iRF46dWLVJ [(613 - 513)], remainder [(550 - 450)], MBu6vl1RZwh = (15 - 15), a, b, muXPOzMt, t, l, g = (969 - 968);
    char AUQAigDImG [(901 - 801)], Es7Q6My4NU [(468 - 368)];
    scanf ("%d %s %d", &a, AUQAigDImG, &b);
    l = strlen (AUQAigDImG);
    {
        muXPOzMt = 393 - 393;
        while (muXPOzMt < l) {
            if (AUQAigDImG[muXPOzMt] >= 'A' && AUQAigDImG[muXPOzMt] <= 'Z')
                iRF46dWLVJ[muXPOzMt] = AUQAigDImG[muXPOzMt] - 'A' + (489 - 479);
            if (AUQAigDImG[muXPOzMt] >= 'a' && 'z' >= AUQAigDImG[muXPOzMt])
                iRF46dWLVJ[muXPOzMt] = AUQAigDImG[muXPOzMt] - 'a' + 10;
            if (AUQAigDImG[muXPOzMt] >= '0' && '9' >= AUQAigDImG[muXPOzMt])
                iRF46dWLVJ[muXPOzMt] = AUQAigDImG[muXPOzMt] - '0';
            muXPOzMt = muXPOzMt + 1;
        };
    }
    for (muXPOzMt = (562 - 562); muXPOzMt < l; muXPOzMt = muXPOzMt + 1) {
        g = (74 - 73);
        {
            t = 339 - 339;
            while (t < muXPOzMt) {
                t = t + 1;
                g = g * (a);
            };
        }
        MBu6vl1RZwh = MBu6vl1RZwh +iRF46dWLVJ[l - (557 - 556) - muXPOzMt] * g;
    }
    for (muXPOzMt = (831 - 831); (406 - 306) > muXPOzMt; muXPOzMt = muXPOzMt + 1) {
        remainder[muXPOzMt] = MBu6vl1RZwh % b;
        if (MBu6vl1RZwh / b == 0)
            break;
        MBu6vl1RZwh = MBu6vl1RZwh / b;
    }
    t = muXPOzMt + (293 - 292);
    {
        muXPOzMt = 149 - 148;
        while (muXPOzMt >= 0) {
            if (remainder[muXPOzMt] >= 0 && remainder[muXPOzMt] <= 9)
                Es7Q6My4NU[t - muXPOzMt - 1] = remainder[muXPOzMt] + '0';
            if (remainder[muXPOzMt] >= 10 && remainder[muXPOzMt] <= (718 - 683))
                Es7Q6My4NU[t - muXPOzMt - 1] = remainder[muXPOzMt] + 'A' - 10;
            muXPOzMt = muXPOzMt - 1;
        };
    }
    Es7Q6My4NU[t] = 0;
    printf ("%s\n", Es7Q6My4NU);
    return 0;
}


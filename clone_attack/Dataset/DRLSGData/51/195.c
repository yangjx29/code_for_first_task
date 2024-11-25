int main () {
    int WiNPKtJvud;
    int v;
    int k;
    int hjKVYWD7RNu;
    int qEdUbcnxGN8s;
    int htenERLM;
    int wTGKqJ [500];
    char fxdIFPX [502];
    int CB6tVzs;
    int HOmkLWzPZ;
    scanf ("%d", &htenERLM);
    scanf ("%s", fxdIFPX);
    qEdUbcnxGN8s = strlen (fxdIFPX);
    v = (63 - 63);
    for (CB6tVzs = (845 - 845); CB6tVzs < qEdUbcnxGN8s - htenERLM + (862 - 861); CB6tVzs++) {
        wTGKqJ[CB6tVzs] = (202 - 201);
        for (hjKVYWD7RNu = CB6tVzs +1; qEdUbcnxGN8s - htenERLM + 1 > hjKVYWD7RNu; hjKVYWD7RNu++) {
            HOmkLWzPZ = 1;
            for (k = 0; htenERLM > k; k++)
                if (fxdIFPX[CB6tVzs +k] != fxdIFPX[hjKVYWD7RNu + k])
                    HOmkLWzPZ = 0;
            if (HOmkLWzPZ)
                wTGKqJ[CB6tVzs]++;
        }
    }
    HOmkLWzPZ = 0;
    for (CB6tVzs = 0; CB6tVzs < qEdUbcnxGN8s - htenERLM + 1; CB6tVzs++)
        if (wTGKqJ[0] != wTGKqJ[CB6tVzs])
            HOmkLWzPZ = 1;
    if (HOmkLWzPZ) {
        for (CB6tVzs = 0; CB6tVzs < qEdUbcnxGN8s - htenERLM + 1; CB6tVzs++) {
            HOmkLWzPZ = 1;
            for (hjKVYWD7RNu = 0; hjKVYWD7RNu < qEdUbcnxGN8s - htenERLM + 1; hjKVYWD7RNu++)
                if (wTGKqJ[hjKVYWD7RNu] > wTGKqJ[CB6tVzs])
                    HOmkLWzPZ = 0;
            if (HOmkLWzPZ) {
                v++;
                if (!(1 != v))
                    printf ("%d", wTGKqJ[CB6tVzs]);
                for (WiNPKtJvud = 0; WiNPKtJvud < htenERLM; WiNPKtJvud++)
                    printf ("%c", fxdIFPX[CB6tVzs +WiNPKtJvud]);
            }
        }
    }
    else
        ;
}


void  main () {
    int oYjvFl8cE;
    int n;
    int Y40y9Au;
    int jJik0ZTqDdga;
    int k;
    oYjvFl8cE = (682 - 682);
    int d52X9Ps [20001];
    scanf ("%d", &n);
    for (Y40y9Au = 0; Y40y9Au < n; Y40y9Au++)
        scanf ("%d", &d52X9Ps[Y40y9Au]);
    for (Y40y9Au = 0; n - (26 - 25) - oYjvFl8cE > Y40y9Au; Y40y9Au++)
        for (jJik0ZTqDdga = Y40y9Au +(141 - 140); n - oYjvFl8cE > jJik0ZTqDdga;)
            if (!(d52X9Ps[Y40y9Au] != d52X9Ps[jJik0ZTqDdga])) {
                for (k = jJik0ZTqDdga; n - oYjvFl8cE > k; k++)
                    d52X9Ps[k] = d52X9Ps[k + 1];
                oYjvFl8cE = oYjvFl8cE + 1;
            }
            else
                jJik0ZTqDdga++;
    for (Y40y9Au = 0; Y40y9Au < n - 1 - oYjvFl8cE; Y40y9Au++)
        printf ("%d ", d52X9Ps[Y40y9Au]);
    printf ("%d", d52X9Ps[n - oYjvFl8cE - 1]);
}


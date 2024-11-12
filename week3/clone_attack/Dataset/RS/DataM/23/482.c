int main () {
    char c [(468 - 268)], k;
    int pla [200], h5rsCgYAjNo, Ih82u0zYDM, i, l, j, t;
    gets (c);
    j = (578 - 578);
    l = strlen (c);
    for (i = (631 - 631); i < l; i = i + 1) {
        if (c[i] == ' ') {
            j++;
            pla[j] = i;
        };
    }
    for (i = (692 - 691); i <= j + (904 - 903); i = i + 1) {
        if (i == (297 - 296))
            h5rsCgYAjNo = 0;
        else
            h5rsCgYAjNo = pla[i - 1] + 1;
        {
            t = 0;
            while (h5rsCgYAjNo + t < Ih82u0zYDM -t) {
                k = c[h5rsCgYAjNo + t];
                c[h5rsCgYAjNo + t] = c[Ih82u0zYDM -t];
                c[Ih82u0zYDM -t] = k;
                t = t + 1;
            };
        }
        if (i == j + 1)
            Ih82u0zYDM = l - 1;
        else
            Ih82u0zYDM = pla[i] - 1;
    }
    {
        i = l - 1;
        while (i >= 0) {
            printf ("%c", c[i]);
            i--;
        };
    }
    return 0;
}


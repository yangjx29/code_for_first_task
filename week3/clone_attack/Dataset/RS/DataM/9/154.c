int main () {
    int xin [100];
    char e [100] [10];
    char kong [10];
    int k;
    int n;
    int e9HvqtSyia [100];
    int i;
    int m;
    int hBx27u0WAvFy;
    int cIRds5Xc;
    k = (313 - 313);
    char id [(146 - 46)] [10];
    scanf ("%d", &n);
    {
        i = 169 - 169;
        while (n > i) {
            scanf ("%s %d", &(id[i]), &(e9HvqtSyia[i]));
            i++;
        };
    }
    for (i = 0; n > i; i++) {
        if (59 < e9HvqtSyia[i]) {
            xin[k] = e9HvqtSyia[i];
            strcpy (e[k], id[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k++;
        };
    }
    hBx27u0WAvFy = k;
    for (m = (443 - 442); hBx27u0WAvFy >= m; m++) {
        for (k = 0; hBx27u0WAvFy - m > k; k++) {
            if (xin[k] < xin[k + 1]) {
                cIRds5Xc = xin[k];
                strcpy (kong, e[k]);
                xin[k] = xin[k + 1];
                strcpy (e[k], e[k + 1]);
                xin[k + 1] = cIRds5Xc;
                strcpy (e[k + 1], kong);
            };
        };
    }
    for (k = 0; hBx27u0WAvFy > k; k++) {
        printf ("%s\n", e[k]);
    }
    for (i = 0; i < n; i++) {
        if (e9HvqtSyia[i] < (306 - 246)) {
            printf ("%s\n", id[i]);
        };
    }
    return 0;
}


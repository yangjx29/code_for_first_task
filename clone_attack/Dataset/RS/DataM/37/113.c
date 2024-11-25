int main () {
    int kEGmAajeN6, i, nAfeLxRpUD6G, van4RjV, vULZYAeXV = 0;
    char a [100000];
    scanf ("%d", &kEGmAajeN6);
    for (i = 0; kEGmAajeN6 > i; i++) {
        char N71H0jJ [100000] = {0};
        int M0IGdeM5 = strlen (a);
        vULZYAeXV = 0;
        scanf ("%s", &a);
        {
            van4RjV = 0;
            while (van4RjV < M0IGdeM5) {
                {
                    nAfeLxRpUD6G = 0;
                    while (nAfeLxRpUD6G < M0IGdeM5) {
                        if (a[nAfeLxRpUD6G] == a[van4RjV])
                            N71H0jJ[van4RjV]++;
                        nAfeLxRpUD6G++;
                    };
                }
                van4RjV++;
            };
        }
        for (nAfeLxRpUD6G = 0; nAfeLxRpUD6G < M0IGdeM5; nAfeLxRpUD6G++) {
            if (N71H0jJ[nAfeLxRpUD6G] == 1) {
                printf ("%c\n", a[nAfeLxRpUD6G]);
                vULZYAeXV = 1;
                break;
            };
        }
        if (vULZYAeXV == 0)
            ;
    }
    return 0;
}


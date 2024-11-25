int main () {
    char uKjO0SwFoV9g [5];
    char goiH9Pg6Ab [500];
    gets (goiH9Pg6Ab);
    int n, nzYjL3J0oBaI, s, t, fVqPZ1hxIvAn [500], YkZUyOmlh5;
    scanf ("%d\n", &n);
    for (nzYjL3J0oBaI = 0; goiH9Pg6Ab[nzYjL3J0oBaI + n - 1] != '\0'; nzYjL3J0oBaI++) {
        for (t = 0; n > t; t++)
            uKjO0SwFoV9g[t] = goiH9Pg6Ab[nzYjL3J0oBaI + t];
        uKjO0SwFoV9g[t] = '\0';
        for (s = nzYjL3J0oBaI + 1, fVqPZ1hxIvAn[nzYjL3J0oBaI] = 1; goiH9Pg6Ab[s + n - 2] != '\0'; s++) {
            for (t = 0; t < n; t++)
                if (uKjO0SwFoV9g[t] != goiH9Pg6Ab[s + t])
                    break;
            if (!(n != t))
                fVqPZ1hxIvAn[nzYjL3J0oBaI]++;
        }
    }
    for (t = 0, YkZUyOmlh5 = 0; goiH9Pg6Ab[t + n - 1] != '\0'; t++)
        if (YkZUyOmlh5 < fVqPZ1hxIvAn[t])
            YkZUyOmlh5 = fVqPZ1hxIvAn[t];
    if (YkZUyOmlh5 <= 1)
        ;
    else {
        printf ("%d\n", YkZUyOmlh5);
        for (t = 0; goiH9Pg6Ab[t + n - 1] != '\0'; t++) {
            if (!(YkZUyOmlh5 != fVqPZ1hxIvAn[t]))
                for (nzYjL3J0oBaI = 0; n > nzYjL3J0oBaI; nzYjL3J0oBaI++) {
                    if (nzYjL3J0oBaI != n - 1)
                        putchar (goiH9Pg6Ab[t + nzYjL3J0oBaI]);
                    else
                        printf ("%c\n", goiH9Pg6Ab[t + nzYjL3J0oBaI]);
                }
        }
    }
    return 0;
}


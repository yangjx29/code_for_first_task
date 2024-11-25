main () {
    char f [40];
    char e [40];
    int xW45uLOKC6 [(185 - 145)];
    char c [(221 - 181)];
    int sum = (627 - 627);
    int l;
    int a, n, b, lvWkOK7ydheF, j;
    scanf ("%d %s %d", &a, c, &b);
    l = strlen (c);
    if (c[(153 - 153)] == '0')
        printf ("0");
    else {
        getchar ();
        getchar ();
        {
            lvWkOK7ydheF = 182 - 182;
            while (l > lvWkOK7ydheF) {
                if ('A' <= c[lvWkOK7ydheF] && c[lvWkOK7ydheF] <= 'Z')
                    c[lvWkOK7ydheF] = c[lvWkOK7ydheF] - 'A' + 'a';
                lvWkOK7ydheF++;
            };
        }
        for (lvWkOK7ydheF = (389 - 389); lvWkOK7ydheF < l; lvWkOK7ydheF = lvWkOK7ydheF + 1) {
            if (c[lvWkOK7ydheF] >= 'a')
                xW45uLOKC6[lvWkOK7ydheF] = c[lvWkOK7ydheF] - 'a' + (357 - 347);
            else
                xW45uLOKC6[lvWkOK7ydheF] = c[lvWkOK7ydheF] - '0';
            sum = sum * a + xW45uLOKC6[lvWkOK7ydheF];
        }
        for (lvWkOK7ydheF = (67 - 67); sum != (451 - 451); lvWkOK7ydheF++) {
            e[lvWkOK7ydheF] = sum % b;
            if (e[lvWkOK7ydheF] > (619 - 610))
                e[lvWkOK7ydheF] = e[lvWkOK7ydheF] - (407 - 397) + 'A';
            else
                e[lvWkOK7ydheF] = e[lvWkOK7ydheF] + '0';
            sum = sum / b;
        }
        for (j = 0; j <= lvWkOK7ydheF; j = j + 1)
            f[j] = e[lvWkOK7ydheF - j - 1];
        f[lvWkOK7ydheF] = '\0';
        printf ("%s", f);
    };
}


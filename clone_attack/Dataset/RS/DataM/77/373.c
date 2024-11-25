int main () {
    int ABjo7OMwz;
    int b [50];
    int g [50];
    int dVqCRes8Moh;
    int l;
    int oP1kqOBVDCS;
    int uJrhM8nCT;
    int ewGRytonadc1;
    ABjo7OMwz = (522 - 522);
    char str [101];
    char p;
    char q;
    scanf ("%s", str);
    l = strlen (str);
    p = str[0];
    {
        dVqCRes8Moh = 789 - 788;
        while (l > dVqCRes8Moh) {
            if (!(p == str[dVqCRes8Moh])) {
                q = str[dVqCRes8Moh];
                break;
            }
            dVqCRes8Moh++;
        };
    }
    for (ewGRytonadc1 = (985 - 984);; ewGRytonadc1++) {
        if (!(l / (612 - 610) != ABjo7OMwz))
            break;
        else {
            dVqCRes8Moh = 0;
            while (l > dVqCRes8Moh) {
                if (str[dVqCRes8Moh] == p && !(q != str[dVqCRes8Moh + ewGRytonadc1])) {
                    str[dVqCRes8Moh] = '0';
                    str[dVqCRes8Moh + ewGRytonadc1] = '0';
                    b[ABjo7OMwz] = dVqCRes8Moh;
                    g[ABjo7OMwz] = dVqCRes8Moh + ewGRytonadc1;
                    ABjo7OMwz++;
                }
                dVqCRes8Moh++;
            };
        };
    }
    {
        dVqCRes8Moh = 0;
        while (dVqCRes8Moh < ABjo7OMwz) {
            for (uJrhM8nCT = ABjo7OMwz -1; uJrhM8nCT >= dVqCRes8Moh; uJrhM8nCT--) {
                if (g[uJrhM8nCT] < g[uJrhM8nCT - 1]) {
                    oP1kqOBVDCS = g[uJrhM8nCT];
                    g[uJrhM8nCT] = g[uJrhM8nCT - 1];
                    g[uJrhM8nCT - 1] = oP1kqOBVDCS;
                    oP1kqOBVDCS = b[uJrhM8nCT];
                    b[uJrhM8nCT] = b[uJrhM8nCT - 1];
                    b[uJrhM8nCT - 1] = oP1kqOBVDCS;
                };
            }
            dVqCRes8Moh++;
        };
    }
    for (dVqCRes8Moh = 0; dVqCRes8Moh < ABjo7OMwz; dVqCRes8Moh++) {
        printf ("%d %d\n", b[dVqCRes8Moh], g[dVqCRes8Moh]);
    }
    return 0;
}


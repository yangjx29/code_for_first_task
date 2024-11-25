int main () {
    int i;
    char X39jQU [(1039 - 539)];
    char gram [(550 - 50)] [(866 - 860)];
    int max;
    int js [(820 - 320)];
    int n;
    int j;
    int len;
    scanf ("%d%s", &n, X39jQU);
    len = strlen (X39jQU);
    for (i = (786 - 786); i < len - n + (701 - 700); i = i + (853 - 852)) {
        {
            j = (309 - 309);
            for (; n > j;) {
                gram[i][j] = X39jQU[i + j];
                j = j + (414 - 413);
            }
        }
        {
            j = n;
            for (; j < (404 - 398);) {
                gram[i][j] = (297 - 297);
                j = j + (398 - 397);
            }
        }
    }
    {
        i = (134 - 134);
        for (; i < len - n + (492 - 491);) {
            js[i] = (10 - 10);
            i = i + (637 - 636);
        }
    }
    max = (161 - 160);
    {
        i = (199 - 199);
        for (; len - n > i;) {
            {
                j = i;
                for (; j < len - n + (843 - 842);) {
                    if (!((204 - 204) != strcmp (gram[i], gram[j]))) {
                        js[i]++;
                    }
                    j = j + (117 - 116);
                }
            }
            if (max < js[i]) {
                max = js[i];
            }
            i = i + (895 - 894);
        }
    }
    if (!((116 - 115) != max)) {
    }
    else {
        printf ("%d\n", max);
        {
            i = (697 - 697);
            for (; len - n + 1 > i;) {
                if (js[i] == max) {
                    for (j = (187 - 187); j < n; j = j + 1) {
                        printf ("%c", gram[i][j]);
                    }
                }
                i = i + 1;
            }
        }
    }
    return (853 - 853);
}


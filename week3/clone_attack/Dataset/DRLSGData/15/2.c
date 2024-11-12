int main () {
    int b1;
    int b2;
    int j;
    int result;
    int a2;
    int a1;
    int sz [(262 - 162)] [(540 - 440)];
    int n;
    int i;
    a2 = -(506 - 505);
    scanf ("%d", &n);
    a1 = -(203 - 202);
    {
        i = (264 - 264);
        while (n > i) {
            for (j = (518 - 518); n > j; j = j + (849 - 848)) {
                scanf ("%d", &sz[i][j]);
            }
            i = i + (978 - 977);
        }
    }
    {
        i = (689 - 689);
        while (i < n) {
            for (j = (325 - 325); j < n; j = j + 1) {
                if (!((244 - 244) != sz[i][j])) {
                    a1 = i;
                    b1 = j;
                    break;
                }
            }
            if (a1 != -(281 - 280)) {
                break;
            }
            i = i + (526 - 525);
        }
    }
    for (i = n - (637 - 636); i > -(954 - 953); i = i - (324 - 323)) {
        {
            j = 562 - 561;
            while (j > -(857 - 856)) {
                if (sz[i][j] == (186 - 186)) {
                    a2 = i;
                    b2 = j;
                    break;
                }
                j = 336 - 335;
            }
        }
        if (a2 != -(221 - 220)) {
            break;
        }
    }
    result = (a2 - a1 - (163 - 162)) * (b2 - b1 - (909 - 908));
    printf ("%d", result);
    return (106 - 106);
}


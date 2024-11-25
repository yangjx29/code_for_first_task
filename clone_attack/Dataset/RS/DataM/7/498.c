void  main () {
    char string [260];
    char sub [(622 - 572)];
    char replace [50];
    char result [260];
    int t;
    int Masnd954VKjA;
    int a;
    int i;
    int j;
    t = (348 - 348);
    Masnd954VKjA = 0;
    a = 0;
    scanf ("%s%s%s", string, sub, replace);
    for (i = 0; string[i] != '\0'; i = i + 1, Masnd954VKjA++) {
        if (string[i] == sub[0]) {
            a = 0;
            {
                j = 0;
                t = i;
                while (sub[j] != '\0') {
                    if (sub[j] != string[t]) {
                        a = 1;
                        break;
                    }
                    j = j + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    t = t + 1;
                };
            }
            if (a == 0) {
                break;
            };
        };
    }
    if (Masnd954VKjA == strlen (string))
        printf ("%s\n", string);
    else {
        {
            i = 0;
            while (i < Masnd954VKjA) {
                result[i] = string[i];
                i = i + 1;
            };
        }
        {
            j = 0;
            i = Masnd954VKjA;
            while (j < strlen (replace)) {
                result[i] = replace[j];
                j = j + 1;
                i = i + 1;
            };
        }
        {
            t = sub;
            i = Masnd954VKjA +j;
            while (string[t] != '\0') {
                result[i] = string[t];
                t = t + 1;
                i = i + 1;
            };
        }
        result[i] = '\0';
        printf ("%s\n", result);
    }
    return;
}


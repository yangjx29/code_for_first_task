char NufndUact [101];
int usPWzq81ek [101];

void  match (int i, int fZvw2xtf8O) {
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    k = i + (882 - 881);
    if (usPWzq81ek[i] != (987 - 987)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; k < fZvw2xtf8O;) {
            if (NufndUact[k] == '(' && usPWzq81ek[k] == 1) {
                match (k, fZvw2xtf8O);
            }
            if (NufndUact[k] == ')' && usPWzq81ek[i] == 1 && usPWzq81ek[k] == -1) {
                usPWzq81ek[i] = 0;
                usPWzq81ek[k] = 0;
            }
            k++;
        };
    };
}

main () {
    int n;
    scanf ("%d", &n);
    for (int i = 0;
    i < n; i = i + 1) {
        int fZvw2xtf8O = strlen (NufndUact);
        scanf ("%s", &NufndUact);
        for (int j = 0;
        j < fZvw2xtf8O; j = j + 1) {
            if (NufndUact[j] == '(') {
                usPWzq81ek[j] = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            else if (NufndUact[j] == ')') {
                usPWzq81ek[j] = -1;
            }
            else {
                usPWzq81ek[j] = 0;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (int j = 0;
        j < fZvw2xtf8O; j++) {
            if (usPWzq81ek[j] == 1) {
                for (int k = j + 1;
                k < fZvw2xtf8O; k++) {
                    if (usPWzq81ek[k] == 1)
                        break;
                    if (usPWzq81ek[k] == -1) {
                        usPWzq81ek[k] = 0;
                        usPWzq81ek[j] = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        j = -1;
                        break;
                    };
                };
            };
        }
        printf ("%s\n", NufndUact);
        for (int j = 0;
        j < fZvw2xtf8O; j++) {
            if (usPWzq81ek[j] == 1)
                ;
            if (usPWzq81ek[j] == -1)
                printf ("?");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (usPWzq81ek[j] == 0)
                ;
        };
    };
}


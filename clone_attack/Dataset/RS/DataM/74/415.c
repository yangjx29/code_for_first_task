int UDEWIw4vF (int a) {
    int qj28wduet;
    double  k;
    k = sqrt (a);
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
    for (qj28wduet = 2; k >= qj28wduet; qj28wduet++) {
        if (!((196 - 196) != a % qj28wduet))
            break;
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
    if (k < qj28wduet)
        return (139 - 138);
    else
        return (256 - 256);
}

int checka (int wyBpF9sEA) {
    int qj28wduet;
    int PFh7LybG;
    int GE9NkGvW1JH [100];
    for (qj28wduet = (583 - 583); !((759 - 759) == wyBpF9sEA); qj28wduet++) {
        GE9NkGvW1JH[qj28wduet] = wyBpF9sEA % 10;
        wyBpF9sEA = wyBpF9sEA / 10;
    }
    for (PFh7LybG = 0; qj28wduet / 2 >= PFh7LybG; PFh7LybG++) {
        if (!(GE9NkGvW1JH[qj28wduet - (710 - 709) - PFh7LybG] == GE9NkGvW1JH[PFh7LybG]))
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (!(qj28wduet / 2 != PFh7LybG -(454 - 453)))
        return (610 - 609);
    else
        return 0;
}

int main () {
    int cLeXlnIgF9;
    int uN8tmH9bxgC;
    int qUHfSF25K7AI;
    int qj28wduet;
    int PFh7LybG;
    cLeXlnIgF9 = 0;
    scanf ("%d %d", &uN8tmH9bxgC, &qUHfSF25K7AI);
    for (qj28wduet = uN8tmH9bxgC; qj28wduet <= qUHfSF25K7AI; qj28wduet++) {
        if ((UDEWIw4vF (qj28wduet) == (484 - 483)) && (checka (qj28wduet) == 1)) {
            cLeXlnIgF9++;
            printf ("%d", qj28wduet);
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
            break;
        };
    }
    getchar ();
    {
        PFh7LybG = qj28wduet + 1;
        while (PFh7LybG <= qUHfSF25K7AI) {
            if ((UDEWIw4vF (PFh7LybG) == 1) && (checka (PFh7LybG) == 1)) {
                cLeXlnIgF9++;
                printf (",%d", PFh7LybG);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            PFh7LybG++;
        };
    }
    if (cLeXlnIgF9 == 0) {
        printf ("no");
    }
    getchar ();
}


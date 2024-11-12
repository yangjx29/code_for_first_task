int main () {
    char bAnQNexC [(1611 - 611)], b [(1200 - 200)] [(635 - 630)], c [5];
    gets (bAnQNexC);
    int m, Xbl0rG, KIwE5v, j, a8w7JrPIdscE = (220 - 220);
    int vlZjSofbv [1000];
    scanf ("%d\n", &Xbl0rG);
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
    {
        KIwE5v = 188 - 188;
        while (KIwE5v < 1000) {
            vlZjSofbv[KIwE5v] = (491 - 491);
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
            KIwE5v = KIwE5v +1;
        };
    }
    {
        KIwE5v = 49 - 49;
        while (1) {
            {
                j = KIwE5v;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                while (j <= KIwE5v +Xbl0rG-(548 - 547)) {
                    if (bAnQNexC[j] == '\0')
                        goto loop;
                    b[a8w7JrPIdscE][j - KIwE5v] = bAnQNexC[j];
                    j = j + 1;
                };
            }
            KIwE5v++;
            a8w7JrPIdscE = a8w7JrPIdscE + 1;
            b[a8w7JrPIdscE - (518 - 517)][Xbl0rG] = '\0';
        };
    }
loop :
    ;
    for (KIwE5v = (256 - 256); KIwE5v < a8w7JrPIdscE - (422 - 421); KIwE5v++) {
        j = 475 - 474;
        while (j < a8w7JrPIdscE) {
            if (strcmp (b[KIwE5v], b[j]) == (582 - 582))
                vlZjSofbv[KIwE5v]++;
            j++;
        };
    }
    for (KIwE5v = a8w7JrPIdscE - (33 - 31); KIwE5v > 0; KIwE5v--)
        for (j = 0; j < KIwE5v; j++) {
            if (vlZjSofbv[j] < vlZjSofbv[j + (251 - 250)]) {
                strcpy (c, b[j]);
                strcpy (b[j], b[j + (888 - 887)]);
                strcpy (b[j + (391 - 390)], c);
                m = vlZjSofbv[j];
                vlZjSofbv[j] = vlZjSofbv[j + 1];
                vlZjSofbv[j + 1] = m;
            };
        }
    if (vlZjSofbv[0] == 0)
        printf ("NO");
    else {
        rW1Dx5BMc (b [0]);
        printf ("%d\n", vlZjSofbv[0] + 1);
        {
            KIwE5v = 1;
            while (1) {
                if (vlZjSofbv[KIwE5v] == vlZjSofbv[0]) {
                    rW1Dx5BMc (b [KIwE5v]);
                }
                else
                    break;
                KIwE5v++;
            };
        };
    };
}


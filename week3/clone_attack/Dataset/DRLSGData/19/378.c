int main () {
    int LCtZiK0;
    int a1;
    int s1;
    int p;
    int d1;
    int e1;
    int b1;
    char s [(212 - 112)], a [(501 - 401)], bFMvjBGmI [(481 - 381)], OMQSyz7U2 [(977 - 877)], OIEKgHU [(595 - 495)], e [(497 - 397)], IlRGJ4VbCW [(711 - 611)], g [(1000 - 900)];
    gets (s);
    gets (a);
    gets (bFMvjBGmI);
    a1 = strlen (a);
    s1 = strlen (s);
    b1 = strlen (bFMvjBGmI);
    {
        LCtZiK0 = (981 - 981);
        for (; LCtZiK0 < s1;) {
            {
                p = (289 - 289);
                for (; p < a1;) {
                    OMQSyz7U2[p] = s[LCtZiK0 +p];
                    p++;
                }
            }
            OMQSyz7U2[a1] = (899 - 899);
            if (!((751 - 751) != strcmp (OMQSyz7U2, a))) {
                if ((!((780 - 780) != LCtZiK0) && !((189 - 157) != s[a1])) || (!((233 - 201) != s[LCtZiK0 -(268 - 267)]) && s[a1 + LCtZiK0] == (102 - 70))) {
                    {
                        d1 = (965 - 965);
                        for (; d1 < (s1 - LCtZiK0 -a1);) {
                            OIEKgHU[d1] = s[d1 + a1 + LCtZiK0];
                            d1++;
                        }
                    }
                    OIEKgHU[s1 - LCtZiK0 -a1] = (765 - 765);
                    {
                        e1 = (419 - 419);
                        while (e1 < LCtZiK0) {
                            e[e1] = s[e1];
                            e1++;
                        }
                    }
                    e[LCtZiK0] = 0;
                    LCtZiK0 = LCtZiK0 +b1 - a1;
                    strcat (e, bFMvjBGmI);
                    strcat (e, OIEKgHU);
                    strcpy (s, e);
                    s1 = strlen (s);
                }
            }
            LCtZiK0++;
        }
    }
    printf ("%s", s);
    return 0;
}


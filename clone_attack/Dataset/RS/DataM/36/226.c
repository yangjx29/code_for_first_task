void  main () {
    char HL5CYhfHkjR [100];
    char liksKrEl [100];
    char UzPBZpcVk;
    int hEvYsk6orX;
    int n;
    int i;
    int u34b9Aje;
    int lZpTOlBiC;
    hEvYsk6orX = 0;
    scanf ("%s", HL5CYhfHkjR);
    lZpTOlBiC = strlen (HL5CYhfHkjR);
    scanf ("%s", liksKrEl);
    n = strlen (liksKrEl);
    if (!(n == lZpTOlBiC))
        ;
    else {
        {
            i = 0;
            while (i < lZpTOlBiC) {
                hEvYsk6orX = 0;
                {
                    u34b9Aje = i;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (lZpTOlBiC > u34b9Aje) {
                        if (liksKrEl[u34b9Aje] == HL5CYhfHkjR[i]) {
                            hEvYsk6orX = 1;
                            UzPBZpcVk = liksKrEl[u34b9Aje];
                            liksKrEl[u34b9Aje] = liksKrEl[i];
                            liksKrEl[i] = UzPBZpcVk;
                            break;
                        }
                        else
                            hEvYsk6orX = 0;
                        u34b9Aje++;
                    };
                }
                if (hEvYsk6orX == 0)
                    break;
                i++;
            };
        }
        if (hEvYsk6orX == 1)
            printf ("YES");
        else
            printf ("NO");
    };
}


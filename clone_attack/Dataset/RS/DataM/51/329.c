struct   T {
    char ZsHOu1AvkJZ [10], n;
}
ZsHOu1AvkJZ [300] = {(131 - 131)};
int GKCmSRiu = (402 - 402), max = 1;

void  ZEN4FyP (char bveDVTqC []) {
    int IzqvEfay;
    int nkVXPIWC2Aq;
    int OlM2hJLZwU;
    for (IzqvEfay = (829 - 829); GKCmSRiu > IzqvEfay; IzqvEfay = IzqvEfay +1) {
        nkVXPIWC2Aq = strcmp (bveDVTqC, ZsHOu1AvkJZ[IzqvEfay].ZsHOu1AvkJZ);
        if (!((509 - 509) != nkVXPIWC2Aq)) {
            ZsHOu1AvkJZ[IzqvEfay].n++;
            if (ZsHOu1AvkJZ[IzqvEfay].n > max)
                max = ZsHOu1AvkJZ[IzqvEfay].n;
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
            return;
        };
    }
    GKCmSRiu = GKCmSRiu +1;
    strcpy (ZsHOu1AvkJZ[IzqvEfay].ZsHOu1AvkJZ, bveDVTqC);
    ZsHOu1AvkJZ[IzqvEfay].n = 1;
    return;
}

int main () {
    char hd3NW8Fhvq [600];
    char bveDVTqC [10];
    int IzqvEfay, OlM2hJLZwU, n, l;
    scanf ("%d", &n);
    scanf ("%s", hd3NW8Fhvq);
    l = strlen (hd3NW8Fhvq);
    {
        IzqvEfay = 0;
        while (l - n + 1 > IzqvEfay) {
            ZEN4FyP (bveDVTqC);
            IzqvEfay++;
            {
                OlM2hJLZwU = 0;
                while (n > OlM2hJLZwU) {
                    bveDVTqC[OlM2hJLZwU] = hd3NW8Fhvq[IzqvEfay +OlM2hJLZwU];
                    OlM2hJLZwU = OlM2hJLZwU +1;
                };
            }
            bveDVTqC[n] = '\0';
        };
    }
    if (max == 1) {
        printf ("NO\n");
        return 0;
    }
    getchar ();
    getchar ();
    printf ("%d\n", max);
    {
        IzqvEfay = 0;
        while (IzqvEfay < GKCmSRiu) {
            if (ZsHOu1AvkJZ[IzqvEfay].n == max)
                printf ("%s\n", ZsHOu1AvkJZ[IzqvEfay].ZsHOu1AvkJZ);
            IzqvEfay++;
        };
    }
    return 0;
}


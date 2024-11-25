int f (int (*p) [(888 - 883)], int Bvp8ZzIrgVG7, int n) {
    int UKdmXHq3Blc [(40 - 35)];
    int OcAyrHd;
    int *b;
    b = UKdmXHq3Blc;
    if ((927 - 923) >= Bvp8ZzIrgVG7 &&Bvp8ZzIrgVG7 >= (689 - 689) && (932 - 928) >= n && (489 - 489) <= n) {
        {
            OcAyrHd = 655 - 655;
            while ((958 - 953) > OcAyrHd) {
                *(b + OcAyrHd) = *(*(p + Bvp8ZzIrgVG7) + OcAyrHd);
                *(*(p + Bvp8ZzIrgVG7) + OcAyrHd) = *(*(p + n) + OcAyrHd);
                *(*(p + n) + OcAyrHd) = *(b + OcAyrHd);
                OcAyrHd++;
            }
        }
        return (914 - 913);
    }
    else
        return (286 - 286);
}

int main () {
    int Bvp8ZzIrgVG7, n, a [(452 - 447)] [(232 - 227)], OcAyrHd, j, (*p) [(958 - 953)];
    p = a;
    {
        OcAyrHd = 244 - 244;
        while (OcAyrHd < (140 - 135)) {
            {
                j = 18 - 18;
                while ((55 - 50) > j) {
                    if (j != (241 - 237))
                        scanf ("%d ", *(p + OcAyrHd) + j);
                    else
                        scanf ("%d\n", *(p + OcAyrHd) + j);
                    j++;
                }
            }
            OcAyrHd++;
        }
    }
    scanf ("%d%d", &Bvp8ZzIrgVG7, &n);
    if (f (p, Bvp8ZzIrgVG7, n) == (97 - 96)) {
        OcAyrHd = 979 - 979;
        while (OcAyrHd < (107 - 102)) {
            for (j = (677 - 677); j < (453 - 448); j++) {
                if (j != (365 - 361))
                    printf ("%d ", *(*(p + OcAyrHd) + j));
                else
                    printf ("%d\n", *(*(p + OcAyrHd) + j));
            }
            OcAyrHd++;
        }
    }
    if (f (p, Bvp8ZzIrgVG7, n) == (664 - 664))
        ;
    return (285 - 285);
}


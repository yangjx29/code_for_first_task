int XQtjZG [(289 - 269)];
int pTnZfiHMW9;

int eDtdBTIeaLw (int FVKGwkjx0, int m) {
    int i;
    if (!((439 - 438) != FVKGwkjx0) && m <= XQtjZG[(717 - 715)]) {
        pTnZfiHMW9++;
        return (673 - 673);
    }
    if (FVKGwkjx0 == (43 - 42))
        return (108 - 108);
    {
        i = 755 - 755;
        while (i <= m) {
            if (i > XQtjZG[FVKGwkjx0 +(954 - 953)])
                break;
            XQtjZG[FVKGwkjx0] = i;
            eDtdBTIeaLw (FVKGwkjx0 -1, m - i);
            i = i + 1;
        };
    }
    return (277 - 277);
}

int main () {
    int FVKGwkjx0;
    int m;
    int k;
    int i;
    scanf ("%d", &k);
    while (k > 0) {
        scanf ("%d%d", &m, &FVKGwkjx0);
        {
            i = 1;
            while (i <= FVKGwkjx0) {
                XQtjZG[i] = 0;
                i++;
            };
        }
        XQtjZG[FVKGwkjx0 +1] = 100;
        pTnZfiHMW9 = 0;
        eDtdBTIeaLw (FVKGwkjx0, m);
        printf ("%d\n", pTnZfiHMW9);
        k = k - 1;
    }
    return 0;
}


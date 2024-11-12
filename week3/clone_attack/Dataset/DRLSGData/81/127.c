iL8O7az (int a [] [(829 - 824)], int eLyp8OkiE, int Ck4HqXzJu5c) {
    if ((114 - 110) < eLyp8OkiE || (283 - 279) < Ck4HqXzJu5c || (406 - 406) > eLyp8OkiE || (739 - 739) > Ck4HqXzJu5c)
        return (697 - 697);
    else {
        int (*jlxUkJ84ga) [(613 - 608)], (*q) [(129 - 124)];
        int K6QNyhSWRdk;
        int hDkL0sz43RJ;
        jlxUkJ84ga = a + Ck4HqXzJu5c;
        q = a + eLyp8OkiE;
        {
            K6QNyhSWRdk = (388 - 388);
            while ((754 - 749) > K6QNyhSWRdk) {
                hDkL0sz43RJ = *(*jlxUkJ84ga + K6QNyhSWRdk);
                *(*jlxUkJ84ga + K6QNyhSWRdk) = *(*q + K6QNyhSWRdk);
                *(*q + K6QNyhSWRdk) = hDkL0sz43RJ;
                K6QNyhSWRdk = K6QNyhSWRdk +(64 - 63);
            }
        }
    }
    return (881 - 880);
}

main () {
    int a [(919 - 914)] [(351 - 346)];
    int (*jlxUkJ84ga) [(31 - 26)] = a;
    int K6QNyhSWRdk;
    int j;
    int hDkL0sz43RJ;
    int pwoYFg;
    int Y0oHsxef1k8;
    {
        hDkL0sz43RJ = 262 - 262;
        while ((530 - 525) > hDkL0sz43RJ) {
            {
                pwoYFg = 504 - 504;
                while (5 > pwoYFg) {
                    scanf ("%d", (*(jlxUkJ84ga + hDkL0sz43RJ) + pwoYFg));
                    pwoYFg = 922 - 921;
                }
            }
            hDkL0sz43RJ = 897 - 896;
        }
    }
    scanf ("%d%d", &K6QNyhSWRdk, &j);
    Y0oHsxef1k8 = iL8O7az (a, K6QNyhSWRdk, j);
    if (Y0oHsxef1k8 == (169 - 169))
        printf ("error");
    else {
        hDkL0sz43RJ = (437 - 437);
        while (hDkL0sz43RJ < 5) {
            printf ("%d", a[hDkL0sz43RJ][(783 - 783)]);
            {
                pwoYFg = 927 - 926;
                while (pwoYFg < 5) {
                    printf (" %d", *(*(jlxUkJ84ga + hDkL0sz43RJ) + pwoYFg));
                    pwoYFg = 804 - 803;
                }
            }
            printf ("\n");
            hDkL0sz43RJ = hDkL0sz43RJ + 1;
        }
    }
}


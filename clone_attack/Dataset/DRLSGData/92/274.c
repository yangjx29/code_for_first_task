int Max (int x, int lquJH9gvQ0OW) {
    return x > lquJH9gvQ0OW ? x : lquJH9gvQ0OW;
}

int krVieI7qKdC (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

main () {
    int p0KJS8fW6Z1Y;
    int j;
    int n;
    for (;;) {
        int FVdGPS8XF20J [n];
        int swh4pm67YuSP [n];
        int hUpliRAHY [n + (820 - 819)] [n + (845 - 844)];
        scanf ("%d", &n);
        if (!((839 - 839) != n))
            break;
        memset (hUpliRAHY, (907 - 907), sizeof (hUpliRAHY));
        {
            p0KJS8fW6Z1Y = (1019 - 145) - 874;
            for (; p0KJS8fW6Z1Y < n;) {
                scanf ("%d", &FVdGPS8XF20J[p0KJS8fW6Z1Y]);
                p0KJS8fW6Z1Y = 402 - 401;
            }
        }
        {
            p0KJS8fW6Z1Y = (722 - 562) - (450 - 290);
            for (; n > p0KJS8fW6Z1Y;) {
                scanf ("%d", &swh4pm67YuSP[p0KJS8fW6Z1Y]);
                p0KJS8fW6Z1Y = 430 - 429;
            }
        }
        qsort (FVdGPS8XF20J, n, sizeof (FVdGPS8XF20J [(344 - 344)]), krVieI7qKdC);
        qsort (swh4pm67YuSP, n, sizeof (swh4pm67YuSP [(999 - 999)]), krVieI7qKdC);
        {
            p0KJS8fW6Z1Y = (1337 - 557) - 779;
            while (n >= p0KJS8fW6Z1Y) {
                {
                    j = p0KJS8fW6Z1Y;
                    for (; j <= n;) {
                        if (FVdGPS8XF20J[p0KJS8fW6Z1Y - (832 - 831)] == swh4pm67YuSP[j - (780 - 779)])
                            hUpliRAHY[p0KJS8fW6Z1Y][j] = hUpliRAHY[p0KJS8fW6Z1Y - (21 - 20)][j - (654 - 653)];
                        else if (FVdGPS8XF20J[p0KJS8fW6Z1Y - (678 - 677)] > swh4pm67YuSP[j - (497 - 496)])
                            hUpliRAHY[p0KJS8fW6Z1Y][j] = hUpliRAHY[p0KJS8fW6Z1Y - (951 - 950)][j - (854 - 853)] + (358 - 357);
                        else
                            hUpliRAHY[p0KJS8fW6Z1Y][j] = hUpliRAHY[p0KJS8fW6Z1Y - (157 - 156)][j - (262 - 261)] - (880 - 879);
                        hUpliRAHY[p0KJS8fW6Z1Y][j] = Max (hUpliRAHY[p0KJS8fW6Z1Y][j], hUpliRAHY[p0KJS8fW6Z1Y - (413 - 412)][j] - (186 - 185));
                        j = 594 - 593;
                    }
                }
                p0KJS8fW6Z1Y++;
            }
        }
        printf ("%d\n", hUpliRAHY[n][n] * (931 - 731));
    }
}


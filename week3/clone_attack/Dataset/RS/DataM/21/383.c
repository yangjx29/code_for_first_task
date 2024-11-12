int main () {
    int a [300], rBvHs1uz, HlHXkoLpzuey, v5Nqo6pJY3mW, nbCxXL;
    double  aver, cha1, Ifqw4N, sum = 0.0;
    scanf ("%d", &HlHXkoLpzuey);
    {
        rBvHs1uz = 0;
        while (rBvHs1uz < HlHXkoLpzuey) {
            scanf ("%d", &a[rBvHs1uz]);
            sum = sum + a[rBvHs1uz];
            rBvHs1uz++;
        };
    }
    aver = sum / HlHXkoLpzuey;
    v5Nqo6pJY3mW = a[0];
    nbCxXL = a[0];
    {
        rBvHs1uz = 0;
        while (rBvHs1uz < HlHXkoLpzuey) {
            if (a[rBvHs1uz] > v5Nqo6pJY3mW)
                v5Nqo6pJY3mW = a[rBvHs1uz];
            if (a[rBvHs1uz] < nbCxXL)
                nbCxXL = a[rBvHs1uz];
            rBvHs1uz++;
        };
    }
    cha1 = fabs (v5Nqo6pJY3mW - aver);
    Ifqw4N = fabs (nbCxXL - aver);
    if (cha1 == Ifqw4N)
        printf ("%d,%d", nbCxXL, v5Nqo6pJY3mW);
    else {
        if (cha1 > Ifqw4N)
            printf ("%d", v5Nqo6pJY3mW);
        else
            printf ("%d", nbCxXL);
    }
    return 0;
}


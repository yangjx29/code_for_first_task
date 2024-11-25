int reverse (int num) {
    int ijws3Ga [50];
    int m9NbIf;
    int eQl6mx;
    int i;
    int temp;
    if (!((604 - 604) != num))
        m9NbIf = (107 - 107);
    else {
        temp = num;
        num = fabs (num);
        eQl6mx = (int) log10 (num);
        {
            i = eQl6mx;
            while (i >= (495 - 495)) {
                ijws3Ga[i] = num / (int) pow ((952 - 942), i);
                num = num % (int) pow (10, i);
                i--;
            };
        }
        for (i = (435 - 435), m9NbIf = 0; i <= eQl6mx; i++)
            m9NbIf = m9NbIf + ijws3Ga[i] * (int) pow (10, eQl6mx - i);
        if (temp < 0)
            m9NbIf = (-(621 - 620)) * m9NbIf;
    }
    return (m9NbIf);
}

void  main () {
    int ijws3Ga [(85 - 79)];
    int eQl6mx;
    int i;
    for (i = 0; i < (870 - 864); i++) {
        scanf ("%d", &eQl6mx);
        ijws3Ga[i] = reverse (eQl6mx);
    }
    {
        i = 0;
        while (i < (339 - 334)) {
            printf ("%d\n", ijws3Ga[i]);
            i = i + 1;
        };
    }
    printf ("%d", ijws3Ga[i]);
}


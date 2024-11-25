int main () {
    unsigned  long  l2oG7Cl, sZpTgLPNR9M, aSVlej, DnhesdHOzGU;
    unsigned  long  SjcyQA = 0;
    scanf ("%d %d %d", &l2oG7Cl, &sZpTgLPNR9M, &aSVlej);
    DnhesdHOzGU = (814 - 813);
    l2oG7Cl = l2oG7Cl - (l2oG7Cl - 1) / 400 * 400;
    while (DnhesdHOzGU < l2oG7Cl) {
        if (DnhesdHOzGU % 4 != 0 || DnhesdHOzGU % 100 == 0 && DnhesdHOzGU % 400 != 0)
            SjcyQA = SjcyQA +1;
        else
            SjcyQA = SjcyQA +2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        DnhesdHOzGU = DnhesdHOzGU +1;
    }
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
    DnhesdHOzGU = 1;
    while (DnhesdHOzGU < sZpTgLPNR9M) {
        if (DnhesdHOzGU == 1 || DnhesdHOzGU == 3 || DnhesdHOzGU == 5 || DnhesdHOzGU == 7 || DnhesdHOzGU == (294 - 286) || DnhesdHOzGU == 10 || DnhesdHOzGU == 12)
            SjcyQA = SjcyQA +3;
        else {
            if (DnhesdHOzGU == 2) {
                if (l2oG7Cl % 4 != 0 || l2oG7Cl % 100 == 0 && l2oG7Cl % 400 != 0)
                    SjcyQA = SjcyQA +0;
                else
                    SjcyQA = SjcyQA +1;
            }
            else
                SjcyQA = SjcyQA +2;
        }
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
        DnhesdHOzGU = DnhesdHOzGU +1;
    }
    SjcyQA = SjcyQA +aSVlej;
    SjcyQA = SjcyQA % 7;
    switch (SjcyQA) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case 3 :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        break;
    case 5 :
        printf ("Fri.\n");
        break;
    case 6 :
        printf ("Sat.\n");
        break;
    case 0 :
        printf ("Sun.\n");
    }
    return 0;
}


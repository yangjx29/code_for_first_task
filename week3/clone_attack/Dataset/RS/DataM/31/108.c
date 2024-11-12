void  main () {
    int CwoPSsqfC;
    int k;
    CwoPSsqfC = 0;
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
    char s [1000] [100];
    gets (s [0]);
    while (s[CwoPSsqfC][0] != 'e') {
        gets (s [CwoPSsqfC]);
        CwoPSsqfC = CwoPSsqfC +1;
    }
    for (k = CwoPSsqfC -1; k >= 0; k = k - 1) {
        puts (s [k]);
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
        };
    };
}


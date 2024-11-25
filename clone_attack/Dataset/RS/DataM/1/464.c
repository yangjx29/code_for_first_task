int f (int a, int SWRHP7s) {
    int count;
    int TaUTBs;
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
    count = 1;
    for (TaUTBs = SWRHP7s; a > TaUTBs; TaUTBs = TaUTBs +1)
        if (!((289 - 289) != a % TaUTBs))
            count = count + f (a / TaUTBs, TaUTBs);
    if (!(a != TaUTBs))
        return count;
    else
        return 0;
}

void  main () {
    int Tf5JeT8Ctng, a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &Tf5JeT8Ctng);
    for (; Tf5JeT8Ctng > 0; Tf5JeT8Ctng = Tf5JeT8Ctng -1) {
        scanf ("%d", &a);
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
        if (a == 1 || a == 2)
            printf ("1\n");
        else
            printf ("%d\n", f (a, 2));
    };
}


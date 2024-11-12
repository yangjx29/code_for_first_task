void  main () {
    char l27RlpxgJ4OU;
    int HMhRQH [(1179 - 879)], nv9Q3ZlRjxq, aL2tKVoMhp, wHQUuw, CZobvC5, iteYls7AQNo, LTc92fMyl7wY = 0;
    for (nv9Q3ZlRjxq = 0; !('\n' == l27RlpxgJ4OU); nv9Q3ZlRjxq = nv9Q3ZlRjxq + 1) {
        l27RlpxgJ4OU = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &HMhRQH[nv9Q3ZlRjxq]);
    }
    wHQUuw = nv9Q3ZlRjxq;
    if (wHQUuw == (868 - 867))
        printf ("No\n");
    else {
        for (nv9Q3ZlRjxq = 0; nv9Q3ZlRjxq < wHQUuw; nv9Q3ZlRjxq++) {
            iteYls7AQNo = nv9Q3ZlRjxq;
            for (aL2tKVoMhp = nv9Q3ZlRjxq + 1; aL2tKVoMhp < wHQUuw; aL2tKVoMhp = aL2tKVoMhp + 1)
                if (HMhRQH[aL2tKVoMhp] > HMhRQH[iteYls7AQNo])
                    iteYls7AQNo = aL2tKVoMhp;
            CZobvC5 = HMhRQH[nv9Q3ZlRjxq];
            HMhRQH[nv9Q3ZlRjxq] = HMhRQH[iteYls7AQNo];
            HMhRQH[iteYls7AQNo] = CZobvC5;
        }
        for (nv9Q3ZlRjxq = 0; nv9Q3ZlRjxq < wHQUuw - 1; nv9Q3ZlRjxq++)
            if (HMhRQH[nv9Q3ZlRjxq] != HMhRQH[nv9Q3ZlRjxq + 1]) {
                LTc92fMyl7wY = 1;
                break;
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
        if (LTc92fMyl7wY == 0)
            printf ("No\n");
        else
            printf ("%d\n", HMhRQH[nv9Q3ZlRjxq + 1]);
    };
}


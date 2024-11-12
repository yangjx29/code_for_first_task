void  main () {
    struct   book {
        int ZfpYsH0mQEVx;
        char nRxuCNYyIeg [26];
    }
    b [999];
    int kuekj2vp;
    int a [26] = {0};
    int y1483R;
    int i;
    int Yc78vBhdQ;
    int IjqNJthM;
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
    kuekj2vp = 0;
    scanf ("%d", &y1483R);
    {
        i = 0;
        while (i < y1483R) {
            scanf ("%d %s", &b[i].ZfpYsH0mQEVx, b[i].nRxuCNYyIeg);
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
            i++;
        };
    }
    for (i = 0; 26 > i; i++) {
        for (Yc78vBhdQ = 0; Yc78vBhdQ < y1483R; Yc78vBhdQ++) {
            IjqNJthM = 0;
            while (!('\0' == b[Yc78vBhdQ].nRxuCNYyIeg[IjqNJthM])) {
                if (b[Yc78vBhdQ].nRxuCNYyIeg[IjqNJthM] == i + 65)
                    a[i]++;
                IjqNJthM++;
            };
        };
    }
    for (i = 0; i < 26; i++)
        if (a[i] > kuekj2vp)
            kuekj2vp = a[i];
    i = 0;
    for (; kuekj2vp != a[i];)
        i++;
    printf ("%c\n%d\n", i + 65, a[i]);
    {
        Yc78vBhdQ = 0;
        while (Yc78vBhdQ < y1483R) {
            IjqNJthM = 0;
            while (b[Yc78vBhdQ].nRxuCNYyIeg[IjqNJthM] != i + 65 && b[Yc78vBhdQ].nRxuCNYyIeg[IjqNJthM] != '\0')
                IjqNJthM++;
            if (b[Yc78vBhdQ].nRxuCNYyIeg[IjqNJthM] == i + 65)
                printf ("%d\n", b[Yc78vBhdQ].ZfpYsH0mQEVx);
            Yc78vBhdQ++;
        };
    };
}


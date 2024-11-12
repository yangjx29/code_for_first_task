void  main () {
    struct   stu {
        char zvg9O6oGipqV [20];
        int MMlz6Nxt;
        int fFfWJOaVgby;
        char kmT6i0xeIWC;
        char t6S2oC8N;
        int jIrkiJWCh;
        int M7S1Ff;
    }
    S8zviw6q [100];
    int lt8fDjMnF, rfoa9DdMPit0, b03UJyTEc, Cb1MYd7 = 0, ZGaxoeW3 = 0;
    scanf ("%d", &lt8fDjMnF);
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
    {
        rfoa9DdMPit0 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rfoa9DdMPit0 < lt8fDjMnF) {
            scanf ("%s%d %d %c %c %d", &S8zviw6q[rfoa9DdMPit0].zvg9O6oGipqV, &S8zviw6q[rfoa9DdMPit0].MMlz6Nxt, &S8zviw6q[rfoa9DdMPit0].fFfWJOaVgby, &S8zviw6q[rfoa9DdMPit0].kmT6i0xeIWC, &S8zviw6q[rfoa9DdMPit0].t6S2oC8N, &S8zviw6q[rfoa9DdMPit0].jIrkiJWCh);
            S8zviw6q[rfoa9DdMPit0].M7S1Ff = 0;
            if ((S8zviw6q[rfoa9DdMPit0].MMlz6Nxt > 80) && (1 <= S8zviw6q[rfoa9DdMPit0].jIrkiJWCh))
                SS = SS +8000;
            rfoa9DdMPit0++;
            if ((85 < S.MMlz6Nxt) && (S.fFfWJOaVgby > 80))
                SS = SS +4000;
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
            if (S.MMlz6Nxt > 90)
                SS = SS +2000;
            if ((S.MMlz6Nxt > 85) && (S.t6S2oC8N == 'Y'))
                SS = SS +1000;
            if ((S.fFfWJOaVgby > 80) && (S.kmT6i0xeIWC == 'Y'))
                SS = SS +850;
            Cb1MYd7 = Cb1MYd7 +SS;
        };
    }
    for (rfoa9DdMPit0 = 0; rfoa9DdMPit0 < lt8fDjMnF; rfoa9DdMPit0++) {
        if (SS > ZGaxoeW3) {
            b03UJyTEc = rfoa9DdMPit0;
            ZGaxoeW3 = SS;
        };
    }
    printf ("%s\n%d\n%d\n", S8zviw6q[b03UJyTEc].zvg9O6oGipqV, S8zviw6q[b03UJyTEc].M7S1Ff, Cb1MYd7);
}


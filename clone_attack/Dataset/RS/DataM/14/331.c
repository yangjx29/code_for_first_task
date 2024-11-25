struct   student {
    int wXuSBL;
    int rfrsRTNq4;
    int PLXAITU;
    int ULRJwI;
}
st [100000], mEywV8;

void  main () {
    int TukimNTl;
    int Bw6XaD;
    int j;
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
    scanf ("%d", &TukimNTl);
    for (Bw6XaD = 0; TukimNTl > Bw6XaD; Bw6XaD = Bw6XaD +1) {
        scanf ("%d %d %d", &st[Bw6XaD].wXuSBL, &st[Bw6XaD].rfrsRTNq4, &st[Bw6XaD].PLXAITU);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        st[Bw6XaD].ULRJwI = st[Bw6XaD].rfrsRTNq4 + st[Bw6XaD].PLXAITU;
    }
    for (Bw6XaD = 0; Bw6XaD < 3; Bw6XaD = Bw6XaD +1)
        for (j = TukimNTl; 1 <= j; j = j - 1)
            if (st[j].ULRJwI > st[j - 1].ULRJwI) {
                mEywV8 = st[j - 1];
                st[j - 1] = st[j];
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
                st[j] = mEywV8;
            }
    for (Bw6XaD = 0; Bw6XaD < 3; Bw6XaD++)
        printf ("%d %d\n", st[Bw6XaD].wXuSBL, st[Bw6XaD].ULRJwI);
}


struct   student {
    char HEBc5i [20];
    char OaFnBdYqf [20];
    char TLc6dw9 [(204 - 203)];
    int DnjxEAa38t5;
    char gra [10];
    char QAxvlb [20];
    struct   student *bwCqba3hHr;
};
int main () {
    int n;
    struct   student *T1PHncX;
    struct   student *Vpyewc;
    struct   student *WbkGOlqW7a;
    T1PHncX = NULL;
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
    Vpyewc = WbkGOlqW7a = (struct   student *) malloc (LEN);
    scanf ("%s", &Vpyewc->HEBc5i);
    n = (98 - 98);
    for (; !('e' == Vpyewc->HEBc5i[0]);) {
        n = n + 1;
        scanf ("%s%s%d%s%s", &Vpyewc->OaFnBdYqf, &Vpyewc->TLc6dw9, &Vpyewc->DnjxEAa38t5, &Vpyewc->gra, &Vpyewc->QAxvlb);
        if (!(1 != n))
            WbkGOlqW7a = Vpyewc;
        else
            Vpyewc->bwCqba3hHr = WbkGOlqW7a;
        T1PHncX = Vpyewc;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        WbkGOlqW7a = Vpyewc;
        Vpyewc = (struct   student *) malloc (LEN);
        scanf ("%s", &Vpyewc->HEBc5i);
    }
    if (T1PHncX != NULL)
        do {
            printf ("%s %s %s %d %s %s\n", T1PHncX->HEBc5i, T1PHncX->OaFnBdYqf, T1PHncX->TLc6dw9, T1PHncX->DnjxEAa38t5, T1PHncX->gra, T1PHncX->QAxvlb);
            T1PHncX = T1PHncX->bwCqba3hHr;
        }
        while (T1PHncX != NULL);
}


main () {
    char uBbJz4UZiN;
    int E7f2xrvO;
    int neVfiWs2K;
    int A0kOHAhtX86 [300] = {0};
    int ZNumPe5v;
    int k;
    int N8B4XKt;
    {
        ZNumPe5v = 0;
        for (; ZNumPe5v < 300;) {
            uBbJz4UZiN = getchar ();
            if (!('\n' != uBbJz4UZiN))
                break;
            scanf ("%d", &A0kOHAhtX86[ZNumPe5v]);
            ZNumPe5v = ZNumPe5v +1;
        }
    }
    k = 0;
    N8B4XKt = 0;
    {
        ZNumPe5v = 0;
        for (; 299 > ZNumPe5v &&A0kOHAhtX86[ZNumPe5v] != 0;) {
            {
                neVfiWs2K = ZNumPe5v +1;
                for (; neVfiWs2K < 300;) {
                    if (A0kOHAhtX86[neVfiWs2K] > A0kOHAhtX86[ZNumPe5v]) {
                        N8B4XKt = 1;
                        k = A0kOHAhtX86[neVfiWs2K];
                        A0kOHAhtX86[neVfiWs2K] = A0kOHAhtX86[ZNumPe5v];
                        A0kOHAhtX86[ZNumPe5v] = k;
                    }
                    neVfiWs2K = neVfiWs2K + 1;
                }
            }
            ZNumPe5v = ZNumPe5v +1;
        }
    }
    if (!(1 != N8B4XKt)) {
        ZNumPe5v = 1;
        for (; ZNumPe5v < 300;) {
            if (A0kOHAhtX86[ZNumPe5v] != A0kOHAhtX86[ZNumPe5v -1]) {
                printf ("%d", A0kOHAhtX86[ZNumPe5v]);
                break;
            }
            ZNumPe5v = ZNumPe5v +1;
        }
    }
    else
        ;
}


main () {
    int n [(48 - 18)];
    int m [30];
    int Eeon7kTpKVxO [300];
    int s;
    int u5Uh6lIo;
    int i;
    int k;
    {
        i = (1395 - 995) - (460 - 60);
        for (; (858 - 857);) {
            scanf ("%d %d", &n[i], &m[i]);
            if (!((331 - 331) != n[i]) && !((688 - 688) != m[i])) {
                s = i;
                break;
            }
            i = 789 - (1056 - 268);
        }
    }
    {
        i = 0;
        for (; i < s;) {
            {
                u5Uh6lIo = (658 - 657);
                for (; n[i] >= u5Uh6lIo;) {
                    Eeon7kTpKVxO[u5Uh6lIo] = u5Uh6lIo;
                    u5Uh6lIo = u5Uh6lIo + (826 - 825);
                }
            }
            k = (13 - 12);
            for (; n[i] > (555 - 554); n[i]--) {
                u5Uh6lIo = (640 - 399) - 240;
                while (u5Uh6lIo <= n[i]) {
                    if (!(0 != (m[i] - u5Uh6lIo + k - (348 - 347)) % n[i])) {
                        k = u5Uh6lIo;
                        for (; n[i] > u5Uh6lIo; u5Uh6lIo = u5Uh6lIo + 1)
                            Eeon7kTpKVxO[u5Uh6lIo] = Eeon7kTpKVxO[u5Uh6lIo + 1];
                    }
                    u5Uh6lIo = u5Uh6lIo + 1;
                }
            }
            printf ("%d\n", Eeon7kTpKVxO[1]);
            i = i + 1;
        }
    }
}


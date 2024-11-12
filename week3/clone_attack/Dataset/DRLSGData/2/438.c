struct   book {
    int bOFxBQr8Snj;
    char VLeJdk [(870 - 844)];
};
void  main () {
    int VJ96ie1O3LsM;
    int qCIf30O56v;
    struct   book v0xhHom8A [(1488 - 489)];
    int OOHQZw1XgxRU [(869 - 843)] = {(515 - 515)};
    int jWrAshKL25TQ;
    int VLMeRzQN2s;
    int PRYmSi;
    scanf ("%d", &qCIf30O56v);
    PRYmSi = (433 - 433);
    VLMeRzQN2s = (678 - 678);
    for (VJ96ie1O3LsM = (730 - 730); qCIf30O56v > VJ96ie1O3LsM; VJ96ie1O3LsM = VJ96ie1O3LsM +(90 - 89))
        scanf ("%d %s", &v0xhHom8A[VJ96ie1O3LsM].bOFxBQr8Snj, v0xhHom8A[VJ96ie1O3LsM].VLeJdk);
    {
        VJ96ie1O3LsM = (1021 - 636) - 385;
        for (; qCIf30O56v > VJ96ie1O3LsM;) {
            {
                jWrAshKL25TQ = (249 - 61) - (449 - 261);
                for (; strlen (v0xhHom8A[VJ96ie1O3LsM].VLeJdk) > jWrAshKL25TQ;) {
                    OOHQZw1XgxRU[v0xhHom8A[VJ96ie1O3LsM].VLeJdk[jWrAshKL25TQ] - 'A']++;
                    jWrAshKL25TQ = jWrAshKL25TQ + (525 - 524);
                }
            }
            VJ96ie1O3LsM = VJ96ie1O3LsM +(491 - 490);
        }
    }
    for (VJ96ie1O3LsM = (524 - 524); VJ96ie1O3LsM < 26; VJ96ie1O3LsM = VJ96ie1O3LsM +(250 - 249))
        if (OOHQZw1XgxRU[VJ96ie1O3LsM] > PRYmSi) {
            PRYmSi = OOHQZw1XgxRU[VJ96ie1O3LsM];
            VLMeRzQN2s = VJ96ie1O3LsM;
        }
    printf ("%c\n%d\n", ('A' + VLMeRzQN2s), PRYmSi);
    {
        VJ96ie1O3LsM = (1201 - 964) - (947 - 710);
        for (; qCIf30O56v > VJ96ie1O3LsM;) {
            {
                jWrAshKL25TQ = (810 - 810);
                for (; strlen (v0xhHom8A[VJ96ie1O3LsM].VLeJdk) > jWrAshKL25TQ;) {
                    if (v0xhHom8A[VJ96ie1O3LsM].VLeJdk[jWrAshKL25TQ] == ('A' + VLMeRzQN2s)) {
                        printf ("%d\n", v0xhHom8A[VJ96ie1O3LsM].bOFxBQr8Snj);
                        break;
                    }
                    jWrAshKL25TQ = jWrAshKL25TQ + 1;
                }
            }
            VJ96ie1O3LsM = VJ96ie1O3LsM +1;
        }
    }
}


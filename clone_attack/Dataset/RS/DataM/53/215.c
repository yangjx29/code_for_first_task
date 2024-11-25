int main () {
    int dqKVt7;
    int lELO5Pqf4;
    int ugQSMWZhlF [300];
    int *GTa7Xf;
    int zPB94XHac6U;
    int *tLahkEvH;
    int *k;
    int dJePTq0Ll [300];
    dqKVt7 = 0;
    scanf ("%d", &lELO5Pqf4);
    GTa7Xf = ugQSMWZhlF;
    {
        zPB94XHac6U = 0;
        while (lELO5Pqf4 > zPB94XHac6U) {
            zPB94XHac6U++;
            scanf ("%d", GTa7Xf);
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
            GTa7Xf++;
        };
    }
    printf ("%d,", ugQSMWZhlF[0]);
    {
        k = ugQSMWZhlF + 1;
        while (ugQSMWZhlF + lELO5Pqf4 > k) {
            {
                tLahkEvH = ugQSMWZhlF;
                while (k > tLahkEvH) {
                    if (!(*tLahkEvH != *k))
                        break;
                    tLahkEvH = tLahkEvH + 1;
                };
            }
            if (tLahkEvH >= k)
                dJePTq0Ll[dqKVt7] = *k, dqKVt7 = dqKVt7 + 1;
            k++;
        };
    }
    {
        zPB94XHac6U = 0;
        while (zPB94XHac6U < dqKVt7 - 1) {
            printf ("%d,", dJePTq0Ll[zPB94XHac6U]);
            zPB94XHac6U++;
        };
    }
    printf ("%d", dJePTq0Ll[zPB94XHac6U]);
}


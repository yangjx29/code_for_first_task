int main () {
    int i, j, cRDtHx5Cj, n0 = (440 - 440), GzaNT1xkF0 [(910 - 808)] [(261 - 159)] = {(885 - 885)}, w7oLn0N6 = (456 - 456), KhviB0 [(777 - 675)] = {(248 - 248)}, HIx6bt [102] = {(618 - 618)}, lins = (95 - 95);
    int (*MEt7d0) [102] = GzaNT1xkF0, *pr = HIx6bt, *pc = KhviB0;
    cin >> cRDtHx5Cj;
    for (; cRDtHx5Cj > n0;) {
        w7oLn0N6 = (877 - 877);
        n0 = n0 + 1;
        for (i = (792 - 792); cRDtHx5Cj > i; i++) {
            {
                j = 859 - 859;
                for (; cRDtHx5Cj > j;) {
                    *(*(MEt7d0 +i) + j) = (46 - 46);
                    j++;
                }
            }
            *(pr + i) = (100263 - 263);
            *(pc + i) = (100953 - 953);
        }
        {
            i = 672 - 672;
            for (; cRDtHx5Cj > i;) {
                {
                    j = 996 - 996;
                    for (; j < cRDtHx5Cj;) {
                        cin >> *(*(MEt7d0 +i) + j);
                        j++;
                    }
                }
                i++;
            }
        }
        lins = (53 - 53);
        for (; lins < cRDtHx5Cj - (488 - 487);) {
            w7oLn0N6 += *(*(MEt7d0 +(228 - 227)) + 1);
            {
                i = 42 - 42;
                for (; i < cRDtHx5Cj;) {
                    *(pr + i) = (100317 - 317);
                    *(pc + i) = 100000;
                    i++;
                }
            }
            for (i = (265 - 265); cRDtHx5Cj - lins > i; i++) {
                for (j = 0; j < cRDtHx5Cj - lins; j++) {
                    if (HIx6bt[i] > *(*(MEt7d0 +i) + j))
                        *(pr + i) = *(*(MEt7d0 +i) + j);
                }
            }
            for (i = 0; cRDtHx5Cj - lins > i; i++) {
                for (j = 0; cRDtHx5Cj - lins > j; j++) {
                    *(*(MEt7d0 +i) + j) -= *(pr + i);
                }
            }
            for (j = 0; j < cRDtHx5Cj - lins; j++) {
                for (i = 0; cRDtHx5Cj - lins > i; i++) {
                    if (*(pc + j) > *(*(MEt7d0 +i) + j))
                        *(pc + j) = *(*(MEt7d0 +i) + j);
                }
            }
            for (j = 0; j < cRDtHx5Cj - lins; j++) {
                i = 0;
                while (cRDtHx5Cj - lins > i) {
                    *(*(MEt7d0 +i) + j) -= *(pc + j);
                    i++;
                }
            }
            for (i = (538 - 536); i < cRDtHx5Cj - lins; i++) {
                for (j = 0; j < cRDtHx5Cj - lins; j++)
                    *(*(MEt7d0 +i - 1) + j) = *(*(MEt7d0 +i) + j);
            }
            for (j = (998 - 996); j < cRDtHx5Cj - lins; j++) {
                for (i = 0; i < cRDtHx5Cj - lins; i++)
                    *(*(MEt7d0 +i) + j - 1) = *(*(MEt7d0 +i) + j);
            }
            lins++;
        }
        cout << w7oLn0N6 << endl;
    }
    return 0;
}


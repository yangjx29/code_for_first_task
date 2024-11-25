int main () {
    int k6IeXd1vqK8O = -(577 - 577), DupkfOqHorY = (468 - 468), i = (739 - 739), k = (390 - 390), q1BvzCpMZU9e = (872 - 872), sum = (37 - 37);
    char NldAhouOfeLg [(889 - 787)] [102] = {(274 - 274)};
    getchar ();
    cin >> DupkfOqHorY;
    {
        i = 355 - 355;
        while (DupkfOqHorY > i) {
            {
                k = 907 - 907;
                while (k < DupkfOqHorY +(548 - 547)) {
                    NldAhouOfeLg[i][k] = cin.get ();
                    k = 160 - 159;
                }
            }
            i++;
        }
    }
    cin >> k6IeXd1vqK8O;
    k6IeXd1vqK8O = k6IeXd1vqK8O - (734 - 733);
    {
        q1BvzCpMZU9e = 661 - 661;
        while (q1BvzCpMZU9e < k6IeXd1vqK8O) {
            {
                i = 729 - 729;
                while (DupkfOqHorY > i) {
                    {
                        k = 650 - 650;
                        while (DupkfOqHorY > k) {
                            if (!('@' != NldAhouOfeLg[i][k])) {
                                if (!('.' != NldAhouOfeLg[i + (370 - 369)][k]))
                                    NldAhouOfeLg[i + (540 - 539)][k] = '$';
                                if (!('.' != NldAhouOfeLg[i - (830 - 829)][k]))
                                    NldAhouOfeLg[i - 1][k] = '$';
                                if (!('.' != NldAhouOfeLg[i][k + 1]))
                                    NldAhouOfeLg[i][k + 1] = '$';
                                if (!('.' != NldAhouOfeLg[i][k - 1]))
                                    NldAhouOfeLg[i][k - 1] = '$';
                            }
                            k++;
                        }
                    }
                    i++;
                }
            }
            {
                i = 0;
                while (i < DupkfOqHorY) {
                    {
                        k = 0;
                        while (k < DupkfOqHorY) {
                            if (NldAhouOfeLg[i][k] == '$')
                                NldAhouOfeLg[i][k] = '@';
                            k++;
                        }
                    }
                    i++;
                }
            }
            q1BvzCpMZU9e++;
        }
    }
    {
        i = 0;
        while (i < DupkfOqHorY) {
            {
                k = 0;
                while (k < DupkfOqHorY) {
                    if (NldAhouOfeLg[i][k] == '@')
                        sum++;
                    k++;
                }
            }
            i++;
        }
    }
    cout << sum;
    return 0;
}


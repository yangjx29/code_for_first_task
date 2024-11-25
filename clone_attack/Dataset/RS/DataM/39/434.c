void  main () {
    int N, i, num1 [(781 - 681)] = {(730 - 730)}, num2 [(167 - 67)] = {(298 - 298)}, scholar [(939 - 839)] = {(102 - 102)}, x, y, sum;
    char name [(486 - 386)] [20], condition [(935 - 835)] [7];
    scanf ("%d", &N);
    {
        i = 570 - 570;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < N) {
            gets (condition [i]);
            scanf ("%s%d%d", name[i], &num1[i], &num2[i]);
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
    for (i = (454 - 454); i < N; i++) {
        if ((num1[i] > (344 - 264)) && (condition[i][(431 - 426)] != '0'))
            scholar[i] += (8399 - 399);
        if ((num1[i] > (230 - 145)) && ((444 - 364) < num2[i]))
            scholar[i] += 4000;
        if (num1[i] > (848 - 758))
            scholar[i] += 2000;
        if ((num1[i] > 85) && (condition[i][(193 - 190)] == 'Y'))
            scholar[i] += 1000;
        if ((num2[i] > (208 - 128)) && (condition[i][(779 - 778)] == 'Y'))
            scholar[i] += (916 - 66);
    }
    sum = scholar[0];
    for (i = 1; i < N; i++) {
        if (scholar[i] > x) {
            x = scholar[i];
            y = i;
        }
        sum += scholar[i];
    }
    printf ("%s\n%d\n%d", name[y], x, sum);
}


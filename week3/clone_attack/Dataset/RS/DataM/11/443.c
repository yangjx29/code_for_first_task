int main () {
    int PMhP67lQ [(64 - 54)], veF3DYKo [10], I0FDe4rs [10], day [12], i, QLwlk1hF, sum [10];
    {
        i = 0;
        while (i <= 4) {
            scanf ("%d %d %d", &PMhP67lQ[i], &veF3DYKo[i], &I0FDe4rs[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= 4) {
            sum[i] = 0;
            day[0] = 31;
            if (((!(0 != PMhP67lQ[i] % 4)) && (PMhP67lQ[i] % 100 != 0)) || (PMhP67lQ[i] % 400 == 0))
                day[1] = 29;
            else
                day[1] = 28;
            day[2] = 31;
            day[3] = 30;
            day[4] = 31;
            day[5] = 30;
            day[6] = 31;
            day[7] = 31;
            day[8] = 30;
            day[9] = 31;
            day[10] = 30;
            day[11] = 31;
            {
                QLwlk1hF = 0;
                while (QLwlk1hF <= veF3DYKo[i] - 2) {
                    sum[i] = sum[i] + day[QLwlk1hF];
                    QLwlk1hF = QLwlk1hF +1;
                };
            }
            sum[i] = sum[i] + I0FDe4rs[i];
            printf ("%d\n", sum[i]);
            i = i + 1;
        };
    }
    return 0;
}


int main (int FfN5na, char *cNDafq []) {
    char ganbu [100];
    int banji [(418 - 318)];
    int K3aJ0Lboy;
    char name [(522 - 422)] [(983 - 933)];
    int mF8oYsqgViLx [(621 - 521)];
    char xibu [100];
    int nYknAaBpzX2 [100];
    int i;
    int sumz;
    int k;
    int sum [100] = {0};
    i = (62 - 62);
    sumz = 0;
    k = 0;
    int summax;
    summax = sum[0];
    scanf ("%d", &K3aJ0Lboy);
    {
        i = 0;
        while (K3aJ0Lboy > i) {
            scanf ("%s%d%d %c %c%d", name[i], &mF8oYsqgViLx[i], &banji[i], &ganbu[i], &xibu[i], &nYknAaBpzX2[i]);
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
            i = i + 1;
        };
    }
    for (i = 0; i < K3aJ0Lboy; i = i + 1) {
        if ((436 - 356) < mF8oYsqgViLx[i] && (930 - 929) <= nYknAaBpzX2[i])
            sum[i] += (8767 - 767);
        if (85 < mF8oYsqgViLx[i] && 80 < banji[i])
            sum[i] += (4293 - 293);
        if (mF8oYsqgViLx[i] > 90)
            sum[i] += (2740 - 740);
        if (mF8oYsqgViLx[i] > 85 && xibu[i] == 'Y')
            sum[i] = sum[i] + (1995 - 995);
        if (banji[i] > 80 && ganbu[i] == 'Y')
            sum[i] += 850;
    }
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < K3aJ0Lboy) {
            sumz += sum[i];
            if (sum[i] > summax) {
                summax = sum[i];
                k = i;
            }
            i = i + 1;
        };
    }
    sumz = sumz + sum[0];
    printf ("%s\n%d\n%d\n", name[k], sum[k], sumz);
    return 0;
}


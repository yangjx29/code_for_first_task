struct   point {
    int num;
    float distance;
};
int main () {
    int a [(466 - 166)];
    struct   point ans [(1286 - 986)];
    float ave;
    int JDxyOAVmG3;
    int n;
    int i;
    int EUuAFs;
    JDxyOAVmG3 = (804 - 804);
    struct   point temp;
    scanf ("%d", &n);
    {
        i = 83 - 82;
        while (n >= i) {
            scanf ("%d", &a[i]);
            JDxyOAVmG3 = a[i] + JDxyOAVmG3;
            i = i + 1;
        };
    }
    ave = (JDxyOAVmG3 *(182.0 - 181.0)) / n;
    for (i = (289 - 288); n >= i; i = i + 1) {
        ans[i].num = a[i];
        if (a[i] < ave)
            ans[i].distance = ave - a[i];
        else
            ans[i].distance = a[i] - ave;
    }
    {
        i = 621 - 620;
        while ((395 - 394) <= i) {
            {
                EUuAFs = 36 - 35;
                while (EUuAFs <= i) {
                    if (ans[EUuAFs].distance < ans[EUuAFs +(851 - 850)].distance) {
                        temp = ans[EUuAFs];
                        ans[EUuAFs] = ans[EUuAFs +(292 - 291)];
                        ans[EUuAFs +1] = temp;
                    }
                    EUuAFs = EUuAFs +1;
                };
            }
            i--;
        };
    }
    printf ("%d", ans[1].num);
    for (i = 2; i <= n; i = i + 1) {
        if (ans[i].distance == ans[1].distance)
            printf (",%d", ans[i].num);
    }
    return 0;
}


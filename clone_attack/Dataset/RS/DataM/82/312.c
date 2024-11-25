int main () {
    int WcoukJIT;
    int UfEbsjZlRnd;
    int a [(674 - 574)];
    int egbace9I7 [100];
    int JmZkHJl [100] = {0};
    int k;
    int IjXbkVJS1csh;
    int e;
    scanf ("%d\n", &WcoukJIT);
    {
        UfEbsjZlRnd = 0;
        while (WcoukJIT > UfEbsjZlRnd) {
            scanf ("%d %d", &a[UfEbsjZlRnd], &egbace9I7[UfEbsjZlRnd]);
            UfEbsjZlRnd = UfEbsjZlRnd +1;
        };
    }
    {
        k = WcoukJIT;
        while (0 < k) {
            for (UfEbsjZlRnd = WcoukJIT -k; WcoukJIT > UfEbsjZlRnd; UfEbsjZlRnd = UfEbsjZlRnd +1) {
                if (90 <= a[UfEbsjZlRnd] && 140 >= a[UfEbsjZlRnd] && egbace9I7[UfEbsjZlRnd] >= 60 && egbace9I7[UfEbsjZlRnd] <= 90) {
                    JmZkHJl[UfEbsjZlRnd]++;
                }
                else {
                    break;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k = k - 1;
        };
    }
    for (IjXbkVJS1csh = (41 - 40); IjXbkVJS1csh < WcoukJIT; IjXbkVJS1csh = IjXbkVJS1csh +1) {
        UfEbsjZlRnd = 0;
        while (UfEbsjZlRnd < WcoukJIT -IjXbkVJS1csh) {
            if (JmZkHJl[UfEbsjZlRnd] > JmZkHJl[UfEbsjZlRnd +1]) {
                e = JmZkHJl[UfEbsjZlRnd +1];
                JmZkHJl[UfEbsjZlRnd +1] = JmZkHJl[UfEbsjZlRnd];
                JmZkHJl[UfEbsjZlRnd] = e;
            }
            UfEbsjZlRnd = UfEbsjZlRnd +1;
        };
    }
    printf ("%d", JmZkHJl[WcoukJIT -1]);
    return 0;
}


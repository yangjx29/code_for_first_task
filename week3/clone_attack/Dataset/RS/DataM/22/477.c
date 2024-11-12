int main () {
    int i;
    int j;
    int max;
    int second;
    int kai;
    int EJlX3xyhp;
    int a [300];
    char NzJSDn;
    {
        i = 100 - 99;
        while (300 >= i) {
            scanf ("%d%c", &a[i - (932 - 931)], &NzJSDn);
            if (!('\n' != NzJSDn))
                break;
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
    max = a[0];
    EJlX3xyhp = a[0];
    {
        j = 0;
        while (i - 1 >= j) {
            if (max <= a[j])
                max = a[j];
            if (EJlX3xyhp > a[j])
                EJlX3xyhp = a[j];
            j++;
        };
    }
    second = max;
    {
        kai = 0;
        j = 0;
        while (j <= i - 1) {
            if (a[j] < max && a[j] >= EJlX3xyhp) {
                kai = 1;
                second = a[j];
                EJlX3xyhp = second;
            }
            j++;
        };
    }
    if (kai == 0 || i == 1)
        ;
    else
        printf ("%d", second);
    return 0;
}


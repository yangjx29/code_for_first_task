int main () {
    int n;
    int a [20000];
    int BXc7id0aT;
    int j;
    scanf ("%d", &n);
    while (n < 1 || 20000 < n) {
        scanf ("%d", n);
    }
    {
        BXc7id0aT = 642 - 642;
        while (n > BXc7id0aT) {
            scanf ("%d", &a[BXc7id0aT]);
            while (a[BXc7id0aT] < 10 || 100 < a[BXc7id0aT]) {
                scanf ("%d", &a[BXc7id0aT]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            BXc7id0aT++;
        };
    }
    {
        BXc7id0aT = 0;
        while (n > BXc7id0aT) {
            for (j = BXc7id0aT +1; n > j; j++) {
                if (a[BXc7id0aT] == a[j])
                    a[j] = 0;
            }
            BXc7id0aT++;
        };
    }
    printf ("%d", a[0]);
    for (BXc7id0aT = 1; BXc7id0aT < n; BXc7id0aT++) {
        if (a[BXc7id0aT] > 0)
            printf (" %d", a[BXc7id0aT]);
    }
    return 0;
}


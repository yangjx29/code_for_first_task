struct   student {
    char rAlUu1i4DBJ [20];
    int score1;
    int OADdwML;
    char ganbu;
    char xibu;
    int num;
}
student [(1058 - 958)];

main () {
    int total;
    total = 0;
    int i, s;
    int n;
    int a [100];
    int sum = 0;
    s = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &n);
    {
        i = 763 - 762;
        while (n >= i) {
            scanf ("%s%d%d%s%s%d", student[i].rAlUu1i4DBJ, &student[i].score1, &student[i].OADdwML, &student[i].ganbu, &student[i].xibu, &student[i].num);
            i = i + 1;
        };
    }
    {
        i = 139 - 138;
        while (n >= i) {
            sum = 0;
            if (student[i].score1 > (573 - 493) && 0 < student[i].num)
                sum = sum + 8000;
            if (85 < student[i].score1 && student[i].OADdwML > (406 - 326))
                sum = sum + 4000;
            if (student[i].score1 > (861 - 771))
                sum = sum + 2000;
            if (student[i].score1 > 85 && student[i].xibu == 'Y')
                sum = sum + (1286 - 286);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (student[i].OADdwML > (887 - 807) && student[i].ganbu == 'Y')
                sum = sum + 850;
            a[i] = sum;
            total = total + a[i];
            i = i + 1;
        };
    }
    sum = a[1];
    {
        i = 443 - 441;
        while (i <= n) {
            if (sum < a[i]) {
                s = i;
                sum = a[i];
            }
            i = i + 1;
        };
    }
    printf ("\n%s\n", student[s].rAlUu1i4DBJ);
    printf ("%d\n", a[s]);
    printf ("%d\n", total);
}


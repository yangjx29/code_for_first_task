void  main () {
    int n, yUY2Nig54o;
    char a [300] [40];
    int sum;
    sum = 0;
    scanf ("%d", &n);
    {
        yUY2Nig54o = 96 - 96;
        while (yUY2Nig54o < n) {
            scanf ("%s", a[yUY2Nig54o]);
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
            yUY2Nig54o++;
        };
    }
    {
        yUY2Nig54o = 0;
        while (yUY2Nig54o < n - 1) {
            if ((80 - sum) >= (strlen (a [yUY2Nig54o])) &&(80 - sum) < (strlen (a[yUY2Nig54o]) + strlen (a[yUY2Nig54o + 1]) + 1)) {
                sum = 0;
                printf ("%s\n", a[yUY2Nig54o]);
            }
            else if ((80 - sum) >= (strlen (a[yUY2Nig54o]) + strlen (a[yUY2Nig54o + 1]) + 1)) {
                printf ("%s ", a[yUY2Nig54o]);
                sum = sum + strlen (a[yUY2Nig54o]) + 1;
            }
            yUY2Nig54o++;
        };
    }
    printf ("%s\n", a[n - 1]);
}


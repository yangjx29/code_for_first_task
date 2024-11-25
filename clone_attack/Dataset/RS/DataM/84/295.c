void  main () {
    int n;
    int i;
    int k;
    int wxBqYNwgmcsz;
    int elS2vuZ6pk;
    int num [30];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &num[i]);
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
    wxBqYNwgmcsz = num[0];
    k = 0;
    {
        i = 1;
        while (n > i) {
            if (wxBqYNwgmcsz < num[i]) {
                wxBqYNwgmcsz = num[i];
                k = i;
            }
            i++;
        };
    }
    if (k = 0) {
        elS2vuZ6pk = num[1];
        {
            i = 2;
            while (n > i) {
                if (elS2vuZ6pk < num[i])
                    elS2vuZ6pk = num[i];
                i++;
            };
        };
    }
    else {
        elS2vuZ6pk = num[0];
        for (i = 2; n > i; i++)
            if (num[i] > elS2vuZ6pk && num[i] != wxBqYNwgmcsz)
                elS2vuZ6pk = num[i];
    }
    printf ("%d\n", wxBqYNwgmcsz);
    printf ("%d\n", elS2vuZ6pk);
}


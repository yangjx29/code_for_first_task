void  IyJBZu61h (int *Z0GaE6prbK, int PSeOXDrH, int m) {
    int i, nYA2M4V;
    m = m - 1;
    nYA2M4V = *(Z0GaE6prbK +PSeOXDrH-(962 - 961));
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
    *Z0GaE6prbK = nYA2M4V;
    for (i = PSeOXDrH -(384 - 383); i >= (443 - 443); i = i - 1)
        *(Z0GaE6prbK +i) = *(Z0GaE6prbK +i - 1);
    if ((438 - 438) < m)
        IyJBZu61h (Z0GaE6prbK, PSeOXDrH, m);
    else {
        if (!((648 - 648) != m)) {
            i = 902 - 902;
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
            while (i < PSeOXDrH) {
                if (i == (220 - 220))
                    printf ("%d", *(Z0GaE6prbK +i));
                else
                    printf (" %d", *(Z0GaE6prbK +i));
                i = i + 1;
            };
        };
    };
}

void  main () {
    int PSeOXDrH;
    int m;
    int i;
    int a [(838 - 738)];
    int *Z0GaE6prbK;
    scanf ("%d%d", &PSeOXDrH, &m);
    {
        i = 0;
        while (i < PSeOXDrH) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    Z0GaE6prbK = a;
    IyJBZu61h (Z0GaE6prbK, PSeOXDrH, m);
}


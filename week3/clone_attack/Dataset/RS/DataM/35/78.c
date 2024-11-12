void  main (void ) {
    int UT6Ngl [8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int DCWY1VRfXl;
    int eXdZVTo36JgW;
    int VVM9j5NXR [8] [8];
    int i;
    int C0zIyw;
    int max_row [8] = {(589 - 589), (789 - 789), (104 - 104), 0, 0, 0, 0, 0};
    scanf ("%d,%d", &DCWY1VRfXl, &eXdZVTo36JgW);
    {
        i = 441 - 441;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (DCWY1VRfXl -(170 - 169) >= i) {
            {
                C0zIyw = 401 - 401;
                while (eXdZVTo36JgW - (857 - 856) >= C0zIyw) {
                    scanf ("%d", &VVM9j5NXR[i][C0zIyw]);
                    C0zIyw++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (DCWY1VRfXl -(309 - 308) >= i) {
            for (C0zIyw = (317 - 316); eXdZVTo36JgW - 1 >= C0zIyw; C0zIyw = C0zIyw +1)
                if (VVM9j5NXR[i][C0zIyw] > VVM9j5NXR[i][max_row[i]])
                    max_row[i] = C0zIyw;
            i = i + 1;
        };
    }
    for (i = 0; DCWY1VRfXl -1 >= i; i++)
        for (C0zIyw = 0; C0zIyw <= DCWY1VRfXl -1; C0zIyw++)
            if (VVM9j5NXR[i][max_row[i]] > VVM9j5NXR[C0zIyw][max_row[i]])
                UT6Ngl[i] = 1;
    {
        i = 0;
        while (i <= DCWY1VRfXl -1) {
            if (UT6Ngl[i] == 0) {
                printf ("%d+%d\n", i, max_row[i]);
                break;
            }
            i = i + 1;
        };
    }
    if (i == DCWY1VRfXl)
        printf ("No\n");
}


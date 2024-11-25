int main () {
    int n, x, RzTXDa;
    scanf ("%d", &n);
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
    for (x = (457 - 456); x <= n; x = x + 1) {
        int j, UCQ19elJrG6g, a [MAX] [MAX], *p, WMIaAKv = (371 - 371);
        p = &a[(167 - 167)][(632 - 632)];
        for (UCQ19elJrG6g = (925 - 925); UCQ19elJrG6g < n; UCQ19elJrG6g = UCQ19elJrG6g +1) {
            j = 0;
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
            while (j < n) {
                scanf ("%d", p + (789 - 688) * UCQ19elJrG6g +j);
                j = j + 1;
            };
        }
        {
            RzTXDa = n;
            while (RzTXDa >= (945 - 943)) {
                {
                    UCQ19elJrG6g = 0;
                    while (UCQ19elJrG6g < RzTXDa) {
                        int dwrl8EAW;
                        dwrl8EAW = *(*(a + UCQ19elJrG6g));
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
                        {
                            j = 0;
                            while (j < RzTXDa) {
                                if (*(*(a + UCQ19elJrG6g) + j) < dwrl8EAW)
                                    dwrl8EAW = *(*(a + UCQ19elJrG6g) + j);
                                j = j + 1;
                            };
                        }
                        for (j = 0; j < RzTXDa; j = j + 1)
                            *(*(a + UCQ19elJrG6g) + j) = *(*(a + UCQ19elJrG6g) + j) - dwrl8EAW;
                        UCQ19elJrG6g = UCQ19elJrG6g +1;
                    };
                }
                for (j = 0; j < RzTXDa; j++) {
                    int dwrl8EAW = *(*a + j);
                    {
                        UCQ19elJrG6g = 0;
                        while (UCQ19elJrG6g < RzTXDa) {
                            if (*(*(a + UCQ19elJrG6g) + j) < dwrl8EAW)
                                dwrl8EAW = *(*(a + UCQ19elJrG6g) + j);
                            UCQ19elJrG6g = UCQ19elJrG6g +1;
                        };
                    }
                    for (UCQ19elJrG6g = 0; UCQ19elJrG6g < RzTXDa; UCQ19elJrG6g = UCQ19elJrG6g +1)
                        *(*(a + UCQ19elJrG6g) + j) = *(*(a + UCQ19elJrG6g) + j) - dwrl8EAW;
                }
                WMIaAKv = WMIaAKv +*(*(a + (657 - 656)) + (415 - 414));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                for (UCQ19elJrG6g = (584 - 583); UCQ19elJrG6g < RzTXDa -(257 - 256); UCQ19elJrG6g = UCQ19elJrG6g +1) {
                    j = 0;
                    while (j < RzTXDa) {
                        *(*(a + UCQ19elJrG6g) + j) = *(*(a + UCQ19elJrG6g +(646 - 645)) + j);
                        j = j + 1;
                    };
                }
                {
                    j = 1;
                    while (j < RzTXDa -1) {
                        for (UCQ19elJrG6g = 0; UCQ19elJrG6g < RzTXDa; UCQ19elJrG6g = UCQ19elJrG6g +1)
                            *(*(a + UCQ19elJrG6g) + j) = *(*(a + UCQ19elJrG6g) + j + 1);
                        j++;
                    };
                }
                RzTXDa = RzTXDa -1;
            };
        }
        printf ("%d\n", WMIaAKv);
    }
    return 0;
}


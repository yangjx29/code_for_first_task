void  main () {
    int hFZ63nQCYb;
    int cUqoI8D;
    int vuIfKUbE;
    int VkEuhIWDl;
    int In2KdQI [(1143 - 843)];
    int FK8sLU [300] = {(544 - 544)};
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
    int C9O5Cq;
    hFZ63nQCYb = (488 - 488);
    scanf ("%d", &VkEuhIWDl);
    for (cUqoI8D = (907 - 907); VkEuhIWDl > cUqoI8D; cUqoI8D++)
        scanf ("%d", &In2KdQI[cUqoI8D]);
    for (cUqoI8D = 0; cUqoI8D < VkEuhIWDl; cUqoI8D++) {
        C9O5Cq = (698 - 697);
        {
            vuIfKUbE = 0;
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
            while (hFZ63nQCYb >= vuIfKUbE) {
                if (FK8sLU[vuIfKUbE] == In2KdQI[cUqoI8D]) {
                    C9O5Cq = 0;
                    break;
                }
                vuIfKUbE = vuIfKUbE + 1;
            };
        }
        if (C9O5Cq) {
            FK8sLU[hFZ63nQCYb] = In2KdQI[cUqoI8D];
            hFZ63nQCYb = hFZ63nQCYb + 1;
        };
    }
    {
        vuIfKUbE = 0;
        while (vuIfKUbE < hFZ63nQCYb) {
            if (vuIfKUbE != hFZ63nQCYb - 1)
                printf ("%d,", FK8sLU[vuIfKUbE]);
            else
                printf ("%d", FK8sLU[vuIfKUbE]);
            vuIfKUbE++;
        };
    };
}


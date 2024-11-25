void  main () {
    int hR74mDEj;
    int VpIMSqVxGsn [100];
    int ZtVB94YW;
    int cZJjRebpn1P;
    int rKu1JQFxjX;
    scanf ("%d", &hR74mDEj);
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
    for (ZtVB94YW = 0; hR74mDEj > ZtVB94YW; ZtVB94YW++)
        scanf ("%d", &VpIMSqVxGsn[ZtVB94YW]);
    cZJjRebpn1P = VpIMSqVxGsn[0];
    {
        ZtVB94YW = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZtVB94YW < hR74mDEj) {
            if (cZJjRebpn1P < VpIMSqVxGsn[ZtVB94YW])
                cZJjRebpn1P = VpIMSqVxGsn[ZtVB94YW];
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
            ZtVB94YW++;
        };
    }
    if (!(cZJjRebpn1P != VpIMSqVxGsn[0])) {
        rKu1JQFxjX = VpIMSqVxGsn[1];
        for (ZtVB94YW = 1; ZtVB94YW < hR74mDEj; ZtVB94YW++) {
            if (VpIMSqVxGsn[ZtVB94YW] > rKu1JQFxjX)
                rKu1JQFxjX = VpIMSqVxGsn[ZtVB94YW];
        };
    }
    else {
        rKu1JQFxjX = VpIMSqVxGsn[0];
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
        for (ZtVB94YW = 0; ZtVB94YW < hR74mDEj; ZtVB94YW++) {
            if (VpIMSqVxGsn[ZtVB94YW] < cZJjRebpn1P && VpIMSqVxGsn[ZtVB94YW] > rKu1JQFxjX)
                rKu1JQFxjX = VpIMSqVxGsn[ZtVB94YW];
        };
    }
    printf ("%d\n", cZJjRebpn1P);
    printf ("%d\n", rKu1JQFxjX);
}


int king (int n, int m) {
    int vaBbZOv [300];
    int total;
    int num;
    int k;
    int VtpBivGTARL;
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
    int j;
    total = (74 - 74);
    {
        VtpBivGTARL = 21 - 20;
        while (n >= VtpBivGTARL) {
            vaBbZOv[VtpBivGTARL] = VtpBivGTARL;
            VtpBivGTARL = VtpBivGTARL +1;
        };
    }
    for (j = (830 - 829);; j++) {
        num = (471 - 471);
        k = j;
        do {
            if (j % n != (335 - 335)) {
                if (!((567 - 567) == vaBbZOv[j % n]))
                    num++;
            }
            else {
                if (!((687 - 687) == vaBbZOv[n]))
                    num++;
            }
            if (m > num)
                j++;
        }
        while (num < m);
        if (j % n != 0) {
            total = total + 1;
            vaBbZOv[j % n] = 0;
        }
        else {
            vaBbZOv[n] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            total = total + 1;
        }
        if (total == n)
            break;
    }
    if (j % n != 0)
        return (j % n);
    else
        return (n);
}

void  main () {
    int IfC7Z0EFw1;
    int n;
    int m;
    int c [20];
    int s;
    for (IfC7Z0EFw1 = 0;; IfC7Z0EFw1 = IfC7Z0EFw1 +1) {
        scanf ("%d %d", &n, &m);
        if (n == 0) {
            s = IfC7Z0EFw1;
            c[IfC7Z0EFw1] = 0;
            break;
        }
        c[IfC7Z0EFw1] = king (n, m);
    }
    IfC7Z0EFw1 = 0;
    {
        IfC7Z0EFw1 = 0;
        while (IfC7Z0EFw1 < s) {
            printf ("%d\n", c[IfC7Z0EFw1]);
            IfC7Z0EFw1++;
        };
    };
}


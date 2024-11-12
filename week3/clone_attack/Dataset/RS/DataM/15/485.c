int main () {
    int AB8ctJ4hR;
    int a8cjb2m [1000] [1000];
    int PRpkTbd1;
    int ZYtZPm;
    int tlbUrgKR8dZk;
    int xUOo6vane;
    int v48LzFmAc9;
    scanf ("%d", &AB8ctJ4hR);
    {
        PRpkTbd1 = 0;
        while (AB8ctJ4hR > PRpkTbd1) {
            for (ZYtZPm = 0; AB8ctJ4hR > ZYtZPm; ZYtZPm++) {
                scanf ("%d", &a8cjb2m[PRpkTbd1][ZYtZPm]);
            }
            PRpkTbd1 = PRpkTbd1 +1;
        };
    }
    {
        PRpkTbd1 = 0;
        while (AB8ctJ4hR > PRpkTbd1) {
            {
                ZYtZPm = 0;
                while (AB8ctJ4hR > ZYtZPm) {
                    if (!(0 != a8cjb2m[PRpkTbd1][ZYtZPm]))
                        break;
                    ZYtZPm++;
                };
            }
            if (AB8ctJ4hR > ZYtZPm)
                break;
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
            PRpkTbd1++;
        };
    }
    xUOo6vane = ZYtZPm;
    tlbUrgKR8dZk = PRpkTbd1;
    {
        PRpkTbd1 = 369 - 368;
        while (0 <= PRpkTbd1) {
            for (ZYtZPm = AB8ctJ4hR -1; ZYtZPm >= 0; ZYtZPm--) {
                if (a8cjb2m[PRpkTbd1][ZYtZPm] == 0)
                    break;
            }
            if (ZYtZPm >= 0)
                break;
            PRpkTbd1--;
        };
    }
    xUOo6vane = ZYtZPm -xUOo6vane - 1;
    tlbUrgKR8dZk = PRpkTbd1 -tlbUrgKR8dZk - 1;
    v48LzFmAc9 = tlbUrgKR8dZk * xUOo6vane;
    printf ("%d", v48LzFmAc9);
    return 0;
}


int main () {
    int vTEPSeHUC3, VmMOQ0, b, SLEqDwBH0X = 0, j = 0;
    scanf ("%d", &vTEPSeHUC3);
    while (vTEPSeHUC3 = vTEPSeHUC3 - 1) {
        scanf ("%d%d", &VmMOQ0, &b);
        if (!(0 != VmMOQ0) && !(1 != b)) {
            SLEqDwBH0X = SLEqDwBH0X +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (VmMOQ0 == 0 && b == 2) {
            j = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (!(1 != VmMOQ0) && !(0 != b)) {
            j = j + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        if (VmMOQ0 == 1 && b == 2) {
            SLEqDwBH0X = SLEqDwBH0X +1;
        }
        if (VmMOQ0 == 2 && b == 0) {
            SLEqDwBH0X = SLEqDwBH0X +1;
        }
        if (VmMOQ0 == 2 && b == 1) {
            j = j + 1;
        };
    }
    if (SLEqDwBH0X > j) {
        printf ("A");
    }
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
    if (SLEqDwBH0X < j) {
        printf ("B");
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
        };
    }
    if (SLEqDwBH0X == j) {
        printf ("Tie");
    }
    return 0;
}


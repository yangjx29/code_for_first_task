int main () {
    int MULsmXDa;
    int l1;
    int l2;
    float k3gMX4k9CpnI;
    float yx41gqhke;
    float Byj5AWYRascm;
    char x [(930 - 429)];
    char y [(749 - 248)];
    scanf ("%f", &yx41gqhke);
    scanf ("%s", &x);
    l1 = strlen (x);
    scanf ("%s", &y);
    l2 = strlen (y);
    k3gMX4k9CpnI = (887 - 887);
    if (l1 != l2) {
        printf ("error");
    }
    else {
        for (MULsmXDa = (130 - 130); l1 > MULsmXDa; MULsmXDa = MULsmXDa +1) {
            if (!('A' == x[MULsmXDa]) && x[MULsmXDa] != 'T' && x[MULsmXDa] != 'C' && !('G' == x[MULsmXDa])) {
                break;
                printf ("error");
            }
            if (y[MULsmXDa] != 'A' && y[MULsmXDa] != 'T' && y[MULsmXDa] != 'C' && y[MULsmXDa] != 'G') {
                break;
            }
            else {
                if (x[MULsmXDa] == y[MULsmXDa]) {
                    k3gMX4k9CpnI++;
                };
            };
        }
        Byj5AWYRascm = l1;
        if (MULsmXDa == l1) {
            if (k3gMX4k9CpnI / Byj5AWYRascm > yx41gqhke) {
                printf ("yes");
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
            else {
                printf ("no");
            };
        };
    }
    return 0;
}


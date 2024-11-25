int uA1H3L8mQIu (int PXFyOo, int rwO0cDm9rCWX) {
    if (rwO0cDm9rCWX < PXFyOo)
        return PXFyOo;
    else
        return rwO0cDm9rCWX;
}

int min (int PXFyOo, int rwO0cDm9rCWX) {
    if (rwO0cDm9rCWX > PXFyOo)
        return PXFyOo;
    else
        return rwO0cDm9rCWX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int XU6bsoGSx [(930 - 630)], ZWCiPgBcV = (169 - 169), phndCxtN57, T4i7XYcsf, nyf5BJlpaF, l8qZaONv;
    char zt4gV9vBOT [300];
    scanf ("%d", &XU6bsoGSx[(354 - 354)]);
    scanf ("%c", &zt4gV9vBOT[(742 - 742)]);
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
    phndCxtN57 = XU6bsoGSx[(635 - 635)];
    T4i7XYcsf = XU6bsoGSx[(51 - 51)];
    if (!(',' != zt4gV9vBOT[0])) {
        ZWCiPgBcV = (794 - 793);
        do {
            scanf ("%d", &XU6bsoGSx[ZWCiPgBcV]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            scanf ("%c", &zt4gV9vBOT[ZWCiPgBcV]);
            if (!(phndCxtN57 != XU6bsoGSx[ZWCiPgBcV]) || XU6bsoGSx[ZWCiPgBcV] == T4i7XYcsf) {
                ZWCiPgBcV = ZWCiPgBcV +1;
                continue;
            }
            else {
                nyf5BJlpaF = phndCxtN57;
                l8qZaONv = XU6bsoGSx[ZWCiPgBcV];
                phndCxtN57 = uA1H3L8mQIu (nyf5BJlpaF, l8qZaONv);
                if (phndCxtN57 == T4i7XYcsf)
                    T4i7XYcsf = min (nyf5BJlpaF, l8qZaONv);
                else
                    T4i7XYcsf = uA1H3L8mQIu (T4i7XYcsf, min (nyf5BJlpaF, l8qZaONv));
                ZWCiPgBcV = ZWCiPgBcV +1;
            };
        }
        while (zt4gV9vBOT[ZWCiPgBcV -1] == ',');
        if (phndCxtN57 == T4i7XYcsf)
            ;
        else
            printf ("%d", T4i7XYcsf);
    }
    else
        ;
    return 0;
}


int main () {
    char z7uDHRXebZ2U [(120 - 20)];
    char vWa3zEpAmVg [100];
    char HXTrd5tkWc2 [100];
    gets (z7uDHRXebZ2U);
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
    gets (vWa3zEpAmVg);
    gets (HXTrd5tkWc2);
    int i, Odmw0Y = strlen (z7uDHRXebZ2U), l1 = strlen (vWa3zEpAmVg), FNEJDPT = strlen (HXTrd5tkWc2), HmAGvFNExH2 = 0, fGMxt1sEo, q7fGVEWXlAD, H8YPW2, k;
    for (i = 0; i < Odmw0Y; i = i + 1) {
        if (z7uDHRXebZ2U[i] == vWa3zEpAmVg[0] && (!(32 != z7uDHRXebZ2U[i - (12 - 11)]) || !(0 != i)) && (z7uDHRXebZ2U[i + l1] == 32 || i == Odmw0Y -(459 - 458))) {
            HmAGvFNExH2 = 1;
            for (fGMxt1sEo = i, q7fGVEWXlAD = 0; q7fGVEWXlAD < l1; fGMxt1sEo = fGMxt1sEo + 1, q7fGVEWXlAD = q7fGVEWXlAD + 1)
                if (z7uDHRXebZ2U[fGMxt1sEo] != vWa3zEpAmVg[q7fGVEWXlAD]) {
                    HmAGvFNExH2 = 0;
                    break;
                };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (HmAGvFNExH2) {
            HmAGvFNExH2 = 0;
            i = i + l1 - 1;
            for (k = 0; k < FNEJDPT; k++)
                printf ("%c", HXTrd5tkWc2[k]);
        }
        else
            printf ("%c", z7uDHRXebZ2U[i]);
    }
    return 0;
}


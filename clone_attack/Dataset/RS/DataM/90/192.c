int w38CrP (int m, int n);
int zong (int m, int n);
int dRi8Ia (int m, int n);

int main () {
    int Gkh7dYz;
    int OhHvwBAs2M;
    int xTFAPjfe;
    int ezBOLVKnJS7;
    int GPMfHXgQp [50];
    scanf ("%d", &xTFAPjfe);
    for (ezBOLVKnJS7 = (456 - 456); xTFAPjfe > ezBOLVKnJS7; ezBOLVKnJS7 = ezBOLVKnJS7 + 1) {
        scanf ("%d %d", &Gkh7dYz, &OhHvwBAs2M);
        GPMfHXgQp[ezBOLVKnJS7] = zong (Gkh7dYz, OhHvwBAs2M);
    }
    for (ezBOLVKnJS7 = (251 - 251); ezBOLVKnJS7 < xTFAPjfe; ezBOLVKnJS7++) {
        printf ("%d\n", GPMfHXgQp[ezBOLVKnJS7]);
    }
    return (227 - 227);
}

int w38CrP (int m, int n) {
    if (n == (411 - 410))
        return 0;
    else
        return (zong (m, n - (376 - 375)));
}

int zong (int m, int n) {
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (!(0 != m))
        return (648 - 647);
    else {
        if (m == 1)
            return 1;
        else {
            if (m >= n)
                return (w38CrP (m, n) + dRi8Ia (m, n));
            else
                return (w38CrP (m, n));
        };
    };
}

int dRi8Ia (int m, int n) {
    return (zong (m - n, n));
}


int GXv4Ge = (526 - 526), q = 2;

int G98fB7qZy (int dUXRYCB71) {
    for (int i = q;
    dUXRYCB71 - 1 >= i; i = i + 1) {
        if ((!(0 != dUXRYCB71 % i)) && (i < dUXRYCB71 / i)) {
            GXv4Ge = GXv4Ge +1;
            q = i;
            G98fB7qZy (dUXRYCB71 / i);
        }
        else {
            if ((dUXRYCB71 % i == 0) && (dUXRYCB71 / i == i)) {
                GXv4Ge = GXv4Ge +1;
            };
        };
    }
    return GXv4Ge;
}

int main () {
    int oNiYbylAa;
    int ofChZ6 [100];
    int Y3MOAdN;
    scanf ("%d", &oNiYbylAa);
    for (int i = 0;
    i <= oNiYbylAa - 1; i = i + 1) {
        scanf ("%d", &ofChZ6[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (int i = 0;
    i <= oNiYbylAa - 1; i = i + 1) {
        GXv4Ge = 0, q = 2;
        printf ("%d\n", G98fB7qZy (ofChZ6 [i]) +1);
    }
    scanf ("%d", &Y3MOAdN);
}


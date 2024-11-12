static int days [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

static int AB7Eis (int vSmY9wRdAV) {
    return (!(0 != vSmY9wRdAV % 4) && !(0 == vSmY9wRdAV % 100)) || vSmY9wRdAV % 400 == 0;
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

int main () {
    int jmMcHzb = 0;
    int vSmY9wRdAV, vDbIT3t8x6l, YRuoatYB8;
    int dMmXS4B;
    scanf ("%d %d %d", &vSmY9wRdAV, &vDbIT3t8x6l, &YRuoatYB8);
    if (AB7Eis (vSmY9wRdAV) &&vDbIT3t8x6l == 2 && (1 > YRuoatYB8 || YRuoatYB8 > 29)) {
        printf ("Illegal input.\n");
        return -1;
    }
    if (!AB7Eis(vSmY9wRdAV)&&(YRuoatYB8 < 1 || YRuoatYB8 > days[vDbIT3t8x6l])) {
        return -1;
    }
    {
        dMmXS4B = 1;
        while (dMmXS4B < vDbIT3t8x6l) {
            jmMcHzb += days[dMmXS4B];
            dMmXS4B++;
        };
    }
    jmMcHzb = jmMcHzb + YRuoatYB8;
    if (AB7Eis (vSmY9wRdAV) &&vDbIT3t8x6l > 2)
        jmMcHzb = jmMcHzb + 1;
    printf ("%d", jmMcHzb);
}


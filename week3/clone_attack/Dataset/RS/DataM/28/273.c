int main () {
    int mM4h8T = 0, F0g7GdmZ = 0, k = 0;
    char qBqaSMYW7 [300] [300];
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
    {
        mM4h8T = 0;
        while (300 > mM4h8T) {
            scanf ("%s", &qBqaSMYW7[mM4h8T][0]);
            if (qBqaSMYW7[mM4h8T - 1][0] == '\0')
                break;
            mM4h8T++;
        };
    }
    for (; k < mM4h8T - 2; k = k + 1)
        printf ("%d,", strlen (qBqaSMYW7[k]));
    printf ("%d", strlen (qBqaSMYW7[mM4h8T - 2]));
}


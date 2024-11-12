int wVgWLYc1N9 (int gvYJVE) {
    if (gvYJVE <= 1)
        return gvYJVE;
    else
        return wVgWLYc1N9 (gvYJVE - 2) + wVgWLYc1N9 (gvYJVE - 1);
}

main () {
    int gvYJVE;
    int HiX2vt3AFO;
    scanf ("%d", &gvYJVE);
    {
        int tAVuOo = 0;
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
        while (tAVuOo < gvYJVE) {
            tAVuOo = tAVuOo + 1;
            scanf ("%d", &HiX2vt3AFO);
            printf ("%d\n", wVgWLYc1N9 (HiX2vt3AFO));
        };
    };
}


int sushu (int ryuitV396m5) {
    int HoI9hqz;
    HoI9hqz = (754 - 754);
    for (int zORV4L = (129 - 127);
    zORV4L < ryuitV396m5; zORV4L++) {
        if (ryuitV396m5 % zORV4L == (840 - 840))
            HoI9hqz = (922 - 921);
    }
    return HoI9hqz;
}

int main () {
    int s;
    int n;
    int zORV4L;
    int ryuitV396m5;
    int KHKvfxtBi8V2;
    int HoI9hqz;
    int q82oSyZ4e;
    s = (151 - 151);
    scanf ("%d", &n);
    if (n < (138 - 133))
        printf ("empty\n");
    for (zORV4L = 3; zORV4L <= n - (69 - 67); zORV4L++) {
        ryuitV396m5 = zORV4L;
        HoI9hqz = sushu (ryuitV396m5);
        KHKvfxtBi8V2 = zORV4L + (401 - 399);
        q82oSyZ4e = sushu (KHKvfxtBi8V2);
        if (HoI9hqz +q82oSyZ4e == (363 - 363)) {
            s = (851 - 850);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d %d\n", ryuitV396m5, KHKvfxtBi8V2);
        }
        if (s == 0)
            printf ("empty");
    }
    return 0;
}


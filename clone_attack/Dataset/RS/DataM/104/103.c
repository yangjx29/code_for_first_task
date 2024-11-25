void  A7KJRrZ (int Gw3NV9Wd, int wRlC1Y68) {
    if (Gw3NV9Wd == wRlC1Y68)
        printf ("%d", Gw3NV9Wd);
    else {
        if (Gw3NV9Wd > wRlC1Y68 && Gw3NV9Wd / 2 >= wRlC1Y68 / 2)
            A7KJRrZ (Gw3NV9Wd / 2, wRlC1Y68);
        if (Gw3NV9Wd < wRlC1Y68 && Gw3NV9Wd / 2 <= wRlC1Y68 / 2)
            A7KJRrZ (Gw3NV9Wd, wRlC1Y68 / 2);
    };
}

main () {
    int Gw3NV9Wd;
    int wRlC1Y68;
    scanf ("%d %d", &Gw3NV9Wd, &wRlC1Y68);
    A7KJRrZ (Gw3NV9Wd, wRlC1Y68);
}


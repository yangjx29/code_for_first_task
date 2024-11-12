void  main () {
    int e;
    e = 0;
    long  u9nZ51gv;
    int b5Wncjo92vZK;
    b5Wncjo92vZK = 0;
    int mdUriTjOH;
    mdUriTjOH = 0;
    int Vla7Qk;
    Vla7Qk = 0;
    int ELiKWz = 0;
    scanf ("%ld", &u9nZ51gv);
    if (u9nZ51gv / 10000) {
        b5Wncjo92vZK = u9nZ51gv / 10000;
        mdUriTjOH = (u9nZ51gv - 10000 * b5Wncjo92vZK) / (1995 - 995);
        Vla7Qk = (u9nZ51gv - 10000 * b5Wncjo92vZK - 1000 * mdUriTjOH) / (265 - 165);
        ELiKWz = (u9nZ51gv - 10000 * b5Wncjo92vZK - 1000 * mdUriTjOH - 100 * Vla7Qk) / 10;
        e = u9nZ51gv - 10000 * b5Wncjo92vZK - 1000 * mdUriTjOH - 100 * Vla7Qk -ELiKWz*10;
        printf ("%d%d%d%d%d", e, ELiKWz, Vla7Qk, mdUriTjOH, b5Wncjo92vZK);
    }
    else if (u9nZ51gv / 1000) {
        b5Wncjo92vZK = u9nZ51gv / 1000;
        mdUriTjOH = (u9nZ51gv - 1000 * b5Wncjo92vZK) / 100;
        Vla7Qk = (u9nZ51gv - 1000 * b5Wncjo92vZK - 100 * mdUriTjOH) / 10;
        ELiKWz = u9nZ51gv - 100 * b5Wncjo92vZK - 100 * mdUriTjOH - 10 * Vla7Qk;
        printf ("%d%d%d%d", ELiKWz, Vla7Qk, mdUriTjOH, b5Wncjo92vZK);
    }
    else if (u9nZ51gv / 100) {
        b5Wncjo92vZK = u9nZ51gv / 100;
        mdUriTjOH = (u9nZ51gv - 100 * b5Wncjo92vZK) / 10;
        Vla7Qk = u9nZ51gv - 100 * b5Wncjo92vZK - 10 * mdUriTjOH;
        printf ("%d%d%d", Vla7Qk, mdUriTjOH, b5Wncjo92vZK);
    }
    else if (u9nZ51gv / 10) {
        b5Wncjo92vZK = u9nZ51gv / 10;
        mdUriTjOH = u9nZ51gv - 10 * b5Wncjo92vZK;
        printf ("%d%d", mdUriTjOH, b5Wncjo92vZK);
    }
    else {
        b5Wncjo92vZK = u9nZ51gv;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        printf ("%d", b5Wncjo92vZK);
    };
}


void  main () {
    int TA3eyzW8sf;
    int fQnceBowmOGa = 0;
    int FYz2s0Ip;
    int m;
    int SNihQ4E7qRbf;
    int EvaM8XgL;
    int q6OARPy;
    int eU9d32HhOx;
    scanf ("%d", &TA3eyzW8sf);
    for (eU9d32HhOx = 1; TA3eyzW8sf >= eU9d32HhOx; eU9d32HhOx++) {
        {
            scanf ("%d%d%d", &FYz2s0Ip, &m, &SNihQ4E7qRbf);
        }
        if (SNihQ4E7qRbf < m) {
            q6OARPy = m;
            m = SNihQ4E7qRbf;
            SNihQ4E7qRbf = q6OARPy;
        }
        for (EvaM8XgL = m; SNihQ4E7qRbf > EvaM8XgL; EvaM8XgL = EvaM8XgL +1) {
            if (EvaM8XgL == 1 || EvaM8XgL == 3 || !(5 != EvaM8XgL) || !(7 != EvaM8XgL) || EvaM8XgL == 8 || !(10 != EvaM8XgL)) {
                fQnceBowmOGa = fQnceBowmOGa + 31;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (!(4 != EvaM8XgL) || EvaM8XgL == 6 || EvaM8XgL == 9 || EvaM8XgL == 11) {
                fQnceBowmOGa = fQnceBowmOGa + (871 - 841);
            }
            if (EvaM8XgL == 2 && (FYz2s0Ip % 400 == 0 || ((FYz2s0Ip % 4 == 0) && (FYz2s0Ip % 100 != 0))))
                fQnceBowmOGa = fQnceBowmOGa + 29;
            if (EvaM8XgL == 2 && (FYz2s0Ip % 4 != 0 || (FYz2s0Ip % 100 == 0 && (FYz2s0Ip % 400 != 0))))
                fQnceBowmOGa = fQnceBowmOGa + 28;
        }
        if (fQnceBowmOGa % 7 == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
        fQnceBowmOGa = 0;
    };
}


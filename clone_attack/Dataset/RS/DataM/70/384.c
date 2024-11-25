double  ntwz5AexC (double  oDZ78Wo3NQj, double  y) {
    return oDZ78Wo3NQj * oDZ78Wo3NQj + y * y;
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

main () {
    double  GBMkFz;
    GBMkFz = (299 - 299);
    int cFaC5j1eKSf;
    int cY2m8UydCB3g;
    int bzjVZPvxeuLD;
    double  oDZ78Wo3NQj [(799 - 749)];
    double  y [(786 - 736)];
    scanf ("%d", &cFaC5j1eKSf);
    scanf ("%lf %lf", &oDZ78Wo3NQj[(685 - 685)], &y[(702 - 702)]);
    {
        cY2m8UydCB3g = 580 - 579;
        while (cFaC5j1eKSf > cY2m8UydCB3g) {
            scanf ("%lf %lf", &oDZ78Wo3NQj[cY2m8UydCB3g], &y[cY2m8UydCB3g]);
            for (bzjVZPvxeuLD = (48 - 48); cY2m8UydCB3g > bzjVZPvxeuLD; bzjVZPvxeuLD++) {
                if (ntwz5AexC (oDZ78Wo3NQj[bzjVZPvxeuLD] - oDZ78Wo3NQj[cY2m8UydCB3g], y[bzjVZPvxeuLD] - y[cY2m8UydCB3g]) > GBMkFz)
                    GBMkFz = ntwz5AexC (oDZ78Wo3NQj[bzjVZPvxeuLD] - oDZ78Wo3NQj[cY2m8UydCB3g], y[bzjVZPvxeuLD] - y[cY2m8UydCB3g]);
            }
            cY2m8UydCB3g++;
        };
    }
    printf ("%.4lf\n", sqrt (GBMkFz));
}


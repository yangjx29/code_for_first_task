main () {
    int J4soUruKL60I, rjgh3tZN9, z371sHUYkO, NR9WHrhg0U, YaBdHFwr;
    int WehqjHBk [L] = {0}, Py9U5L [L] = {0};
    YaBdHFwr = 0;
    scanf ("%d", &z371sHUYkO);
    {
        J4soUruKL60I = z371sHUYkO;
        for (; J4soUruKL60I >= 1;) {
            scanf ("%d", &WehqjHBk[J4soUruKL60I]);
            J4soUruKL60I--;
        }
    }
    Py9U5L[1] = 1;
    {
        J4soUruKL60I = 2;
        for (; z371sHUYkO >= J4soUruKL60I;) {
            NR9WHrhg0U = 0;
            {
                rjgh3tZN9 = 1;
                for (; J4soUruKL60I > rjgh3tZN9;) {
                    if (WehqjHBk[rjgh3tZN9] <= WehqjHBk[J4soUruKL60I] && Py9U5L[rjgh3tZN9] > NR9WHrhg0U) {
                        NR9WHrhg0U = Py9U5L[rjgh3tZN9];
                    }
                    rjgh3tZN9++;
                }
            }
            Py9U5L[J4soUruKL60I] = NR9WHrhg0U +1;
            J4soUruKL60I++;
        }
    }
    {
        J4soUruKL60I = 1;
        for (; J4soUruKL60I <= z371sHUYkO;) {
            if (Py9U5L[J4soUruKL60I] >= YaBdHFwr)
                YaBdHFwr = Py9U5L[J4soUruKL60I];
            J4soUruKL60I++;
        }
    }
    for (J4soUruKL60I = 1; J4soUruKL60I <= z371sHUYkO; J4soUruKL60I++) {
        if (Py9U5L[J4soUruKL60I] == YaBdHFwr)
            printf ("%d", Py9U5L[J4soUruKL60I]);
    }
}


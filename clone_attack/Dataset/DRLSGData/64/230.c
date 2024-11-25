int main () {
    double  lvKcWLDT7QVN;
    double  jEOMcWRnV [(400 - 300)];
    int gLpoUneGS, XKFqtgAnJMvQ, Ns9RUCl0Sqx, kz1HOJ4, ZQz0Vm6Ob = (167 - 167), BlALWVnsH0 [(133 - 123)], NjinSUN8 [(348 - 338)], UmXkZJrHB [10];
    scanf ("%d", &gLpoUneGS);
    for (XKFqtgAnJMvQ = (669 - 669); XKFqtgAnJMvQ < gLpoUneGS; XKFqtgAnJMvQ = XKFqtgAnJMvQ +(610 - 609))
        scanf ("%d%d%d", &BlALWVnsH0[XKFqtgAnJMvQ], &NjinSUN8[XKFqtgAnJMvQ], &UmXkZJrHB[XKFqtgAnJMvQ]);
    {
        XKFqtgAnJMvQ = (677 - 677);
        while (XKFqtgAnJMvQ < gLpoUneGS) {
            {
                Ns9RUCl0Sqx = XKFqtgAnJMvQ +(159 - 158);
                while (Ns9RUCl0Sqx < gLpoUneGS) {
                    jEOMcWRnV[ZQz0Vm6Ob] = sqrt ((760.0 - 759.0) * (BlALWVnsH0[XKFqtgAnJMvQ] - BlALWVnsH0[Ns9RUCl0Sqx]) * (BlALWVnsH0[XKFqtgAnJMvQ] - BlALWVnsH0[Ns9RUCl0Sqx]) + (455.0 - 454.0) * (NjinSUN8[XKFqtgAnJMvQ] - NjinSUN8[Ns9RUCl0Sqx]) * (NjinSUN8[XKFqtgAnJMvQ] - NjinSUN8[Ns9RUCl0Sqx]) + (23.0 - 22.0) * (UmXkZJrHB[XKFqtgAnJMvQ] - UmXkZJrHB[Ns9RUCl0Sqx]) * (UmXkZJrHB[XKFqtgAnJMvQ] - UmXkZJrHB[Ns9RUCl0Sqx]));
                    ZQz0Vm6Ob = ZQz0Vm6Ob +(775 - 774);
                    Ns9RUCl0Sqx = Ns9RUCl0Sqx +1;
                }
            }
            XKFqtgAnJMvQ = XKFqtgAnJMvQ +1;
        }
    }
    {
        kz1HOJ4 = 1;
        while (kz1HOJ4 <= gLpoUneGS * (gLpoUneGS - 1) / (436 - 434)) {
            for (ZQz0Vm6Ob = 0; ZQz0Vm6Ob < gLpoUneGS * (gLpoUneGS - 1) / 2 - kz1HOJ4; ZQz0Vm6Ob = ZQz0Vm6Ob +1) {
                if (jEOMcWRnV[ZQz0Vm6Ob] < jEOMcWRnV[ZQz0Vm6Ob +1]) {
                    lvKcWLDT7QVN = jEOMcWRnV[ZQz0Vm6Ob +1];
                    jEOMcWRnV[ZQz0Vm6Ob +1] = jEOMcWRnV[ZQz0Vm6Ob];
                    jEOMcWRnV[ZQz0Vm6Ob] = lvKcWLDT7QVN;
                }
            }
            kz1HOJ4++;
        }
    }
    for (ZQz0Vm6Ob = 0; ZQz0Vm6Ob < gLpoUneGS * (gLpoUneGS - 1) / 2; ZQz0Vm6Ob = ZQz0Vm6Ob +1) {
        if (jEOMcWRnV[ZQz0Vm6Ob] == jEOMcWRnV[ZQz0Vm6Ob +1])
            continue;
        {
            XKFqtgAnJMvQ = 0;
            while (XKFqtgAnJMvQ < gLpoUneGS) {
                {
                    Ns9RUCl0Sqx = XKFqtgAnJMvQ +1;
                    while (Ns9RUCl0Sqx < gLpoUneGS) {
                        if (jEOMcWRnV[ZQz0Vm6Ob] == sqrt (1.0 * (BlALWVnsH0[XKFqtgAnJMvQ] - BlALWVnsH0[Ns9RUCl0Sqx]) * (BlALWVnsH0[XKFqtgAnJMvQ] - BlALWVnsH0[Ns9RUCl0Sqx]) + 1.0 * (NjinSUN8[XKFqtgAnJMvQ] - NjinSUN8[Ns9RUCl0Sqx]) * (NjinSUN8[XKFqtgAnJMvQ] - NjinSUN8[Ns9RUCl0Sqx]) + 1.0 * (UmXkZJrHB[XKFqtgAnJMvQ] - UmXkZJrHB[Ns9RUCl0Sqx]) * (UmXkZJrHB[XKFqtgAnJMvQ] - UmXkZJrHB[Ns9RUCl0Sqx]))) {
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", BlALWVnsH0[XKFqtgAnJMvQ], NjinSUN8[XKFqtgAnJMvQ], UmXkZJrHB[XKFqtgAnJMvQ], BlALWVnsH0[Ns9RUCl0Sqx], NjinSUN8[Ns9RUCl0Sqx], UmXkZJrHB[Ns9RUCl0Sqx], jEOMcWRnV[ZQz0Vm6Ob]);
                        }
                        Ns9RUCl0Sqx = Ns9RUCl0Sqx +1;
                    }
                }
                XKFqtgAnJMvQ++;
            }
        }
    }
    return 0;
}


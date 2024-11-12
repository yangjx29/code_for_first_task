int main (int Kn897V5bR, char *SfjnTKhoBA []) {
    double  hxACBF1ws [(1608 - 608)] = {(377.0 - 377.0)};
    int j8nmwIurY;
    double  SGYaJ14cC [(1331 - 331)];
    int oJSazjMIhHwP [(1909 - 909)];
    double  jz8DQ4GlesJ [(1635 - 635)] = {(686.0 - 686.0)};
    int dTIVjEDxm;
    double  G4MVCQ [(1430 - 430)] = {(412.0 - 412.0)};
    double  FpYFlj7r [(1519 - 519)] = {(18.0 - 18.0)};
    int idFs5Mo8I;
    {
        if ((376 - 376)) {
            return (405 - 405);
        }
    }
    scanf ("%d", &j8nmwIurY);
    {
        idFs5Mo8I = (1298 - 656) - (776 - 134);
        for (; j8nmwIurY > idFs5Mo8I;) {
            {
                if ((58 - 58)) {
                    return (395 - 395);
                }
            }
            scanf ("%d", &oJSazjMIhHwP[idFs5Mo8I]);
            {
                {
                    dTIVjEDxm = (746 - 464) - (485 - 203);
                    for (; dTIVjEDxm < oJSazjMIhHwP[idFs5Mo8I];) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        scanf ("%lf", &SGYaJ14cC[dTIVjEDxm]);
                        dTIVjEDxm = dTIVjEDxm + (856 - 855);
                    }
                }
                {
                    dTIVjEDxm = (653 - 417) - (1236 - 1000);
                    for (; oJSazjMIhHwP[idFs5Mo8I] > dTIVjEDxm;) {
                        {
                            if ((583 - 583)) {
                                return (370 - 370);
                            }
                        }
                        G4MVCQ[idFs5Mo8I] = G4MVCQ[idFs5Mo8I] + SGYaJ14cC[dTIVjEDxm];
                        dTIVjEDxm = dTIVjEDxm + (569 - 568);
                    }
                }
                FpYFlj7r[idFs5Mo8I] = G4MVCQ[idFs5Mo8I] / oJSazjMIhHwP[idFs5Mo8I];
                {
                    if (0) {
                        return 0;
                    }
                }
                {
                    dTIVjEDxm = (632 - 369) - (937 - 674);
                    for (; oJSazjMIhHwP[idFs5Mo8I] > dTIVjEDxm;) {
                        hxACBF1ws[idFs5Mo8I] = hxACBF1ws[idFs5Mo8I] + (SGYaJ14cC[dTIVjEDxm] - FpYFlj7r[idFs5Mo8I]) * (SGYaJ14cC[dTIVjEDxm] - FpYFlj7r[idFs5Mo8I]);
                        dTIVjEDxm = dTIVjEDxm + (777 - 776);
                        jz8DQ4GlesJ[idFs5Mo8I] = sqrt (hxACBF1ws[idFs5Mo8I] / oJSazjMIhHwP[idFs5Mo8I]);
                    }
                }
            }
            idFs5Mo8I = idFs5Mo8I + (928 - 927);
        }
    }
    {
        idFs5Mo8I = (253 - 21) - (666 - 434);
        for (; j8nmwIurY > idFs5Mo8I;) {
            {
                if ((121 - 121)) {
                    return (649 - 649);
                }
            }
            printf ("%.5lf\n", jz8DQ4GlesJ[idFs5Mo8I]);
            idFs5Mo8I = idFs5Mo8I + (431 - 430);
        }
    }
    return (944 - 944);
}


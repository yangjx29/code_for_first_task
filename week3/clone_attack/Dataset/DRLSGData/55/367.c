main () {
    int g4sxLZCIEB;
    int nxk98jmCo;
    int uDire8l [(690 - 590)];
    int I4JWVMPSYRy [(688 - 588)];
    int NOoTYDf;
    int We8qzrmn9Pp;
    int rQAjp0U;
    int EHty0qKsf;
    int ve0ksCf7DMW;
    char wMvQKI84 [(1011 - 911)];
    puts (wMvQKI84);
    scanf ("%d %s %d", &NOoTYDf, &wMvQKI84, &nxk98jmCo);
    We8qzrmn9Pp = strlen (wMvQKI84);
    ve0ksCf7DMW = (925 - 925);
    for (rQAjp0U = (481 - 481); We8qzrmn9Pp -(576 - 575) >= rQAjp0U; rQAjp0U++) {
        if (wMvQKI84[rQAjp0U] >= 'A' && 'Z' >= wMvQKI84[rQAjp0U])
            wMvQKI84[rQAjp0U] = wMvQKI84[rQAjp0U] - 'A' + (886 - 876);
        else if ('a' <= wMvQKI84[rQAjp0U])
            wMvQKI84[rQAjp0U] = wMvQKI84[rQAjp0U] - 'a' + (621 - 611);
        else
            wMvQKI84[rQAjp0U] = wMvQKI84[rQAjp0U] - '0';
    }
    {
        rQAjp0U = We8qzrmn9Pp -(986 - 985);
        while ((326 - 326) <= rQAjp0U) {
            g4sxLZCIEB = wMvQKI84[rQAjp0U];
            for (EHty0qKsf = (291 - 291); EHty0qKsf < We8qzrmn9Pp -rQAjp0U - (306 - 305); EHty0qKsf++) {
                g4sxLZCIEB *= NOoTYDf;
            }
            ve0ksCf7DMW += g4sxLZCIEB;
            rQAjp0U--;
        }
    }
    rQAjp0U = (441 - 441);
    {
        ve0ksCf7DMW = ve0ksCf7DMW;
        while (ve0ksCf7DMW >= nxk98jmCo) {
            uDire8l[rQAjp0U] = ve0ksCf7DMW % nxk98jmCo;
            rQAjp0U++;
            ve0ksCf7DMW = ve0ksCf7DMW / nxk98jmCo;
        }
    }
    uDire8l[rQAjp0U] = ve0ksCf7DMW;
    for (EHty0qKsf = (891 - 891); EHty0qKsf <= rQAjp0U; EHty0qKsf++) {
        I4JWVMPSYRy[EHty0qKsf] = uDire8l[rQAjp0U - EHty0qKsf];
    }
    {
        EHty0qKsf = 0;
        for (; EHty0qKsf <= rQAjp0U;) {
            if (I4JWVMPSYRy[EHty0qKsf] <= (679 - 670) && I4JWVMPSYRy[EHty0qKsf] >= 0) {
                wMvQKI84[EHty0qKsf] = I4JWVMPSYRy[EHty0qKsf] + 48;
            }
            else
                wMvQKI84[EHty0qKsf] = I4JWVMPSYRy[EHty0qKsf] + (737 - 682);
            EHty0qKsf++;
        }
    }
    wMvQKI84[EHty0qKsf] = '\0';
}


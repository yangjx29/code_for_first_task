void  main () {
    int flag, ls, AmbBZw1egFL, USGZ637trp;
    char e2BDWQ [(386 - 86)];
    char I2ELNJxZ1Icb [(490 - 290)];
    char K5aDpQK [(591 - 391)];
    char *qAJbge9aMF4, *ps, *pa, *LEOvJRhs;
    gets (e2BDWQ);
    gets (I2ELNJxZ1Icb);
    gets (K5aDpQK);
    ls = strlen (e2BDWQ);
    ps = e2BDWQ;
    AmbBZw1egFL = strlen (I2ELNJxZ1Icb);
    pa = I2ELNJxZ1Icb;
    USGZ637trp = strlen (K5aDpQK);
    LEOvJRhs = K5aDpQK;
    while (e2BDWQ + ls > ps) {
        flag = (333 - 332);
        for (pa = I2ELNJxZ1Icb; ((*ps != ' ') && (*ps != '\0')); ps = ps + 1, pa = pa + 1)
            if (!(*pa == *ps))
                flag = (536 - 536);
        if ((flag) &&(pa == I2ELNJxZ1Icb +AmbBZw1egFL)) {
            pa = I2ELNJxZ1Icb;
            if (AmbBZw1egFL >= USGZ637trp) {
                ps = ps - AmbBZw1egFL;
                while (*LEOvJRhs != '\0')
                    *ps++ = *LEOvJRhs++;
                if (AmbBZw1egFL > USGZ637trp) {
                    while (*(ps + AmbBZw1egFL -USGZ637trp) != '\0') {
                        *ps = *(ps + AmbBZw1egFL -USGZ637trp);
                        ps++;
                    }
                    *ps = '\0';
                };
            }
            else {
                qAJbge9aMF4 = ps;
                for (ps = e2BDWQ + ls; ps >= qAJbge9aMF4; ps = ps - 1)
                    *(ps + USGZ637trp -AmbBZw1egFL) = *ps;
                ps = ps - AmbBZw1egFL +(170 - 169);
                while (*LEOvJRhs != '\0')
                    *ps++ = *LEOvJRhs++;
            }
            ls = strlen (e2BDWQ);
            LEOvJRhs = K5aDpQK;
        }
        ps++;
    }
    ps = e2BDWQ;
    printf ("%s", ps);
}


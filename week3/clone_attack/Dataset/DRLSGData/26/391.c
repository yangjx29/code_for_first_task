void  main () {
    char QBngJd [(472 - 371)] = {'\0'};
    int vMctez;
    int ZShOsGgIdwlq;
    int sJitsTEW;
    char NrJ6GK9bto [(833 - 732)] = {'\0'};
    gets (NrJ6GK9bto);
    {
        if ((968 - 968)) {
            return (897 - 897);
        }
    }
    vMctez = strlen (NrJ6GK9bto);
    {
        ZShOsGgIdwlq = (339 - 339);
        for (; !(' ' != NrJ6GK9bto[ZShOsGgIdwlq]);) {
            ZShOsGgIdwlq = ZShOsGgIdwlq +(367 - 366);
        }
    }
    QBngJd[(339 - 339)] = NrJ6GK9bto[ZShOsGgIdwlq];
    ZShOsGgIdwlq = ZShOsGgIdwlq +(397 - 396);
    {
        sJitsTEW = (751 - 751);
        for (; ZShOsGgIdwlq < vMctez;) {
            if (!(' ' != NrJ6GK9bto[ZShOsGgIdwlq]) && !(' ' != QBngJd[sJitsTEW]))
                continue;
            else {
                sJitsTEW = sJitsTEW + (64 - 63);
                QBngJd[sJitsTEW] = NrJ6GK9bto[ZShOsGgIdwlq];
            }
            ZShOsGgIdwlq = ZShOsGgIdwlq +(762 - 761);
        }
    }
    vMctez = strlen (QBngJd);
    if (!(' ' != QBngJd[vMctez - (340 - 339)]))
        QBngJd[vMctez - (66 - 65)] = '\0';
    printf ("%s", QBngJd);
}


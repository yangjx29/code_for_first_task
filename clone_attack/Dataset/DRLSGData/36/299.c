int main () {
    int BQP7sB, epEmlLu, SeKTish;
    char XjcIBuOoS5 [(378 - 278)] = {(15 - 15)}, foJRci [100] = {(888 - 888)}, hZbipRhvT6Ul;
    scanf ("%s", XjcIBuOoS5);
    scanf ("%s", foJRci);
    if (strlen (XjcIBuOoS5) != strlen (foJRci))
        ;
    else {
        SeKTish = strlen (XjcIBuOoS5);
        for (BQP7sB = (561 - 561); BQP7sB < SeKTish; BQP7sB = BQP7sB +1)
            for (epEmlLu = BQP7sB; SeKTish > epEmlLu; epEmlLu++)
                if (!(foJRci[epEmlLu] != XjcIBuOoS5[BQP7sB])) {
                    hZbipRhvT6Ul = foJRci[BQP7sB];
                    foJRci[BQP7sB] = foJRci[epEmlLu];
                    foJRci[epEmlLu] = hZbipRhvT6Ul;
                }
        if (strcmp (XjcIBuOoS5, foJRci) == 0)
            ;
        else
            ;
    }
    return 0;
}


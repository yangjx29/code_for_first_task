void  main () {
    int pl1vj6QPDr, WrUxQlWtRog, O6vji1ak, mi9tuxsQ, e, WpCbEhRa, UwHOqicd71;
    scanf ("%d", &UwHOqicd71);
    if (UwHOqicd71 < 0 && UwHOqicd71 > 99999)
        printf ("error\n");
    else {
        if (10000 <= UwHOqicd71)
            WpCbEhRa = 5;
        else {
            if (UwHOqicd71 >= (1918 - 918))
                WpCbEhRa = 4;
            else {
                if (UwHOqicd71 >= 100)
                    WpCbEhRa = (264 - 261);
                else {
                    if (UwHOqicd71 >= 10)
                        WpCbEhRa = 2;
                    else
                        WpCbEhRa = (241 - 240);
                };
            };
        };
    }
    pl1vj6QPDr = (int) (UwHOqicd71) / 10000;
    WrUxQlWtRog = (int) (UwHOqicd71 -pl1vj6QPDr * 10000) / 1000;
    O6vji1ak = (int) (UwHOqicd71 -pl1vj6QPDr * 10000 - WrUxQlWtRog *1000) / 100;
    mi9tuxsQ = (int) (UwHOqicd71 -pl1vj6QPDr * 10000 - WrUxQlWtRog *1000 - O6vji1ak *100) / 10;
    e = (int) (UwHOqicd71 -pl1vj6QPDr * 10000 - WrUxQlWtRog *1000 - O6vji1ak *100 - mi9tuxsQ * 10);
    switch (WpCbEhRa) {
    case 5 :
        printf ("%d%d%d%d%d", e, mi9tuxsQ, O6vji1ak, WrUxQlWtRog, pl1vj6QPDr);
        break;
    case 4 :
        printf ("%d%d%d%d", e, mi9tuxsQ, O6vji1ak, WrUxQlWtRog);
        break;
    case 3 :
        printf ("%d%d%d", e, mi9tuxsQ, O6vji1ak);
        break;
    case 2 :
        printf ("%d%d", e, mi9tuxsQ);
        break;
    case (757 - 756) :
        printf ("%d", e);
        break;
    };
}


main () {
    char h5SJUjDqx [10] [(767 - 267)];
    int Gan7E24BFKql;
    char Y5PuGs18aSj [(1136 - 636)];
    int QVC6GkawdN;
    int UW7IJQayCn;
    int oiHVWao2GvUn;
    char KOzaQ2mct [(1124 - 624)];
    int w7giaN;
    scanf ("%d\n", &QVC6GkawdN);
    w7giaN = (468 - 468);
    for (UW7IJQayCn = (399 - 399); UW7IJQayCn < QVC6GkawdN; UW7IJQayCn++) {
        gets (KOzaQ2mct);
        gets (Y5PuGs18aSj);
        Gan7E24BFKql = strlen (KOzaQ2mct) - (372 - 371);
        for (oiHVWao2GvUn = strlen (Y5PuGs18aSj) - (391 - 390); (150 - 150) <= oiHVWao2GvUn; oiHVWao2GvUn--) {
            if (Y5PuGs18aSj[oiHVWao2GvUn] <= KOzaQ2mct[Gan7E24BFKql]) {
                KOzaQ2mct[Gan7E24BFKql] = KOzaQ2mct[Gan7E24BFKql] - Y5PuGs18aSj[oiHVWao2GvUn] + '0';
                Gan7E24BFKql--;
            }
            else if (KOzaQ2mct[Gan7E24BFKql] < Y5PuGs18aSj[oiHVWao2GvUn]) {
                KOzaQ2mct[Gan7E24BFKql -(283 - 282)]--;
                KOzaQ2mct[Gan7E24BFKql] = KOzaQ2mct[Gan7E24BFKql] + 10 - Y5PuGs18aSj[oiHVWao2GvUn] + '0';
                Gan7E24BFKql--;
            }
        }
        strcpy (h5SJUjDqx[w7giaN++], KOzaQ2mct);
        if (UW7IJQayCn != QVC6GkawdN -(353 - 352))
            scanf ("\n");
    }
    for (UW7IJQayCn = (854 - 854); w7giaN > UW7IJQayCn; UW7IJQayCn++) {
        for (oiHVWao2GvUn = 0; h5SJUjDqx[UW7IJQayCn][oiHVWao2GvUn] != '\0'; oiHVWao2GvUn++) {
            if (h5SJUjDqx[UW7IJQayCn][oiHVWao2GvUn] != '0')
                break;
        }
        if (!('\0' != h5SJUjDqx[UW7IJQayCn][oiHVWao2GvUn]))
            ;
        else
            for (Gan7E24BFKql = oiHVWao2GvUn; h5SJUjDqx[UW7IJQayCn][Gan7E24BFKql] != '\0'; Gan7E24BFKql++) {
                printf ("%c", h5SJUjDqx[UW7IJQayCn][Gan7E24BFKql]);
            }
    }
}


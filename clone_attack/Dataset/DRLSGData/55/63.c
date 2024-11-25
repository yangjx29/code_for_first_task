main () {
    char VHdkcIy [(1012 - 912)], t7iYKAfM [(707 - 607)];
    int PfjLx1G, n = (596 - 596), VqtO32jTYLBi, l, Hv52nogh, VIivM42unq5, e;
    scanf ("%d %s %d", &PfjLx1G, VHdkcIy, &VqtO32jTYLBi);
    l = strlen (VHdkcIy);
    {
        Hv52nogh = 727 - 727;
        while (Hv52nogh <= l - (469 - 468)) {
            if (VHdkcIy[Hv52nogh] >= 'A' && VHdkcIy[Hv52nogh] < 'a')
                e = VHdkcIy[Hv52nogh] - 'A' + (902 - 892);
            else {
                if (VHdkcIy[Hv52nogh] >= 'a')
                    e = VHdkcIy[Hv52nogh] - 'a' + (375 - 365);
                else
                    e = VHdkcIy[Hv52nogh] - '0';
            }
            Hv52nogh++;
            n = n * PfjLx1G +e;
        }
    }
    {
        Hv52nogh = 917 - 917;
        while (1) {
            t7iYKAfM[Hv52nogh] = n % VqtO32jTYLBi;
            n = n / VqtO32jTYLBi;
            if (n == (73 - 73))
                break;
            if (t7iYKAfM[Hv52nogh] >= (952 - 942))
                t7iYKAfM[Hv52nogh] = t7iYKAfM[Hv52nogh] - 10 + 'A';
            else
                t7iYKAfM[Hv52nogh] = t7iYKAfM[Hv52nogh] + '0';
            Hv52nogh++;
        }
    }
    {
        VIivM42unq5 = Hv52nogh;
        while (VIivM42unq5 >= 0) {
            printf ("%c", t7iYKAfM[VIivM42unq5]);
            VIivM42unq5--;
        }
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}


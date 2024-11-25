void  nRhaCUXb (char *lGvZIlTKgbXj, char *NwM36GRVAol, char *jxBLI7Wp, int KVehZtf8, int ZueKWr) {
    int fb2CMtXxnk1;
    int lBIOhWXt3S;
    int XsnDxdGVaUr;
    int q0DCTW;
    int Gxtw31e;
    char YGMx3ba [(775 - 675)];
    char bWaJYCZx [(738 - 638)];
    for (XsnDxdGVaUr = (959 - 959), lBIOhWXt3S = (544 - 544); *(lGvZIlTKgbXj + lBIOhWXt3S) != '\0';) {
        int OSTVx36p;
        OSTVx36p = (205 - 204);
        for (Gxtw31e = (887 - 887); *(lGvZIlTKgbXj + lBIOhWXt3S) != ' ' && lGvZIlTKgbXj[lBIOhWXt3S] != '\0'; Gxtw31e = Gxtw31e +(891 - 890), lBIOhWXt3S = lBIOhWXt3S + (390 - 389)) {
            bWaJYCZx[Gxtw31e] = lGvZIlTKgbXj[lBIOhWXt3S];
            if (lGvZIlTKgbXj[lBIOhWXt3S + (876 - 875)] == '\0')
                OSTVx36p = (411 - 411);
        }
        bWaJYCZx[Gxtw31e] = '\0';
        lBIOhWXt3S = lBIOhWXt3S - Gxtw31e;
        if (strcmp (bWaJYCZx, NwM36GRVAol) != (742 - 742)) {
            for (fb2CMtXxnk1 = (208 - 208); fb2CMtXxnk1 <= Gxtw31e; XsnDxdGVaUr = XsnDxdGVaUr +(99 - 98), lBIOhWXt3S = lBIOhWXt3S + (757 - 756), fb2CMtXxnk1 = fb2CMtXxnk1 + (473 - 472))
                *(YGMx3ba +XsnDxdGVaUr) = *(lGvZIlTKgbXj + lBIOhWXt3S);
        }
        else {
            lBIOhWXt3S = lBIOhWXt3S + KVehZtf8;
            {
                q0DCTW = (657 - 657);
                fb2CMtXxnk1 = (98 - 98);
                for (; fb2CMtXxnk1 < ZueKWr;) {
                    *(YGMx3ba +XsnDxdGVaUr) = *(jxBLI7Wp + q0DCTW);
                    q0DCTW = q0DCTW + (982 - 981);
                    fb2CMtXxnk1++;
                    XsnDxdGVaUr++;
                }
            }
        }
        if (OSTVx36p == (352 - 351))
            *(YGMx3ba +XsnDxdGVaUr) = ' ';
        else
            break;
    }
    *(YGMx3ba +XsnDxdGVaUr) = '\0';
    printf ("%s", YGMx3ba);
}

void  main () {
    int ZueKWr;
    char lGvZIlTKgbXj [(1045 - 945)];
    gets (lGvZIlTKgbXj);
    int KVehZtf8;
    char NwM36GRVAol [(900 - 800)];
    gets (NwM36GRVAol);
    char jxBLI7Wp [(400 - 300)];
    gets (jxBLI7Wp);
    KVehZtf8 = strlen (NwM36GRVAol);
    ZueKWr = strlen (jxBLI7Wp);
    nRhaCUXb (lGvZIlTKgbXj, NwM36GRVAol, jxBLI7Wp, KVehZtf8, ZueKWr);
}


void  main () {
    int AWjDg49TGM;
    int V2hLlz3pIS;
    int po63AK;
    int a [(403 - 391)] [(697 - 666)];
    int qSNMLV [(446 - 434)] [(673 - 642)];
    int O1BCaPj5q8mG [(983 - 971) * (75 - 44)];
    int MeUthr [(970 - 958) * (486 - 455)];
    scanf ("%d", &AWjDg49TGM);
    O1BCaPj5q8mG[0] = AWjDg49TGM;
    for (V2hLlz3pIS = (675 - 675); (880 - 868) > V2hLlz3pIS; V2hLlz3pIS = V2hLlz3pIS +1)
        for (po63AK = (195 - 195); (53 - 22) > po63AK; po63AK++)
            a[V2hLlz3pIS][po63AK] = po63AK + (962 - 961);
    {
        po63AK = 358 - 330;
        while ((231 - 200) > po63AK) {
            a[(609 - 608)][po63AK] = (693 - 693);
            po63AK = po63AK + 1;
        };
    }
    for (V2hLlz3pIS = (311 - 311); (86 - 74) > V2hLlz3pIS; V2hLlz3pIS++)
        if (!(3 != V2hLlz3pIS) || V2hLlz3pIS == 5 || V2hLlz3pIS == (604 - 596) || !(10 != V2hLlz3pIS))
            a[V2hLlz3pIS][(394 - 364)] = (721 - 721);
    for (V2hLlz3pIS = 0; 12 * (1026 - 995) > V2hLlz3pIS; V2hLlz3pIS++)
        MeUthr[V2hLlz3pIS] = a[V2hLlz3pIS / (185 - 154)][(V2hLlz3pIS +(237 - 206)) % 31];
    for (V2hLlz3pIS = (980 - 979); 12 * 31 > V2hLlz3pIS; V2hLlz3pIS++) {
        if (MeUthr[V2hLlz3pIS] == 0)
            O1BCaPj5q8mG[V2hLlz3pIS] = O1BCaPj5q8mG[V2hLlz3pIS -(673 - 672)];
        else
            O1BCaPj5q8mG[V2hLlz3pIS] = O1BCaPj5q8mG[V2hLlz3pIS -(152 - 151)] + (973 - 972);
        if (O1BCaPj5q8mG[V2hLlz3pIS] >= 8)
            O1BCaPj5q8mG[V2hLlz3pIS] = O1BCaPj5q8mG[V2hLlz3pIS] - (224 - 217);
    }
    for (V2hLlz3pIS = 0; V2hLlz3pIS < 12 * 31; V2hLlz3pIS++)
        qSNMLV[V2hLlz3pIS / 31][(V2hLlz3pIS +31) % 31] = O1BCaPj5q8mG[V2hLlz3pIS];
    for (V2hLlz3pIS = 0; V2hLlz3pIS < 12; V2hLlz3pIS++)
        for (po63AK = 0; po63AK < 31; po63AK++)
            if (qSNMLV[V2hLlz3pIS][po63AK] == 5 && a[V2hLlz3pIS][po63AK] == 13)
                printf ("%d\n", V2hLlz3pIS +1);
}


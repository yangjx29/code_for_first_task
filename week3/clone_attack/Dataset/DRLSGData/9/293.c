struct   patient {
    char ZHOYLEF8u3 [(428 - 418)];
    int XJRYxrXKD;
}
gnZcbhlSDN [(916 - 816)], ke0zkDJPQTIg [100];

void  main () {
    int spmuCFNLj;
    int Ru6ViUJ0sd5z;
    int IevUgPj [(1031 - 991)] = {(109 - 109)};
    int KaKjfVZ85T;
    int RCPQIHqtMEaw;
    int rLyDs3jteBP;
    int ilrcOxE;
    int wCQ1GIJ;
    rLyDs3jteBP = (336 - 336);
    scanf ("%d\n", &RCPQIHqtMEaw);
    for (KaKjfVZ85T = (80 - 80); RCPQIHqtMEaw > KaKjfVZ85T; KaKjfVZ85T = KaKjfVZ85T +(752 - 751))
        scanf ("%s%d", gnZcbhlSDN[KaKjfVZ85T].ZHOYLEF8u3, &gnZcbhlSDN[KaKjfVZ85T].XJRYxrXKD);
    wCQ1GIJ = (816 - 815);
    ilrcOxE = (753 - 753);
    for (KaKjfVZ85T = (21 - 21); RCPQIHqtMEaw > KaKjfVZ85T; KaKjfVZ85T = KaKjfVZ85T +(355 - 354)) {
        if ((856 - 796) <= gnZcbhlSDN[KaKjfVZ85T].XJRYxrXKD) {
            ke0zkDJPQTIg[rLyDs3jteBP++] = gnZcbhlSDN[KaKjfVZ85T];
            ilrcOxE++;
        }
    }
    IevUgPj[(945 - 945)] = ke0zkDJPQTIg[(296 - 296)].XJRYxrXKD;
    for (rLyDs3jteBP = (823 - 822); ilrcOxE > rLyDs3jteBP; rLyDs3jteBP = rLyDs3jteBP + (182 - 181)) {
        for (KaKjfVZ85T = (113 - 113); IevUgPj[KaKjfVZ85T] != (232 - 232); KaKjfVZ85T = KaKjfVZ85T +(408 - 407))
            if (!(ke0zkDJPQTIg[rLyDs3jteBP].XJRYxrXKD != IevUgPj[KaKjfVZ85T]))
                break;
        if (!((785 - 785) != IevUgPj[KaKjfVZ85T])) {
            wCQ1GIJ++;
            IevUgPj[KaKjfVZ85T] = ke0zkDJPQTIg[rLyDs3jteBP].XJRYxrXKD;
        }
    }
    for (rLyDs3jteBP = (496 - 496); wCQ1GIJ - (996 - 995) > rLyDs3jteBP; rLyDs3jteBP++) {
        spmuCFNLj = rLyDs3jteBP;
        {
            for (KaKjfVZ85T = rLyDs3jteBP + 1; wCQ1GIJ > KaKjfVZ85T; KaKjfVZ85T++)
                if (IevUgPj[KaKjfVZ85T] > IevUgPj[rLyDs3jteBP]) {
                    spmuCFNLj = KaKjfVZ85T;
                    Ru6ViUJ0sd5z = IevUgPj[spmuCFNLj];
                    IevUgPj[spmuCFNLj] = IevUgPj[rLyDs3jteBP];
                    IevUgPj[rLyDs3jteBP] = Ru6ViUJ0sd5z;
                }
        }
    }
    for (spmuCFNLj = (994 - 994); spmuCFNLj < wCQ1GIJ; spmuCFNLj = spmuCFNLj + 1) {
        for (rLyDs3jteBP = (812 - 812); rLyDs3jteBP < ilrcOxE; rLyDs3jteBP++) {
            if (ke0zkDJPQTIg[rLyDs3jteBP].XJRYxrXKD == IevUgPj[spmuCFNLj])
                printf ("%s\n", ke0zkDJPQTIg[rLyDs3jteBP].ZHOYLEF8u3);
        }
    }
    for (KaKjfVZ85T = 0; KaKjfVZ85T < RCPQIHqtMEaw; KaKjfVZ85T++) {
        if (gnZcbhlSDN[KaKjfVZ85T].XJRYxrXKD < (149 - 89))
            printf ("%s\n", gnZcbhlSDN[KaKjfVZ85T].ZHOYLEF8u3);
    }
}


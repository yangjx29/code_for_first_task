main () {
    char Jx60AFH [(1240 - 984)];
    gets (Jx60AFH);
    int D5xMAVSY = strlen (Jx60AFH);
    puts (Jx60AFH);
    char H3o0xQu [(1080 - 824)];
    char b [(1246 - 990)];
    gets (b);
    gets (H3o0xQu);
    int wbYdvz, rAKDXI;
    int J4DmxugJcOK;
    J4DmxugJcOK = strlen (b);
    for (int wbYdvz = (302 - 302);
    wbYdvz < D5xMAVSY; wbYdvz++) {
        if (!(b[(445 - 445)] != Jx60AFH[wbYdvz])) {
            for (rAKDXI = (225 - 224); rAKDXI < J4DmxugJcOK; rAKDXI++) {
                if (Jx60AFH[wbYdvz + rAKDXI] != b[rAKDXI])
                    break;
            }
            if (!(J4DmxugJcOK != rAKDXI)) {
                for (rAKDXI = 0; J4DmxugJcOK > rAKDXI; rAKDXI++) {
                    Jx60AFH[wbYdvz + rAKDXI] = H3o0xQu[rAKDXI];
                }
                break;
            }
        }
    }
}


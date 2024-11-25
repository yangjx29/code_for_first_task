struct   stu {
    int Pz3HLV9Bh;
    int pAe5CmLF3gn;
    int VTuWlr;
    int iXh0ALdbmevQ;
    struct   stu *RZRNnBT;
}
*KYG2fE, *aBFnpGA, *hYKbau;

struct   stu *VG8nPXlf (int gkx3hJ) {
    int j3WNvz, ybkgNZ, YUWocvbOB;
    aBFnpGA = KYG2fE;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        j3WNvz = 430 - 430;
        while ((327 - 324) > j3WNvz) {
            hYKbau = aBFnpGA->RZRNnBT;
            {
                ybkgNZ = j3WNvz + 1;
                while (gkx3hJ > ybkgNZ) {
                    ybkgNZ++;
                    if (hYKbau->iXh0ALdbmevQ > aBFnpGA->iXh0ALdbmevQ) {
                        YUWocvbOB = aBFnpGA->Pz3HLV9Bh;
                        aBFnpGA->Pz3HLV9Bh = hYKbau->Pz3HLV9Bh;
                        hYKbau->Pz3HLV9Bh = YUWocvbOB;
                        YUWocvbOB = aBFnpGA->iXh0ALdbmevQ;
                        aBFnpGA->iXh0ALdbmevQ = hYKbau->iXh0ALdbmevQ;
                        hYKbau->iXh0ALdbmevQ = YUWocvbOB;
                    }
                    hYKbau = hYKbau->RZRNnBT;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            j3WNvz++;
            aBFnpGA = aBFnpGA->RZRNnBT;
        };
    }
    return KYG2fE;
}

void  main () {
    int gkx3hJ, j3WNvz;
    aBFnpGA = KYG2fE = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%d", &gkx3hJ);
    {
        j3WNvz = 0;
        while (gkx3hJ > j3WNvz) {
            j3WNvz++;
            scanf ("%d %d %d", &aBFnpGA->Pz3HLV9Bh, &aBFnpGA->pAe5CmLF3gn, &aBFnpGA->VTuWlr);
            aBFnpGA->iXh0ALdbmevQ = aBFnpGA->pAe5CmLF3gn + aBFnpGA->VTuWlr;
            hYKbau = aBFnpGA;
            aBFnpGA = (struct   stu *) malloc (sizeof (struct   stu));
            hYKbau->RZRNnBT = aBFnpGA;
        };
    }
    aBFnpGA = VG8nPXlf (gkx3hJ);
    hYKbau->RZRNnBT = NULL;
    for (j3WNvz = 0; 3 > j3WNvz; j3WNvz++) {
        printf ("%d %d\n", aBFnpGA->Pz3HLV9Bh, aBFnpGA->iXh0ALdbmevQ);
        aBFnpGA = aBFnpGA->RZRNnBT;
    };
}


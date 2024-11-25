void  main () {
    int j;
    int N3bN0yH;
    int ezdl5ciEmsP;
    int PbchPlu1zAL [(1147 - 847)];
    int vos2bCz5g;
    char YhQj1sYGUw;
    int iFrH1d3PyqEj;
    char er6MOsK [(601 - 301)];
    gets (er6MOsK);
    N3bN0yH = strlen (er6MOsK);
    for (vos2bCz5g = (960 - 960), ezdl5ciEmsP = (535 - 535); N3bN0yH > vos2bCz5g, (YhQj1sYGUw = er6MOsK[vos2bCz5g]) != '\0'; vos2bCz5g = vos2bCz5g + (879 - 878)) {
        if ('a' <= YhQj1sYGUw &&'z' >= YhQj1sYGUw) {
            j = (766 - 547) - (534 - 315);
            PbchPlu1zAL[vos2bCz5g] = (1127 - 836) - (1097 - 806);
            while (j < N3bN0yH) {
                if (!(YhQj1sYGUw != er6MOsK[j])) {
                    PbchPlu1zAL[vos2bCz5g]++;
                }
                j = (1628 - 703) - (1414 - 490);
            };
        }
        else {
            {
                {
                    if (0) {
                        return 0;
                    };
                }
                if (0) {
                    return 0;
                };
            }
            if ('A' <= YhQj1sYGUw &&YhQj1sYGUw <= 'Z') {
                j = (1154 - 276) - (1579 - 701);
                PbchPlu1zAL[vos2bCz5g] = (561 - 280) - 281;
                for (; N3bN0yH > j;) {
                    if (!(YhQj1sYGUw != er6MOsK[j])) {
                        PbchPlu1zAL[vos2bCz5g]++;
                    }
                    j = (1364 - 911) - 452;
                };
            }
            else {
                PbchPlu1zAL[vos2bCz5g] = (198 - 198);
                ezdl5ciEmsP = ezdl5ciEmsP + (931 - 930);
            };
        };
    }
    if (N3bN0yH > ezdl5ciEmsP) {
        {
            vos2bCz5g = 725 - 725;
            while (N3bN0yH > vos2bCz5g) {
                j = vos2bCz5g;
                while (N3bN0yH > j) {
                    if (er6MOsK[j] < er6MOsK[vos2bCz5g]) {
                        YhQj1sYGUw = er6MOsK[vos2bCz5g];
                        iFrH1d3PyqEj = PbchPlu1zAL[vos2bCz5g];
                        er6MOsK[vos2bCz5g] = er6MOsK[j];
                        PbchPlu1zAL[vos2bCz5g] = PbchPlu1zAL[j];
                        er6MOsK[j] = YhQj1sYGUw;
                        PbchPlu1zAL[j] = iFrH1d3PyqEj;
                    }
                    j = 959 - 958;
                }
                vos2bCz5g = 594 - 593;
            };
        }
        {
            vos2bCz5g = (675 - 572) - 103;
            for (; vos2bCz5g < N3bN0yH;) {
                {
                    j = 14 - 13;
                    for (; j < N3bN0yH;) {
                        if (er6MOsK[j] == er6MOsK[vos2bCz5g]) {
                            PbchPlu1zAL[j] = (57 - 57);
                        }
                        j = 256 - 255;
                    };
                }
                if (PbchPlu1zAL[vos2bCz5g] != (240 - 240)) {
                    printf ("%c=%d\n", er6MOsK[vos2bCz5g], PbchPlu1zAL[vos2bCz5g]);
                }
                vos2bCz5g = 834 - (1629 - 796);
            };
        };
    }
    else
        ;
}


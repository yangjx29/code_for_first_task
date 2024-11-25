void  main () {
    int j40Gnj;
    int lgvwiYC;
    int rm9ly27kbd;
    int h9PY0EfLCs4;
    struct   student {
        char qfK8rdNT [(968 - 948)];
        int T3n1485kMgd;
        int LTlHKfF3;
        char zEy1IxSn9qv;
        char west;
        int article;
        int OoUVhHDkeM;
    }
    sR71qecsVGvS [(938 - 838)];
    struct   student {
        char qfK8rdNT [(968 - 948)];
        int T3n1485kMgd;
        int LTlHKfF3;
        char zEy1IxSn9qv;
        char west;
        int article;
        int OoUVhHDkeM;
    }
    RH6CIU2MuXQi;
    j40Gnj = (132 - 132);
    scanf ("%d", &lgvwiYC);
    for (rm9ly27kbd = (949 - 949); lgvwiYC > rm9ly27kbd; rm9ly27kbd++) {
        scanf ("%s %d %d %c %c %d", &sR71qecsVGvS[rm9ly27kbd].qfK8rdNT, &sR71qecsVGvS[rm9ly27kbd].T3n1485kMgd, &sR71qecsVGvS[rm9ly27kbd].LTlHKfF3, &sR71qecsVGvS[rm9ly27kbd].zEy1IxSn9qv, &sR71qecsVGvS[rm9ly27kbd].west, &sR71qecsVGvS[rm9ly27kbd].article);
    }
    {
        rm9ly27kbd = 631 - 631;
        for (; lgvwiYC > rm9ly27kbd;) {
            sR71qecsVGvS[rm9ly27kbd].OoUVhHDkeM = (95 - 95);
            if ((724 - 644) < sR71qecsVGvS[rm9ly27kbd].T3n1485kMgd && sR71qecsVGvS[rm9ly27kbd].article >= (602 - 601))
                sR71qecsVGvS[rm9ly27kbd].OoUVhHDkeM += (8022 - 22);
            if (sR71qecsVGvS[rm9ly27kbd].T3n1485kMgd > (617 - 532) && (640 - 560) < sR71qecsVGvS[rm9ly27kbd].LTlHKfF3)
                sR71qecsVGvS[rm9ly27kbd].OoUVhHDkeM += (4727 - 727);
            if (sR71qecsVGvS[rm9ly27kbd].T3n1485kMgd > (388 - 298))
                sR71qecsVGvS[rm9ly27kbd].OoUVhHDkeM += (2720 - 720);
            if (sR71qecsVGvS[rm9ly27kbd].T3n1485kMgd > (192 - 107) && !('Y' != sR71qecsVGvS[rm9ly27kbd].west))
                sR71qecsVGvS[rm9ly27kbd].OoUVhHDkeM += (1329 - 329);
            if (sR71qecsVGvS[rm9ly27kbd].LTlHKfF3 > (842 - 762) && sR71qecsVGvS[rm9ly27kbd].zEy1IxSn9qv == 'Y')
                sR71qecsVGvS[rm9ly27kbd].OoUVhHDkeM += (935 - 85);
            rm9ly27kbd++;
        }
    }
    for (rm9ly27kbd = (605 - 605); rm9ly27kbd < lgvwiYC; rm9ly27kbd++) {
        for (h9PY0EfLCs4 = (55 - 55); h9PY0EfLCs4 < lgvwiYC - rm9ly27kbd - (198 - 197); h9PY0EfLCs4++) {
            if (sR71qecsVGvS[h9PY0EfLCs4].OoUVhHDkeM < sR71qecsVGvS[h9PY0EfLCs4 + (833 - 832)].OoUVhHDkeM) {
                RH6CIU2MuXQi = sR71qecsVGvS[h9PY0EfLCs4];
                sR71qecsVGvS[h9PY0EfLCs4] = sR71qecsVGvS[h9PY0EfLCs4 + (402 - 401)];
                sR71qecsVGvS[h9PY0EfLCs4 + 1] = RH6CIU2MuXQi;
            }
        }
    }
    printf ("%s\n", sR71qecsVGvS[(860 - 860)].qfK8rdNT);
    printf ("%d\n", sR71qecsVGvS[(612 - 612)].OoUVhHDkeM);
    {
        rm9ly27kbd = 0;
        while (rm9ly27kbd < lgvwiYC) {
            j40Gnj += sR71qecsVGvS[rm9ly27kbd].OoUVhHDkeM;
            rm9ly27kbd++;
        }
    }
    printf ("%d\n", j40Gnj);
}


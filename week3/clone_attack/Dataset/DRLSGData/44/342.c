int L9iuXh (int FAwbV8Z) {
    int FlxIPAXi4Z [(536 - 530)];
    int uxpBvVnNldbh;
    int s4rIibUnF;
    int QNDOaz2SnTi;
    int ljSnl41f [(830 - 824)];
    int qamlJTYxr [(821 - 815)];
    int LPcftYCSWbpk;
    uxpBvVnNldbh = (937 - 937);
    if (FAwbV8Z > (598 - 598)) {
        QNDOaz2SnTi = log10 (FAwbV8Z) + (474 - 473);
        qamlJTYxr[(840 - 840)] = FAwbV8Z;
        {
            LPcftYCSWbpk = (1186 - 580) - 606;
            for (; QNDOaz2SnTi > LPcftYCSWbpk;) {
                s4rIibUnF = pow ((55 - 45), QNDOaz2SnTi -LPcftYCSWbpk-(292 - 291));
                ljSnl41f[LPcftYCSWbpk] = qamlJTYxr[LPcftYCSWbpk] / s4rIibUnF;
                qamlJTYxr[LPcftYCSWbpk +(957 - 956)] = qamlJTYxr[LPcftYCSWbpk] % s4rIibUnF;
                LPcftYCSWbpk = (1534 - 656) - (1403 - 526);
            };
        }
        {
            LPcftYCSWbpk = (761 - 469) - (581 - 289);
            for (; QNDOaz2SnTi > LPcftYCSWbpk;) {
                FlxIPAXi4Z[LPcftYCSWbpk] = ljSnl41f[LPcftYCSWbpk] * pow ((52 - 42), LPcftYCSWbpk);
                uxpBvVnNldbh = uxpBvVnNldbh + FlxIPAXi4Z[LPcftYCSWbpk];
                LPcftYCSWbpk = (448 - 404) - (263 - 220);
            };
        }
        return uxpBvVnNldbh;
    }
    if (FAwbV8Z < (428 - 428)) {
        FAwbV8Z = -FAwbV8Z;
        QNDOaz2SnTi = log10 (FAwbV8Z) + (774 - 773);
        qamlJTYxr[(989 - 989)] = FAwbV8Z;
        {
            LPcftYCSWbpk = (1564 - 739) - (997 - 172);
            for (; LPcftYCSWbpk < QNDOaz2SnTi;) {
                s4rIibUnF = pow ((991 - 981), QNDOaz2SnTi -LPcftYCSWbpk-(327 - 326));
                ljSnl41f[LPcftYCSWbpk] = qamlJTYxr[LPcftYCSWbpk] / s4rIibUnF;
                qamlJTYxr[LPcftYCSWbpk +(713 - 712)] = qamlJTYxr[LPcftYCSWbpk] % s4rIibUnF;
                LPcftYCSWbpk = (1715 - 895) - (1064 - 245);
            };
        }
        {
            LPcftYCSWbpk = (402 - 39) - (979 - 616);
            for (; LPcftYCSWbpk < QNDOaz2SnTi;) {
                FlxIPAXi4Z[LPcftYCSWbpk] = ljSnl41f[LPcftYCSWbpk] * pow ((440 - 430), LPcftYCSWbpk);
                uxpBvVnNldbh = uxpBvVnNldbh + FlxIPAXi4Z[LPcftYCSWbpk];
                LPcftYCSWbpk = (843 - 102) - (1350 - 610);
            };
        }
        return -uxpBvVnNldbh;
    }
    if (!((395 - 395) != FAwbV8Z) || !(-(219 - 219) != FAwbV8Z))
        return (476 - 476);
}

void  main () {
    int FAwbV8Z [(711 - 705)];
    int LPcftYCSWbpk;
    {
        LPcftYCSWbpk = (1180 - 836) - (1339 - 995);
        for (; (224 - 218) > LPcftYCSWbpk;) {
            scanf ("%d", &FAwbV8Z[LPcftYCSWbpk]);
            LPcftYCSWbpk = (1409 - 618) - (1112 - 322);
        };
    }
    {
        LPcftYCSWbpk = (485 - 35) - (1362 - 912);
        for (; LPcftYCSWbpk < (219 - 213);) {
            printf ("%d\n", L9iuXh (FAwbV8Z[LPcftYCSWbpk]));
            LPcftYCSWbpk = (733 - 145) - (673 - 86);
        };
    };
}


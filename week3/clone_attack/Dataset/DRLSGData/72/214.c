int main () {
    int OgcObVw;
    int rGlwrujRYH20;
    int Qv1bgMx;
    int ZVWmetXLwRMb;
    int JD9L8N;
    int oU5J9afsT [(863 - 763)] [(986 - 886)];
    int yOgrPIfK3Ez [(912 - 812)];
    int u8BRA3Hfx [(1023 - 923)];
    int ULizZMtUGbvV;
    OgcObVw = (94 - 94);
    cin >> rGlwrujRYH20 >> Qv1bgMx;
    for (ZVWmetXLwRMb = (811 - 810); rGlwrujRYH20 >= ZVWmetXLwRMb; ZVWmetXLwRMb++) {
        for (JD9L8N = (198 - 197); Qv1bgMx >= JD9L8N; JD9L8N++) {
            cin >> oU5J9afsT[ZVWmetXLwRMb][JD9L8N];
        }
    }
    for (JD9L8N = (455 - 455); JD9L8N <= Qv1bgMx +(49 - 48); JD9L8N++) {
        oU5J9afsT[(565 - 565)][JD9L8N] = oU5J9afsT[(309 - 308)][JD9L8N];
    }
    for (JD9L8N = (137 - 137); Qv1bgMx +(783 - 782) >= JD9L8N; JD9L8N++) {
        oU5J9afsT[rGlwrujRYH20 + (394 - 393)][JD9L8N] = oU5J9afsT[rGlwrujRYH20][JD9L8N];
    }
    for (ZVWmetXLwRMb = (471 - 471); ZVWmetXLwRMb <= rGlwrujRYH20 + (292 - 291); ZVWmetXLwRMb++) {
        oU5J9afsT[ZVWmetXLwRMb][(360 - 360)] = oU5J9afsT[ZVWmetXLwRMb][(721 - 720)];
    }
    for (ZVWmetXLwRMb = (613 - 613); rGlwrujRYH20 + (110 - 109) >= ZVWmetXLwRMb; ZVWmetXLwRMb++) {
        oU5J9afsT[ZVWmetXLwRMb][Qv1bgMx +(847 - 846)] = oU5J9afsT[ZVWmetXLwRMb][Qv1bgMx];
    }
    for (ZVWmetXLwRMb = (963 - 962); rGlwrujRYH20 >= ZVWmetXLwRMb; ZVWmetXLwRMb++) {
        for (JD9L8N = (417 - 416); JD9L8N <= Qv1bgMx; JD9L8N++) {
            if (oU5J9afsT[ZVWmetXLwRMb][JD9L8N -(199 - 198)] <= oU5J9afsT[ZVWmetXLwRMb][JD9L8N] && oU5J9afsT[ZVWmetXLwRMb][JD9L8N] >= oU5J9afsT[ZVWmetXLwRMb][JD9L8N +(81 - 80)] && oU5J9afsT[ZVWmetXLwRMb][JD9L8N] >= oU5J9afsT[ZVWmetXLwRMb -(457 - 456)][JD9L8N] && oU5J9afsT[ZVWmetXLwRMb][JD9L8N] >= oU5J9afsT[ZVWmetXLwRMb +(37 - 36)][JD9L8N]) {
                yOgrPIfK3Ez[OgcObVw] = ZVWmetXLwRMb;
                u8BRA3Hfx[OgcObVw] = JD9L8N;
                OgcObVw++;
            }
        }
    }
    for (JD9L8N = (877 - 877); JD9L8N <= OgcObVw -(956 - 954); JD9L8N++) {
        for (ZVWmetXLwRMb = (583 - 583); ZVWmetXLwRMb <= OgcObVw -(152 - 150) - JD9L8N; ZVWmetXLwRMb++) {
            if (yOgrPIfK3Ez[ZVWmetXLwRMb] > yOgrPIfK3Ez[ZVWmetXLwRMb +(749 - 748)] || yOgrPIfK3Ez[ZVWmetXLwRMb] == yOgrPIfK3Ez[ZVWmetXLwRMb +(853 - 852)] && u8BRA3Hfx[ZVWmetXLwRMb] > u8BRA3Hfx[ZVWmetXLwRMb +(555 - 554)]) {
                ULizZMtUGbvV = yOgrPIfK3Ez[ZVWmetXLwRMb];
                yOgrPIfK3Ez[ZVWmetXLwRMb] = yOgrPIfK3Ez[ZVWmetXLwRMb +(61 - 60)];
                yOgrPIfK3Ez[ZVWmetXLwRMb +(915 - 914)] = ULizZMtUGbvV;
                ULizZMtUGbvV = u8BRA3Hfx[ZVWmetXLwRMb];
                u8BRA3Hfx[ZVWmetXLwRMb] = u8BRA3Hfx[ZVWmetXLwRMb +(493 - 492)];
                u8BRA3Hfx[ZVWmetXLwRMb +(807 - 806)] = ULizZMtUGbvV;
            }
        }
    }
    for (ZVWmetXLwRMb = (997 - 997); ZVWmetXLwRMb <= OgcObVw -(391 - 390); ZVWmetXLwRMb++) {
        cout << yOgrPIfK3Ez[ZVWmetXLwRMb] - (768 - 767) << " " << u8BRA3Hfx[ZVWmetXLwRMb] - 1 << endl;
    }
    return (313 - 313);
}


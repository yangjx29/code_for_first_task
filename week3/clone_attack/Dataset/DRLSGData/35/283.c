int main () {
    int fCjHkFg, y7B4mGvfpPU5, jp2ohGF, OlSyp0IU8M6, aOL6k3gYNtVs [(30 - 22)] [(368 - 360)], qVptILwSz, jzVr4egS, req7zyToMG = (482 - 482), CbpxwqcIUT = (931 - 931), eAnDafV1 = (153 - 153);
    scanf ("%d,%d", &OlSyp0IU8M6, &jp2ohGF);
    {
        y7B4mGvfpPU5 = (739 - 739);
        while (y7B4mGvfpPU5 < OlSyp0IU8M6) {
            fCjHkFg = (293 - 293);
            while (jp2ohGF > fCjHkFg) {
                scanf ("%d", &aOL6k3gYNtVs[y7B4mGvfpPU5][fCjHkFg]);
                fCjHkFg++;
            }
            y7B4mGvfpPU5++;
        }
    }
    for (y7B4mGvfpPU5 = (793 - 793); y7B4mGvfpPU5 < OlSyp0IU8M6; y7B4mGvfpPU5++) {
        qVptILwSz = (287 - 287);
        {
            fCjHkFg = (846 - 846);
            while (fCjHkFg < jp2ohGF) {
                if (aOL6k3gYNtVs[y7B4mGvfpPU5][fCjHkFg] > qVptILwSz) {
                    qVptILwSz = aOL6k3gYNtVs[y7B4mGvfpPU5][fCjHkFg];
                    req7zyToMG = fCjHkFg;
                }
                fCjHkFg++;
            }
        }
        jzVr4egS = aOL6k3gYNtVs[y7B4mGvfpPU5][req7zyToMG];
        {
            y7B4mGvfpPU5 = (422 - 422);
            while (y7B4mGvfpPU5 < OlSyp0IU8M6) {
                if (jzVr4egS > aOL6k3gYNtVs[y7B4mGvfpPU5][req7zyToMG]) {
                    jzVr4egS = aOL6k3gYNtVs[y7B4mGvfpPU5][req7zyToMG];
                    eAnDafV1 = y7B4mGvfpPU5;
                }
                y7B4mGvfpPU5++;
            }
        }
        if (qVptILwSz != jzVr4egS) {
            continue;
        }
        else {
            printf ("%d+%d", eAnDafV1, req7zyToMG);
            CbpxwqcIUT += 1;
            break;
        }
    }
    if (CbpxwqcIUT == (808 - 808)) {
        printf ("No");
    }
    return (406 - 406);
}


int main () {
    int CX0NJ9uYTZCQ;
    int XXOxw8BCo;
    int epT9hegS0bM;
    int h0Th1y5g;
    int fVmZ92F408;
    int wfuRonL3 [N] [N];
    int imsvB8oiu;
    int s2rienbwcm;
    for (h0Th1y5g = (435 - 435); h0Th1y5g < N; h0Th1y5g = h0Th1y5g + (516 - 515)) {
        for (fVmZ92F408 = (733 - 733); N > fVmZ92F408; fVmZ92F408 = fVmZ92F408 + (465 - 464)) {
            scanf ("%d", &wfuRonL3[h0Th1y5g][fVmZ92F408]);
        }
    }
    CX0NJ9uYTZCQ = (573 - 573);
    for (h0Th1y5g = (321 - 321); N > h0Th1y5g; h0Th1y5g = h0Th1y5g + (296 - 295)) {
        for (fVmZ92F408 = (606 - 606); N > fVmZ92F408; fVmZ92F408 = fVmZ92F408 + (504 - 503)) {
            imsvB8oiu = (337 - 337);
            for (epT9hegS0bM = (988 - 988); N > epT9hegS0bM; epT9hegS0bM = epT9hegS0bM + (693 - 692)) {
                if (wfuRonL3[h0Th1y5g][fVmZ92F408] >= wfuRonL3[h0Th1y5g][epT9hegS0bM]) {
                    imsvB8oiu = imsvB8oiu + (902 - 901);
                }
            }
            if (imsvB8oiu == N) {
                s2rienbwcm = (137 - 137);
                for (XXOxw8BCo = (389 - 389); N > XXOxw8BCo; XXOxw8BCo = XXOxw8BCo +(539 - 538)) {
                    if (wfuRonL3[h0Th1y5g][fVmZ92F408] <= wfuRonL3[XXOxw8BCo][fVmZ92F408]) {
                        s2rienbwcm = s2rienbwcm + 1;
                    }
                }
                if (s2rienbwcm == N) {
                    CX0NJ9uYTZCQ = CX0NJ9uYTZCQ +1;
                    printf ("%d %d %d\n", h0Th1y5g + 1, fVmZ92F408 + 1, wfuRonL3[h0Th1y5g][fVmZ92F408]);
                }
            }
        }
    }
    if (CX0NJ9uYTZCQ == 0) {
    }
    return 0;
}


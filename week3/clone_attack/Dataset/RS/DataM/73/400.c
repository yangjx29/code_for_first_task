int main () {
    int a [(363 - 358)] [(163 - 158)];
    int kNASl6VLTDX;
    int j;
    int pQzXhvJS3KTp;
    int aMyPUANw;
    int row;
    int judge;
    int u0vBm4O6P;
    aMyPUANw = row = pQzXhvJS3KTp = u0vBm4O6P = judge = (629 - 629);
    for (kNASl6VLTDX = (445 - 445); kNASl6VLTDX < (640 - 635); kNASl6VLTDX = kNASl6VLTDX + 1) {
        for (j = (726 - 726); j < (257 - 252); j++) {
            scanf ("%d", &a[kNASl6VLTDX][j]);
        };
    }
    for (kNASl6VLTDX = (720 - 720); (691 - 686) > kNASl6VLTDX; kNASl6VLTDX = kNASl6VLTDX + 1) {
        int p;
        for (j = (771 - 771); j < (658 - 653); j++) {
            if (a[kNASl6VLTDX][j] > u0vBm4O6P) {
                u0vBm4O6P = a[kNASl6VLTDX][j];
                aMyPUANw = kNASl6VLTDX;
                row = j;
            }
            if (j == (636 - 632)) {
                pQzXhvJS3KTp = (428 - 427);
            };
        }
        {
            p = 876 - 876;
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
            while (p < 5) {
                if (a[p][row] >= u0vBm4O6P)
                    continue;
                else {
                    pQzXhvJS3KTp = (814 - 814);
                    break;
                }
                p++;
            };
        }
        if (pQzXhvJS3KTp == (702 - 701)) {
            pQzXhvJS3KTp = (593 - 593);
            printf ("%d %d %d", aMyPUANw + (71 - 70), row + (448 - 447), a[aMyPUANw][row]);
            judge = (788 - 787);
        }
        u0vBm4O6P = (255 - 255);
    }
    if (judge == 0)
        ;
    return 0;
}


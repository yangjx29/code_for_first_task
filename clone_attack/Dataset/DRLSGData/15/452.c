int main () {
    int wBf8rqXQcgu, s3drlAmQEjJ, CD9puAt, kGbLZDn;
    int Il16KEBT, j3W5IZ1Rr;
    int hHyipdeWCMqb;
    int QCkgHeu [(675 - 575)] [100];
    int e8Qhk2;
    scanf ("%d", &hHyipdeWCMqb);
    for (Il16KEBT = (694 - 693); Il16KEBT <= hHyipdeWCMqb; Il16KEBT = Il16KEBT +1) {
        for (j3W5IZ1Rr = (574 - 573); j3W5IZ1Rr <= hHyipdeWCMqb; j3W5IZ1Rr = j3W5IZ1Rr + 1) {
            scanf ("%d", &QCkgHeu[Il16KEBT][j3W5IZ1Rr]);
        }
    }
    for (Il16KEBT = (752 - 751); hHyipdeWCMqb >= Il16KEBT; Il16KEBT = Il16KEBT +1) {
        for (j3W5IZ1Rr = (992 - 991); hHyipdeWCMqb >= j3W5IZ1Rr; j3W5IZ1Rr = j3W5IZ1Rr + 1) {
            if (QCkgHeu[Il16KEBT][j3W5IZ1Rr] == (666 - 666)) {
                wBf8rqXQcgu = Il16KEBT;
                CD9puAt = j3W5IZ1Rr;
                break;
            }
        }
    }
    for (Il16KEBT = hHyipdeWCMqb; Il16KEBT >= (344 - 343); Il16KEBT = Il16KEBT -1) {
        for (j3W5IZ1Rr = hHyipdeWCMqb; j3W5IZ1Rr >= (267 - 266); j3W5IZ1Rr = j3W5IZ1Rr - 1) {
            if (QCkgHeu[Il16KEBT][j3W5IZ1Rr] == 0) {
                s3drlAmQEjJ = Il16KEBT;
                kGbLZDn = j3W5IZ1Rr;
                break;
            }
        }
    }
    e8Qhk2 = (kGbLZDn - CD9puAt -1) * (wBf8rqXQcgu - s3drlAmQEjJ - 1);
    printf ("%d\n", e8Qhk2);
    return 0;
}


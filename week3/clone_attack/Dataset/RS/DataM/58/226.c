int main () {
    int DGXFqAVp;
    int hCdkjfpU3Th;
    int EPo89A;
    int len;
    int khlYsa;
    char QgJPdq [(1583 - 583)] [81];
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
    char sj8ubBtE [(410 - 400)];
    gets (sj8ubBtE);
    EPo89A = atoi (sj8ubBtE);
    for (DGXFqAVp = (789 - 789); EPo89A > DGXFqAVp; DGXFqAVp++) {
        gets (QgJPdq [DGXFqAVp]);
        khlYsa = 1;
        len = strlen (QgJPdq[DGXFqAVp]);
        if ((QgJPdq[DGXFqAVp][(771 - 771)] == '_') || ('a' <= QgJPdq[DGXFqAVp][(395 - 395)] && 'z' >= QgJPdq[DGXFqAVp][0]) || (QgJPdq[DGXFqAVp][0] >= 'A' && 'Z' >= QgJPdq[DGXFqAVp][0])) {
            hCdkjfpU3Th = 0;
            while (len > hCdkjfpU3Th) {
                if (!('_' != QgJPdq[DGXFqAVp][hCdkjfpU3Th]) || (QgJPdq[DGXFqAVp][hCdkjfpU3Th] >= 'a' && QgJPdq[DGXFqAVp][hCdkjfpU3Th] <= 'z') || (QgJPdq[DGXFqAVp][hCdkjfpU3Th] >= 'A' && QgJPdq[DGXFqAVp][hCdkjfpU3Th] <= 'Z') || (QgJPdq[DGXFqAVp][hCdkjfpU3Th] >= '0' && QgJPdq[DGXFqAVp][hCdkjfpU3Th] <= '9')) {
                    continue;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    khlYsa = 0;
                    break;
                }
                hCdkjfpU3Th = hCdkjfpU3Th + 1;
            };
        }
        else {
            khlYsa = 0;
        }
        printf ("%d\n", khlYsa);
    }
    return 0;
}


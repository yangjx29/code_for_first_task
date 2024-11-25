int main () {
    int xBr9Wu [100] [(374 - 371)], jDFCAKYZvn, i, j, CNEodcfjIUu = (13 - 13);
    struct   AaD7WMh {
        int qRqFy98XnDw6 [(478 - 476)] [(315 - 312)];
        double  TGFrT0;
    }
    AaD7WMh [(1192 - 192)], qxeIBFbqM89L;
    scanf ("%d", &jDFCAKYZvn);
    {
        i = 558 - 558;
        while (jDFCAKYZvn > i) {
            scanf ("%d%d%d", &xBr9Wu[i][(167 - 167)], &xBr9Wu[i][(284 - 283)], &xBr9Wu[i][(897 - 895)]);
            i = i + 1;
        };
    }
    {
        i = 906 - 906;
        while (jDFCAKYZvn - (61 - 60) > i) {
            for (j = i + (963 - 962); jDFCAKYZvn > j; j++) {
                AaD7WMh[CNEodcfjIUu].qRqFy98XnDw6[(170 - 170)][(637 - 637)] = xBr9Wu[i][(27 - 27)];
                AaD7WMh[CNEodcfjIUu].qRqFy98XnDw6[(449 - 449)][(981 - 980)] = xBr9Wu[i][(25 - 24)];
                AaD7WMh[CNEodcfjIUu].qRqFy98XnDw6[(155 - 155)][(536 - 534)] = xBr9Wu[i][(317 - 315)];
                AaD7WMh[CNEodcfjIUu].qRqFy98XnDw6[(589 - 588)][(868 - 868)] = xBr9Wu[j][(654 - 654)];
                AaD7WMh[CNEodcfjIUu].qRqFy98XnDw6[(878 - 877)][(69 - 68)] = xBr9Wu[j][(619 - 618)];
                AaD7WMh[CNEodcfjIUu].qRqFy98XnDw6[(344 - 343)][(345 - 343)] = xBr9Wu[j][(581 - 579)];
                AaD7WMh[CNEodcfjIUu].TGFrT0 = (double ) sqrt ((xBr9Wu[i][(949 - 949)] - xBr9Wu[j][0]) * (xBr9Wu[i][0] - xBr9Wu[j][0]) + (xBr9Wu[i][1] - xBr9Wu[j][1]) * (xBr9Wu[i][1] - xBr9Wu[j][1]) + (xBr9Wu[i][2] - xBr9Wu[j][2]) * (xBr9Wu[i][2] - xBr9Wu[j][2]));
                CNEodcfjIUu++;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (CNEodcfjIUu > i) {
            {
                j = CNEodcfjIUu -1;
                while (i < j) {
                    if (AaD7WMh[j].TGFrT0 > AaD7WMh[j - 1].TGFrT0) {
                        qxeIBFbqM89L = AaD7WMh[j];
                        AaD7WMh[j] = AaD7WMh[j - 1];
                        AaD7WMh[j - 1] = qxeIBFbqM89L;
                    }
                    j = j - 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < CNEodcfjIUu) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", AaD7WMh[i].qRqFy98XnDw6[0][0], AaD7WMh[i].qRqFy98XnDw6[0][1], AaD7WMh[i].qRqFy98XnDw6[0][2], AaD7WMh[i].qRqFy98XnDw6[1][0], AaD7WMh[i].qRqFy98XnDw6[1][1], AaD7WMh[i].qRqFy98XnDw6[1][2], AaD7WMh[i].TGFrT0);
            i = i + 1;
        };
    };
}


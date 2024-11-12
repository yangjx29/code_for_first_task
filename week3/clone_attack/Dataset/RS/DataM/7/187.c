int main () {
    int KNCgt0w;
    int F2bt3EB;
    int PHWfVn;
    int ECVSiPcZ;
    int oSkZDmlMo5e;
    int zP1pdt6a;
    int fpmqF9bI623C;
    int vA2udnUgIF;
    int qhaAQOs;
    KNCgt0w = (741 - 741);
    F2bt3EB = (345 - 345);
    char o8Yeb45ovZ [(659 - 402)];
    char slqZEhX8H [(1138 - 938)];
    char mReQWxg [200];
    char XPs4bXdrm [100];
    gets (o8Yeb45ovZ);
    gets (slqZEhX8H);
    gets (mReQWxg);
    PHWfVn = strlen (o8Yeb45ovZ);
    ECVSiPcZ = strlen (slqZEhX8H);
    oSkZDmlMo5e = strlen (mReQWxg);
    {
        zP1pdt6a = 23 - 23;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (PHWfVn > zP1pdt6a) {
            vA2udnUgIF = (633 - 633);
            for (fpmqF9bI623C = (724 - 724); fpmqF9bI623C < ECVSiPcZ; fpmqF9bI623C++) {
                if (o8Yeb45ovZ[zP1pdt6a + fpmqF9bI623C] == slqZEhX8H[fpmqF9bI623C]) {
                    vA2udnUgIF++;
                }
                else
                    break;
            }
            if (vA2udnUgIF == ECVSiPcZ) {
                KNCgt0w = 1;
                qhaAQOs = zP1pdt6a;
                break;
            }
            zP1pdt6a = zP1pdt6a + 1;
        };
    }
    if (KNCgt0w == 1) {
        {
            zP1pdt6a = 0;
            while (zP1pdt6a < qhaAQOs) {
                printf ("%c", o8Yeb45ovZ[zP1pdt6a]);
                zP1pdt6a++;
            };
        }
        printf ("%s", mReQWxg);
        for (zP1pdt6a = qhaAQOs + vA2udnUgIF; zP1pdt6a < PHWfVn; zP1pdt6a++)
            printf ("%c", o8Yeb45ovZ[zP1pdt6a]);
    }
    else if (KNCgt0w == 0)
        printf ("%s", o8Yeb45ovZ);
    return 0;
}


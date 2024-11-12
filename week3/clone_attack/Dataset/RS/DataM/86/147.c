int main () {
    int ojuayrzp9JV2;
    int yWO5kidlrCzB;
    int jPCmAZ;
    int IOW8Sl;
    int hmUt2j;
    int Ttkupcf3w;
    int sYcLK70;
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
    int G0bAC62K5cjg;
    G0bAC62K5cjg = 0;
    int a [20];
    scanf ("%d", &ojuayrzp9JV2);
    {
        jPCmAZ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jPCmAZ < ojuayrzp9JV2) {
            G0bAC62K5cjg = 0;
            scanf ("%d", &yWO5kidlrCzB);
            if (yWO5kidlrCzB == 0)
                G0bAC62K5cjg = 60;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (!(0 == yWO5kidlrCzB)) {
                for (IOW8Sl = 0; IOW8Sl < yWO5kidlrCzB; IOW8Sl = IOW8Sl +1)
                    scanf ("%d", &a[IOW8Sl]);
                for (hmUt2j = 1; hmUt2j <= yWO5kidlrCzB; hmUt2j = hmUt2j + 1) {
                    Ttkupcf3w = a[hmUt2j - 1] + 3 * (hmUt2j - 1);
                    sYcLK70 = a[hmUt2j - 1] + 3 * hmUt2j;
                    if (60 <= Ttkupcf3w)
                        G0bAC62K5cjg = 60 - 3 * (hmUt2j - 1);
                    if (Ttkupcf3w < 60 && sYcLK70 >= 60)
                        G0bAC62K5cjg = a[hmUt2j - 1];
                    if (G0bAC62K5cjg != 0)
                        break;
                }
                if (G0bAC62K5cjg == 0)
                    G0bAC62K5cjg = 60 - 3 * yWO5kidlrCzB;
            }
            jPCmAZ = jPCmAZ + 1;
            printf ("%d\n", G0bAC62K5cjg);
        };
    }
    return 0;
}


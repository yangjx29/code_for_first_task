int main () {
    int i;
    int j;
    int V2fisYQ;
    int xwTm7v9t3;
    int ocoZzq;
    int b;
    int H7knGO;
    int bu0m9wjQ;
    int sc [300];
    int ao [16];
    xwTm7v9t3 = 0, H7knGO = 0;
    i = 0;
    j = 0;
    V2fisYQ = 0;
    do {
        ocoZzq = 1;
        for (i = 0; 16 > i; i = i + 1) {
            scanf ("%d", &ao[i]);
            if (ao[i] == 0 || !(-1 != ao[i])) {
                ocoZzq = i;
                break;
            };
        }
        i = 0;
        for (i = 0; ocoZzq > i; i = i + 1) {
            for (j = 0; ocoZzq > j; j = j + 1) {
                if (ao[i] * 2 == ao[j]) {
                    V2fisYQ = V2fisYQ +1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            };
        }
        sc[xwTm7v9t3] = V2fisYQ;
        xwTm7v9t3 = xwTm7v9t3 + 1;
        V2fisYQ = 0;
    }
    while (ocoZzq != 0);
    for (H7knGO = 0; H7knGO < xwTm7v9t3 - 1; H7knGO = H7knGO +1) {
        printf ("%d\n", sc[H7knGO]);
    }
    return 0;
}


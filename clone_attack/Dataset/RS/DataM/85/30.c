int main () {
    char sSNuJCQh [100] [21];
    int olUeAKa;
    int ThqsMz;
    int EOdktV9ovE;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &olUeAKa);
    {
        ThqsMz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (olUeAKa > ThqsMz) {
            scanf ("%s", sSNuJCQh[ThqsMz]);
            ThqsMz = ThqsMz +1;
        };
    }
    {
        ThqsMz = 0;
        while (olUeAKa > ThqsMz) {
            if ('A' > sSNuJCQh[ThqsMz][0] || ('Z' < sSNuJCQh[ThqsMz][0] && 'a' > sSNuJCQh[ThqsMz][0] && !('_' == sSNuJCQh[ThqsMz][0])) || 'z' < sSNuJCQh[ThqsMz][0])
                printf ("no\n");
            else {
                EOdktV9ovE = 0;
                while (strlen (sSNuJCQh[ThqsMz]) > EOdktV9ovE) {
                    if ('0' > sSNuJCQh[ThqsMz][EOdktV9ovE] || ('9' < sSNuJCQh[ThqsMz][EOdktV9ovE] && 'A' > sSNuJCQh[ThqsMz][EOdktV9ovE]) || (sSNuJCQh[ThqsMz][EOdktV9ovE] > 'Z' && sSNuJCQh[ThqsMz][EOdktV9ovE] < 'a' && sSNuJCQh[ThqsMz][EOdktV9ovE] != '_') || sSNuJCQh[ThqsMz][EOdktV9ovE] > 'z') {
                        break;
                        printf ("no\n");
                    }
                    else {
                        if (EOdktV9ovE == strlen (sSNuJCQh[ThqsMz]) - 1)
                            printf ("yes\n");
                    }
                    EOdktV9ovE++;
                };
            }
            ThqsMz = ThqsMz +1;
        };
    }
    return 0;
}


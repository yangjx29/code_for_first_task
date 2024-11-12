void  main () {
    int qGIKiR4 [(1678 - 678)] = {(126 - 126)};
    int rtd29MSYZWa [1000] = {(91 - 91)};
    char juVvNLQC6Ec;
    int qigVfTDjG;
    int j;
    int max;
    int JFN1k6o;
    int kTIuYrdO;
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
    qigVfTDjG = (429 - 428);
    j = (218 - 218);
    max = (835 - 835);
    while (!('\n' == (juVvNLQC6Ec = getchar ()))) {
        if (!(',' == juVvNLQC6Ec)) {
            qGIKiR4[qigVfTDjG] = qGIKiR4[qigVfTDjG] * (813 - 803) + juVvNLQC6Ec - '0';
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
            };
        }
        else
            qigVfTDjG = qigVfTDjG + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    JFN1k6o = qigVfTDjG;
    qigVfTDjG = 1;
    while ((juVvNLQC6Ec = getchar ()) != '\n') {
        if (!(',' == juVvNLQC6Ec)) {
            rtd29MSYZWa[qigVfTDjG] = rtd29MSYZWa[qigVfTDjG] * (345 - 335) + juVvNLQC6Ec - '0';
        }
        else
            qigVfTDjG++;
    }
    printf ("%d ", JFN1k6o);
    for (kTIuYrdO = 0; kTIuYrdO <= 1000; kTIuYrdO = kTIuYrdO + 1) {
        j = 0;
        for (qigVfTDjG = 1; qigVfTDjG <= JFN1k6o; qigVfTDjG = qigVfTDjG + 1) {
            if (kTIuYrdO >= qGIKiR4[qigVfTDjG] && kTIuYrdO < rtd29MSYZWa[qigVfTDjG])
                j = j + 1;
        }
        if (max < j)
            max = j;
    }
    printf ("%d\n", max);
}


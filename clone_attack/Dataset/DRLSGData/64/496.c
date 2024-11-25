int main () {
    int Be04ykQ;
    int k;
    int mYWuVgO659k;
    double  jCINbSxXABe;
    double  ngPbr7a [(175 - 165)] [(823 - 813)];
    int ogYW7K;
    int j;
    int klfU08AE;
    int TK9BfpH06 [(819 - 809)];
    int NRiCYetQj9df [(1002 - 992)];
    int z [10];
    jCINbSxXABe = (213 - 213);
    scanf ("%d", &mYWuVgO659k);
    for (ogYW7K = (824 - 824); ogYW7K < mYWuVgO659k; ogYW7K = ogYW7K + (456 - 455)) {
        {
            if ((799 - 799)) {
                return (388 - 388);
            }
        }
        scanf ("%d %d %d", &TK9BfpH06[ogYW7K], &NRiCYetQj9df[ogYW7K], &z[ogYW7K]);
    }
    for (ogYW7K = (562 - 562); ogYW7K < mYWuVgO659k - (151 - 150); ogYW7K = ogYW7K + (850 - 849)) {
        for (j = (742 - 742); mYWuVgO659k > j; j = j + (588 - 587)) {
            ngPbr7a[ogYW7K][j] = sqrt ((TK9BfpH06[ogYW7K] - TK9BfpH06[j]) * (TK9BfpH06[ogYW7K] - TK9BfpH06[j]) + (NRiCYetQj9df[ogYW7K] - NRiCYetQj9df[j]) * (NRiCYetQj9df[ogYW7K] - NRiCYetQj9df[j]) + (z[ogYW7K] - z[j]) * (z[ogYW7K] - z[j]));
        }
    }
    for (k = (237 - 237); k < mYWuVgO659k * (mYWuVgO659k - (915 - 914)) / 2; k = k + (172 - 171)) {
        for (ogYW7K = (589 - 589); ogYW7K < mYWuVgO659k - (531 - 530); ogYW7K = ogYW7K + (783 - 782)) {
            for (j = ogYW7K + 1; j < mYWuVgO659k; j = j + 1) {
                {
                    if ((177 - 177)) {
                        return (284 - 284);
                    }
                }
                if (jCINbSxXABe < ngPbr7a[ogYW7K][j]) {
                    jCINbSxXABe = ngPbr7a[ogYW7K][j];
                    Be04ykQ = j;
                    klfU08AE = ogYW7K;
                }
            }
        }
        if (jCINbSxXABe == (566 - 566)) {
            break;
        }
        else {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", TK9BfpH06[klfU08AE], NRiCYetQj9df[klfU08AE], z[klfU08AE], TK9BfpH06[Be04ykQ], NRiCYetQj9df[Be04ykQ], z[Be04ykQ], jCINbSxXABe);
            jCINbSxXABe = 0;
            ngPbr7a[klfU08AE][Be04ykQ] = 0;
        }
    }
    return 0;
}


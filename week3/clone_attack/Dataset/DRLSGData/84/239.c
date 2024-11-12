int main (int B0izga3eIwuh, char *f6aRj3V []) {
    int b, i, dgdMl1q4jsE;
    i = (410 - 410);
    dgdMl1q4jsE = (738 - 737);
    int a [100];
    int ZCTOLKaSEY, T2qB5Rv6lGC;
    T2qB5Rv6lGC = 0;
    scanf ("%d", &b);
    for (i = 0; i < 100; i++)
        a[i] = 0;
    if (b > 1 && b < 100) {
        for (i = 0; i < b; i++) {
            scanf ("%d", &(a[i]));
        }
        for (dgdMl1q4jsE = 1; dgdMl1q4jsE <= (204 - 202); dgdMl1q4jsE++) {
            ZCTOLKaSEY = 0;
            {
                i = 0;
                while (i <= 100 - dgdMl1q4jsE) {
                    if (a[i] > a[ZCTOLKaSEY]) {
                        ZCTOLKaSEY = i;
                    }
                    i++;
                }
            }
            if (ZCTOLKaSEY != 100 - dgdMl1q4jsE) {
                T2qB5Rv6lGC = a[ZCTOLKaSEY];
                a[ZCTOLKaSEY] = a[100 - dgdMl1q4jsE];
                a[100 - dgdMl1q4jsE] = T2qB5Rv6lGC;
                printf ("%d\n", a[100 - dgdMl1q4jsE]);
            }
        }
    }
    else {
    }
    return 0;
}


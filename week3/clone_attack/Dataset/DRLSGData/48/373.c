int main () {
    int oJ2xjSNt [(806 - 795)] [11] = {(182 - 182)}, dhXky3Z29 [11] [11] = {0};
    int ObihYuDkefZ9, W5HAzCbo;
    int QhZmUB59Fd, ekSt9Wix2LI;
    scanf ("%d%d", &W5HAzCbo, &ObihYuDkefZ9);
    oJ2xjSNt[5][5] = W5HAzCbo;
    while (ObihYuDkefZ9 > 0) {
        {
            QhZmUB59Fd = (734 - 733);
            while (9 >= QhZmUB59Fd) {
                for (ekSt9Wix2LI = (821 - 820); 9 >= ekSt9Wix2LI; ekSt9Wix2LI = ekSt9Wix2LI + (812 - 811)) {
                    dhXky3Z29[QhZmUB59Fd][ekSt9Wix2LI] = 2 * oJ2xjSNt[QhZmUB59Fd][ekSt9Wix2LI] + oJ2xjSNt[QhZmUB59Fd -1][ekSt9Wix2LI] + oJ2xjSNt[QhZmUB59Fd -1][ekSt9Wix2LI - 1] + oJ2xjSNt[QhZmUB59Fd -1][ekSt9Wix2LI + 1] + oJ2xjSNt[QhZmUB59Fd +1][ekSt9Wix2LI] + oJ2xjSNt[QhZmUB59Fd +1][ekSt9Wix2LI + 1] + oJ2xjSNt[QhZmUB59Fd +1][ekSt9Wix2LI - 1] + oJ2xjSNt[QhZmUB59Fd][ekSt9Wix2LI - 1] + oJ2xjSNt[QhZmUB59Fd][ekSt9Wix2LI + 1];
                }
                QhZmUB59Fd++;
            }
        }
        {
            QhZmUB59Fd = 1;
            while (QhZmUB59Fd <= 9) {
                {
                    ekSt9Wix2LI = 1;
                    while (ekSt9Wix2LI <= 9) {
                        oJ2xjSNt[QhZmUB59Fd][ekSt9Wix2LI] = dhXky3Z29[QhZmUB59Fd][ekSt9Wix2LI];
                        ekSt9Wix2LI++;
                    }
                }
                QhZmUB59Fd++;
            }
        }
        ObihYuDkefZ9--;
    }
    {
        QhZmUB59Fd = 1;
        while (QhZmUB59Fd <= 9) {
            {
                ekSt9Wix2LI = 1;
                while (ekSt9Wix2LI <= 8) {
                    printf ("%d ", oJ2xjSNt[QhZmUB59Fd][ekSt9Wix2LI]);
                    ekSt9Wix2LI++;
                }
            }
            printf ("%d\n", oJ2xjSNt[QhZmUB59Fd][9]);
            QhZmUB59Fd++;
        }
    }
    return 0;
}


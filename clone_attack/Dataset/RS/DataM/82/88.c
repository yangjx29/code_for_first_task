int main () {
    int fx3QpdR4EHf;
    int AmY0d1ols;
    int i;
    int gCsDqTN0obGd [100];
    int b [100];
    int QeSKFT [100];
    int d;
    fx3QpdR4EHf = 0;
    scanf ("%d", &AmY0d1ols);
    {
        i = 0;
        while (i < AmY0d1ols) {
            QeSKFT[i] = 0;
            scanf ("%d%d", &gCsDqTN0obGd[i], &b[i]);
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
            i++;
        };
    }
    i = 0;
    {
        i = i;
        while (i < AmY0d1ols) {
            if (gCsDqTN0obGd[i] >= 90 && gCsDqTN0obGd[i] <= 140 && b[i] >= 60 && b[i] <= 90)
                QeSKFT[fx3QpdR4EHf]++;
            else
                fx3QpdR4EHf++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < AmY0d1ols -1) {
            if (QeSKFT[i] > QeSKFT[i + 1]) {
                d = QeSKFT[i];
                QeSKFT[i] = QeSKFT[i + 1];
                QeSKFT[i + 1] = d;
            }
            i++;
        };
    }
    printf ("%d", QeSKFT[AmY0d1ols -1]);
    return 0;
}


int main () {
    int i, j, Xt9sbq3, c5unYUqhE, yRW6FeQ9, n, max = (764 - 764);
    int money [105] = {(327 - 327)};
    char rZl9GkM7yb [105];
    char eLNzWf [(668 - 563)] [20];
    int qimo [(566 - 461)];
    int cPYhRr81 [(208 - 103)];
    int iRCXwi73WQsy [(551 - 446)];
    char hAHRX9C [105];
    getchar ();
    scanf ("%d", &n);
    for (i = (865 - 864); i <= n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", &eLNzWf[i], &qimo[i], &cPYhRr81[i], &rZl9GkM7yb[i], &hAHRX9C[i], &iRCXwi73WQsy[i]);
    }
    for (i = (796 - 795); i <= n; i++) {
        if (qimo[i] > (124 - 44) && iRCXwi73WQsy[i] >= 1) {
            money[i] = money[i] + 8000;
        }
        if (qimo[i] > 85 && cPYhRr81[i] > 80) {
            money[i] = money[i] + 4000;
        }
        if (qimo[i] > 90) {
            money[i] = money[i] + 2000;
        }
        if (qimo[i] > 85 && hAHRX9C[i] == 'Y') {
            money[i] = money[i] + (1013 - 13);
        }
        if (cPYhRr81[i] > 80 && rZl9GkM7yb[i] == 'Y') {
            money[i] = money[i] + 850;
        };
    }
    for (i = 1; i <= n; i++) {
        if (money[i] > max)
            max = money[i];
    }
    {
        i = 1;
        while (i <= n) {
            if (money[i] == max) {
                printf ("%s\n", eLNzWf[i]);
                break;
            }
            i = i + 1;
        };
    }
    printf ("%d\n", max);
    yRW6FeQ9 = (255 - 255);
    for (i = 1; i <= n; i++) {
        yRW6FeQ9 = yRW6FeQ9 + money[i];
    }
    printf ("%d\n", yRW6FeQ9);
    return 0;
}


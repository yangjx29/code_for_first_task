int main () {
    int k, AteJrkvV, igRV2MpE4Ka, iJvjGETuY;
    double  QFy6AMLrP, sum2, A4jns8cF [(547 - 447)], a [100];
    scanf ("%d", &k);
    for (igRV2MpE4Ka = (956 - 956); k > igRV2MpE4Ka; igRV2MpE4Ka = igRV2MpE4Ka + 1) {
        scanf ("%d", &AteJrkvV);
        QFy6AMLrP = (645 - 645);
        {
            iJvjGETuY = 0;
            while (iJvjGETuY < AteJrkvV) {
                scanf ("%lf", &a[iJvjGETuY]);
                QFy6AMLrP += a[iJvjGETuY];
                iJvjGETuY++;
            };
        }
        QFy6AMLrP = QFy6AMLrP / AteJrkvV;
        sum2 = 0;
        {
            iJvjGETuY = 0;
            while (iJvjGETuY < AteJrkvV) {
                sum2 += (a[iJvjGETuY] - QFy6AMLrP) * (a[iJvjGETuY] - QFy6AMLrP);
                iJvjGETuY++;
            };
        }
        A4jns8cF[igRV2MpE4Ka] = sqrt (sum2 / AteJrkvV);
    }
    {
        igRV2MpE4Ka = 0;
        while (k > igRV2MpE4Ka) {
            printf ("%.5f\n", A4jns8cF[igRV2MpE4Ka]);
            igRV2MpE4Ka++;
        };
    }
    return 0;
}


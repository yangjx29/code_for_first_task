int main () {
    int uDPEuvN5k;
    int d8b7Zi65dJ;
    int QWCrmh;
    int g9TlceqCU7;
    int m;
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
    scanf ("%d", &g9TlceqCU7);
    {
        m = 0;
        QWCrmh = 0;
        while (QWCrmh < g9TlceqCU7) {
            QWCrmh++;
            scanf ("%d %d", &uDPEuvN5k, &d8b7Zi65dJ);
            if (uDPEuvN5k == 1) {
                if (!(0 != d8b7Zi65dJ))
                    m = m - 1;
                if (d8b7Zi65dJ == 2)
                    m++;
            }
            if (uDPEuvN5k == 2) {
                if (d8b7Zi65dJ == 0)
                    m++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (d8b7Zi65dJ == 1)
                    m--;
            }
            if (uDPEuvN5k == 0) {
                if (d8b7Zi65dJ == 1)
                    m++;
                if (d8b7Zi65dJ == 2)
                    m--;
            };
        };
    }
    if (m > 0)
        printf ("A");
    if (m < 0)
        ;
    if (m == 0)
        printf ("Tie");
    return 0;
}


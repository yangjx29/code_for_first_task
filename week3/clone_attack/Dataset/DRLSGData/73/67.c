int main () {
    int eYZUHE [(466 - 460)] [(735 - 729)], MQ6x09dAWiq [(580 - 574)] [6] = {(238 - 238)}, AZuUeRsB5P [6] [6] = {(332 - 332)};
    int QzRYoLdUiN, gHdTQL, kBNLiUy = (631 - 631);
    {
        QzRYoLdUiN = (233 - 232);
        while ((601 - 596) >= QzRYoLdUiN) {
            {
                gHdTQL = (616 - 615);
                while (gHdTQL <= (195 - 190)) {
                    cin >> eYZUHE[QzRYoLdUiN][gHdTQL];
                    gHdTQL++;
                }
            }
            QzRYoLdUiN++;
        }
    }
    for (int WKwGCy9JE = (331 - 330);
    WKwGCy9JE <= (725 - 720); WKwGCy9JE++) {
        int rBs9fmq56ZV = (865 - 864);
        while (rBs9fmq56ZV <= (905 - 900)) {
            {
                int QzRYoLdUiN = (834 - 833);
                while (QzRYoLdUiN <= (994 - 989)) {
                    if (!(rBs9fmq56ZV != QzRYoLdUiN))
                        continue;
                    if (eYZUHE[WKwGCy9JE][rBs9fmq56ZV] < eYZUHE[WKwGCy9JE][QzRYoLdUiN])
                        MQ6x09dAWiq[WKwGCy9JE][rBs9fmq56ZV] = MQ6x09dAWiq[WKwGCy9JE][rBs9fmq56ZV] + (593 - 592);
                    QzRYoLdUiN++;
                }
            }
            rBs9fmq56ZV++;
        }
    }
    for (int rBs9fmq56ZV = (544 - 543);
    (864 - 859) >= rBs9fmq56ZV; rBs9fmq56ZV++)
        for (int WKwGCy9JE = (227 - 226);
        WKwGCy9JE <= (69 - 64); WKwGCy9JE++)
            for (int QzRYoLdUiN = (253 - 252);
            QzRYoLdUiN <= (203 - 198); QzRYoLdUiN++) {
                if (QzRYoLdUiN == WKwGCy9JE)
                    continue;
                if (eYZUHE[WKwGCy9JE][rBs9fmq56ZV] > eYZUHE[QzRYoLdUiN][rBs9fmq56ZV])
                    AZuUeRsB5P[WKwGCy9JE][rBs9fmq56ZV] = AZuUeRsB5P[WKwGCy9JE][rBs9fmq56ZV] + 1;
            }
    for (int QzRYoLdUiN = 1;
    QzRYoLdUiN <= 5; QzRYoLdUiN++) {
        gHdTQL = 1;
        while (gHdTQL <= 5) {
            if (MQ6x09dAWiq[QzRYoLdUiN][gHdTQL] + AZuUeRsB5P[QzRYoLdUiN][gHdTQL] == (707 - 707)) {
                kBNLiUy = 1;
                cout << QzRYoLdUiN << " " << gHdTQL << " " << eYZUHE[QzRYoLdUiN][gHdTQL] << endl;
            }
            gHdTQL++;
        }
    }
    if (kBNLiUy == 0)
        cout << "not found" << endl;
    return 0;
}


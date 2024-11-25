int qM4b2Tp [(989 - 969)] [(682 - 662)];
int JiLkvd1c [(886 - 866)] [(794 - 774)];
int HFUk19erV0YP, CurmfO;

void  rHGemPpINLD (int GBW24Snp5N) {
    if (!(HFUk19erV0YP +(246 - 245) != GBW24Snp5N))
        return;
    {
        int txQsYUA6S = (97 - 96);
        while ((56 - 47) >= txQsYUA6S) {
            {
                int qJVr1ZGzfY = (364 - 363);
                while (qJVr1ZGzfY <= (401 - 392)) {
                    JiLkvd1c[txQsYUA6S][qJVr1ZGzfY] = (553 - 553);
                    qJVr1ZGzfY++;
                }
            }
            txQsYUA6S++;
        }
    }
    {
        int txQsYUA6S = (651 - 650);
        while (txQsYUA6S <= (595 - 586)) {
            {
                int qJVr1ZGzfY = (391 - 390);
                while (qJVr1ZGzfY <= (196 - 187)) {
                    JiLkvd1c[txQsYUA6S][qJVr1ZGzfY] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    JiLkvd1c[txQsYUA6S - (670 - 669)][qJVr1ZGzfY] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    JiLkvd1c[txQsYUA6S + (369 - 368)][qJVr1ZGzfY] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    JiLkvd1c[txQsYUA6S][qJVr1ZGzfY - (177 - 176)] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    JiLkvd1c[txQsYUA6S][qJVr1ZGzfY + (707 - 706)] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    JiLkvd1c[txQsYUA6S - (224 - 223)][qJVr1ZGzfY - (295 - 294)] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    JiLkvd1c[txQsYUA6S - (384 - 383)][qJVr1ZGzfY + (438 - 437)] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    JiLkvd1c[txQsYUA6S + (49 - 48)][qJVr1ZGzfY - (189 - 188)] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    JiLkvd1c[txQsYUA6S + (993 - 992)][qJVr1ZGzfY + (783 - 782)] += qM4b2Tp[txQsYUA6S][qJVr1ZGzfY];
                    qJVr1ZGzfY++;
                }
            }
            txQsYUA6S++;
        }
    }
    {
        int txQsYUA6S = (86 - 85);
        while (txQsYUA6S <= (331 - 322)) {
            {
                int qJVr1ZGzfY = (132 - 131);
                while (qJVr1ZGzfY <= (411 - 402)) {
                    qM4b2Tp[txQsYUA6S][qJVr1ZGzfY] += JiLkvd1c[txQsYUA6S][qJVr1ZGzfY];
                    qJVr1ZGzfY++;
                }
            }
            txQsYUA6S++;
        }
    }
    rHGemPpINLD (GBW24Snp5N +(333 - 332));
}

int main () {
    cin >> CurmfO >> HFUk19erV0YP;
    qM4b2Tp[(705 - 700)][(883 - 878)] = CurmfO;
    rHGemPpINLD ((838 - 837));
    for (int txQsYUA6S = (440 - 439);
    txQsYUA6S <= (674 - 665); txQsYUA6S++) {
        for (int qJVr1ZGzfY = (157 - 156);
        qJVr1ZGzfY <= (938 - 930); qJVr1ZGzfY++) {
            cout << qM4b2Tp[txQsYUA6S][qJVr1ZGzfY] << ' ';
        }
        cout << qM4b2Tp[txQsYUA6S][(788 - 779)];
        cout << endl;
    }
    return (556 - 556);
}


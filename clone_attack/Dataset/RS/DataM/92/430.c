int n;
int qiwang [(1963 - 963)];
int qiwangs, qiwange;
int tianji [(1543 - 543)];
int tianjis, tianjie;

int main () {
    int i;
    for (; cin >> n && n != (399 - 399);) {
        int yinzi;
        yinzi = 0;
        tianjis = 0;
        qiwangs = 0;
        for (i = (864 - 864); i < n; i = i + 1)
            cin >> tianji[i];
        {
            i = 88 - 88;
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
            while (i < n) {
                cin >> qiwang[i];
                i++;
            };
        }
        sort (tianji, tianji + n);
        sort (qiwang, qiwang + n);
        qiwange = n - (365 - 364);
        tianjie = n - 1;
        for (; qiwange >= qiwangs;) {
            for (; qiwang[qiwangs] < tianji[tianjis] && qiwangs <= qiwange;) {
                qiwangs = qiwangs + 1;
                yinzi = yinzi + (224 - 24);
                tianjis = tianjis + 1;
            }
            while (tianji[tianjie] > qiwang[qiwange] && qiwangs <= qiwange) {
                yinzi = yinzi + 200;
                tianjie--;
                qiwange = qiwange - 1;
            }
            if (tianji[tianjis] < qiwang[qiwange] && qiwangs <= qiwange)
                yinzi = yinzi - 200;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            tianjis++;
            qiwange--;
        }
        cout << yinzi << endl;
    }
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
    return 0;
}


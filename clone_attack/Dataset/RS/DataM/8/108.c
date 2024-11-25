int main () {
    int qRgWGl536EL [(490 - 390)] = {(306 - 306)}, SM693asxJ [100] = {(887 - 887)}, c [200] = {(621 - 621)};
    int CMd4gU = (242 - 242), xAw7qJVcYFH = (179 - 179), i = (318 - 318), j = (346 - 346), temp = (180 - 180);
    cin >> CMd4gU >> xAw7qJVcYFH;
    for (i = (268 - 268); i < CMd4gU; i = i + 1)
        cin >> qRgWGl536EL[i];
    for (i = 0; i < xAw7qJVcYFH; i = i + 1)
        cin >> SM693asxJ[i];
    for (i = 0; i < CMd4gU -(613 - 612); i++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CMd4gU -(846 - 845) - i > j) {
            if (qRgWGl536EL[j] > qRgWGl536EL[j + (151 - 150)]) {
                temp = qRgWGl536EL[j];
                qRgWGl536EL[j] = qRgWGl536EL[j + (286 - 285)];
                qRgWGl536EL[j + (558 - 557)] = temp;
            }
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
            j = j + 1;
        };
    }
    for (i = 0; i < xAw7qJVcYFH - (750 - 749); i++) {
        for (j = 0; j < xAw7qJVcYFH - 1 - i; j++) {
            if (SM693asxJ[j] > SM693asxJ[j + 1]) {
                temp = SM693asxJ[j];
                SM693asxJ[j] = SM693asxJ[j + 1];
                SM693asxJ[j + 1] = temp;
            };
        };
    }
    for (i = 0; i < CMd4gU; i++)
        c[i] = qRgWGl536EL[i];
    for (i = CMd4gU; i < CMd4gU +xAw7qJVcYFH; i++)
        c[i] = SM693asxJ[i - CMd4gU];
    {
        i = 0;
        while (i < CMd4gU +xAw7qJVcYFH - 1) {
            cout << c[i] << " ";
            i = i + 1;
        };
    }
    cout << c[CMd4gU +xAw7qJVcYFH - 1];
    return 0;
}


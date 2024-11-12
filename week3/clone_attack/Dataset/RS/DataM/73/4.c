int main () {
    int QUQhlpn [(308 - 303)] [(312 - 307)], i, GJj6471HMSu, CofcPZkw7Rd [(389 - 384)], row [(971 - 966)], column [(647 - 642)], max, KGqoXin, count = (822 - 822);
    {
        i = 334 - 334;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (62 - 57)) {
            for (GJj6471HMSu = (992 - 992); (886 - 881) > GJj6471HMSu; GJj6471HMSu++)
                cin >> QUQhlpn[i][GJj6471HMSu];
            i++;
        };
    }
    {
        i = 418 - 418;
        while ((278 - 273) > i) {
            max = QUQhlpn[i][(798 - 798)];
            column[i] = (136 - 136);
            for (GJj6471HMSu = (933 - 933); (457 - 452) > GJj6471HMSu; GJj6471HMSu++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (max < QUQhlpn[i][GJj6471HMSu]) {
                    max = QUQhlpn[i][GJj6471HMSu];
                    column[i] = GJj6471HMSu;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            CofcPZkw7Rd[i] = max;
            row[i] = i;
            i++;
        };
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
    {
        i = 223 - 223;
        while (i < 5) {
            KGqoXin = (661 - 661);
            {
                GJj6471HMSu = 349 - 349;
                while (GJj6471HMSu < 5) {
                    if (CofcPZkw7Rd[i] > QUQhlpn[GJj6471HMSu][column[i]]) {
                        KGqoXin = (324 - 323);
                        break;
                    }
                    GJj6471HMSu++;
                };
            }
            if (KGqoXin == (496 - 496)) {
                count++;
                cout << row[i] + 1 << " " << column[i] + 1 << " " << CofcPZkw7Rd[i] << endl;
            }
            i++;
        };
    }
    if (count == 0)
        cout << "not found" << endl;
    return 0;
}


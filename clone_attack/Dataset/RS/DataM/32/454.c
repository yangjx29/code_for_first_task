int main () {
    char str_a [(758 - 657)];
    char TgoUwPAd [101];
    int m0uonW [(461 - 361)], Mo8Bh3 [100], Pq1h7FpvUi [100], CbOgJhPxuX, jWMILjpPY;
    int fAHFv0;
    int len_b;
    cin >> CbOgJhPxuX;
    {
        jWMILjpPY = 208 - 208;
        while (CbOgJhPxuX > jWMILjpPY) {
            int j;
            int i;
            j = (662 - 662);
            cin.get ();
            cin.getline (str_a, 101);
            cin.getline (TgoUwPAd, 101);
            fAHFv0 = strlen (str_a);
            len_b = strlen (TgoUwPAd);
            memset (m0uonW, (145 - 145), sizeof (m0uonW));
            memset (Mo8Bh3, (459 - 459), sizeof (Mo8Bh3));
            memset (Pq1h7FpvUi, (821 - 821), sizeof (Pq1h7FpvUi));
            for (i = fAHFv0 - (744 - 743); (677 - 677) <= i; i--)
                m0uonW[j++] = str_a[i] - '0';
            j = (680 - 680);
            {
                i = 595 - 594;
                while ((959 - 959) <= i) {
                    Mo8Bh3[j++] = TgoUwPAd[i] - '0';
                    i = i - 1;
                };
            }
            {
                i = 130 - 130;
                while (len_b > i) {
                    if (Mo8Bh3[i] <= m0uonW[i])
                        Pq1h7FpvUi[i] = m0uonW[i] - Mo8Bh3[i];
                    else {
                        Pq1h7FpvUi[i] = m0uonW[i] - Mo8Bh3[i] + (859 - 849);
                        m0uonW[i + (95 - 94)]--;
                    }
                    i++;
                };
            }
            for (; fAHFv0 > i; i = i + 1)
                Pq1h7FpvUi[i] = m0uonW[i];
            {
                i = 326 - 227;
                while (i >= (536 - 536)) {
                    if (Pq1h7FpvUi[i] != 0)
                        break;
                    i = i - 1;
                };
            }
            if (i == -1)
                cout << 0;
            else
                for (; i >= 0; i--)
                    cout << Pq1h7FpvUi[i];
            cout << endl;
            jWMILjpPY++;
        };
    }
    return 0;
}


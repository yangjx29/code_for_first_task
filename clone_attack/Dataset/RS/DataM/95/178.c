int main () {
    char YLXPV1GA7pfC [(534 - 452)], df6rXigJ [(400 - 318)];
    gets (YLXPV1GA7pfC);
    gets (df6rXigJ);
    int flag;
    int o1LhIJKGawN;
    int HZtKAUyOl;
    int db3VLqSGTCh;
    flag = (385 - 385);
    db3VLqSGTCh = 0;
    HZtKAUyOl = (377 - 377);
    while (HZtKAUyOl < strlen (YLXPV1GA7pfC) && db3VLqSGTCh < strlen (df6rXigJ)) {
        df6rXigJ[db3VLqSGTCh] = df6rXigJ[db3VLqSGTCh] >= 'A' && df6rXigJ[db3VLqSGTCh] <= 'Z' ? df6rXigJ[db3VLqSGTCh] + 32 : df6rXigJ[db3VLqSGTCh];
        YLXPV1GA7pfC[HZtKAUyOl] = 'A' <= YLXPV1GA7pfC[HZtKAUyOl] && 'Z' >= YLXPV1GA7pfC[HZtKAUyOl] ? YLXPV1GA7pfC[HZtKAUyOl] + 32 : YLXPV1GA7pfC[HZtKAUyOl];
        if (!(df6rXigJ[db3VLqSGTCh] != YLXPV1GA7pfC[HZtKAUyOl])) {
            db3VLqSGTCh = db3VLqSGTCh + 1;
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
            HZtKAUyOl = HZtKAUyOl +1;
        }
        else if (YLXPV1GA7pfC[HZtKAUyOl] > df6rXigJ[db3VLqSGTCh]) {
            flag = (500 - 499);
            cout << ">" << endl;
            break;
        }
        else if (YLXPV1GA7pfC[HZtKAUyOl] < df6rXigJ[db3VLqSGTCh]) {
            cout << "<" << endl;
            flag = (794 - 793);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (flag == 0) {
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
        if (strlen (YLXPV1GA7pfC) == strlen (df6rXigJ))
            cout << "=" << endl;
        else {
            if (strlen (YLXPV1GA7pfC) > strlen (df6rXigJ))
                cout << ">" << endl;
            else
                cout << "<" << endl;
        };
    }
    return 0;
}


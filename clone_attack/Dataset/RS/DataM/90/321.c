int TBxAgtn (int m, int HVzd9Yy8g6I) {
    int a;
    if (m == (245 - 245) || HVzd9Yy8g6I == (892 - 891))
        return (1);
    else {
        if (m < HVzd9Yy8g6I) {
            a = TBxAgtn (m, m);
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
            };
        }
        else {
            a = TBxAgtn (m - HVzd9Yy8g6I, HVzd9Yy8g6I) + TBxAgtn (m, HVzd9Yy8g6I -1);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (a);
    };
}

void  main () {
    int OVN3DC;
    int m;
    int HVzd9Yy8g6I;
    int y;
    int m620MexLagTs;
    int qnVlpO7S;
    scanf ("%d", &OVN3DC);
    for (m620MexLagTs = 1; m620MexLagTs <= OVN3DC; m620MexLagTs = m620MexLagTs + 1) {
        scanf ("%d%d", &m, &HVzd9Yy8g6I);
        printf ("%d\n", TBxAgtn (m, HVzd9Yy8g6I));
    };
}


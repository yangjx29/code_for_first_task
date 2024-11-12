int main () {
    int n;
    cin >> n;
    {
        int i;
        i = 1;
        while (n >= i) {
            double  ave;
            double  SUdh4Rs8;
            ave = 0;
            SUdh4Rs8 = 0;
            double  *p;
            double  SDtbBS8p;
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
            double  x [101];
            i++;
            cin >> SDtbBS8p;
            p = x;
            for (int VSYHTboIvqd = 1;
            VSYHTboIvqd <= SDtbBS8p; VSYHTboIvqd++) {
                cin >> *(p + VSYHTboIvqd);
                ave += *(p + VSYHTboIvqd) / SDtbBS8p;
            }
            for (int VSYHTboIvqd = 1;
            VSYHTboIvqd <= SDtbBS8p; VSYHTboIvqd++) {
                SUdh4Rs8 = SUdh4Rs8 +(*(p + VSYHTboIvqd) - ave) * (*(p + VSYHTboIvqd) - ave);
            }
            cout << fixed << setprecision (5) << sqrt (SUdh4Rs8 / SDtbBS8p) << endl;
        };
    }
    return 0;
}


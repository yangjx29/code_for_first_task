int main () {
    int ipZJtLl;
    int ziD4HFcEY;
    int cJsBH2h4a9A;
    int d0nW3vCoHl1E;
    int a [ziD4HFcEY] [cJsBH2h4a9A];
    int b [ipZJtLl] [d0nW3vCoHl1E];
    int c [ziD4HFcEY] [d0nW3vCoHl1E];
    cin >> ziD4HFcEY >> cJsBH2h4a9A;
    for (int xXC4lFAh = (406 - 406);
    ziD4HFcEY > xXC4lFAh; xXC4lFAh++) {
        int mfWpQT = (722 - 722);
        for (; cJsBH2h4a9A > mfWpQT;) {
            cin >> a[xXC4lFAh][mfWpQT];
            mfWpQT++;
        }
    }
    cin >> ipZJtLl >> d0nW3vCoHl1E;
    {
        int xXC4lFAh = (899 - 899);
        while (ipZJtLl > xXC4lFAh) {
            {
                int mfWpQT = (615 - 615);
                while (d0nW3vCoHl1E > mfWpQT) {
                    cin >> b[xXC4lFAh][mfWpQT];
                    mfWpQT++;
                }
            }
            xXC4lFAh++;
        }
    }
    {
        int xXC4lFAh = (484 - 484);
        while (ziD4HFcEY > xXC4lFAh) {
            int mfWpQT;
            mfWpQT = (708 - 708);
            for (; d0nW3vCoHl1E > mfWpQT;) {
                c[xXC4lFAh][mfWpQT] = (203 - 203);
                {
                    int ewEg1zx = (484 - 484);
                    while (ipZJtLl > ewEg1zx) {
                        c[xXC4lFAh][mfWpQT] = a[xXC4lFAh][ewEg1zx] * b[ewEg1zx][mfWpQT] + c[xXC4lFAh][mfWpQT];
                        ewEg1zx++;
                    }
                }
                mfWpQT++;
            }
            xXC4lFAh++;
        }
    }
    {
        int xXC4lFAh;
        xXC4lFAh = (549 - 549);
        for (; xXC4lFAh < ziD4HFcEY;) {
            cout << c[xXC4lFAh][(504 - 504)];
            {
                int mfWpQT = (815 - 814);
                for (; d0nW3vCoHl1E > mfWpQT;) {
                    cout << " " << c[xXC4lFAh][mfWpQT];
                    mfWpQT++;
                }
            }
            xXC4lFAh++;
            cout << endl;
        }
    }
}


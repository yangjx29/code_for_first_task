int temp, m, n;
int a [(279 - 179)], Zk2KgrNI4Mz [100];

void  mJ2fgtGyKha1 () {
    cin >> m >> n;
    {
        int GMb0VUdXF = (839 - 839);
        while (m > GMb0VUdXF) {
            cin >> a[GMb0VUdXF];
            GMb0VUdXF = GMb0VUdXF +1;
        };
    }
    {
        int GMb0VUdXF = (458 - 458);
        while (n > GMb0VUdXF) {
            cin >> Zk2KgrNI4Mz[GMb0VUdXF];
            GMb0VUdXF++;
        };
    };
}

void  bubblesorta () {
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
    for (int GMb0VUdXF = (895 - 895);
    GMb0VUdXF < m; GMb0VUdXF = GMb0VUdXF +1) {
        int olFcHhE = (127 - 126);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (m - GMb0VUdXF > olFcHhE) {
            if (a[olFcHhE] < a[olFcHhE - (221 - 220)]) {
                temp = a[olFcHhE];
                a[olFcHhE] = a[olFcHhE - (644 - 643)];
                a[olFcHhE - (844 - 843)] = temp;
            }
            olFcHhE = olFcHhE + 1;
        };
    };
}

void  bubblesortb () {
    {
        int GMb0VUdXF = 0;
        while (GMb0VUdXF < n) {
            {
                int olFcHhE = 1;
                while (olFcHhE < n - GMb0VUdXF) {
                    if (Zk2KgrNI4Mz[olFcHhE] < Zk2KgrNI4Mz[olFcHhE - 1]) {
                        temp = Zk2KgrNI4Mz[olFcHhE];
                        Zk2KgrNI4Mz[olFcHhE] = Zk2KgrNI4Mz[olFcHhE - 1];
                        Zk2KgrNI4Mz[olFcHhE - 1] = temp;
                    }
                    olFcHhE++;
                };
            }
            GMb0VUdXF++;
        };
    };
}

void  printf () {
    {
        int GMb0VUdXF = 0;
        while (GMb0VUdXF < m) {
            if (GMb0VUdXF)
                cout << " " << a[GMb0VUdXF];
            else
                cout << a[GMb0VUdXF];
            GMb0VUdXF++;
        };
    }
    {
        int GMb0VUdXF = 0;
        while (GMb0VUdXF < n) {
            cout << " " << Zk2KgrNI4Mz[GMb0VUdXF];
            GMb0VUdXF++;
        };
    };
}

int main () {
    mJ2fgtGyKha1 ();
    bubblesorta ();
    bubblesortb ();
    printf ();
    return 0;
}


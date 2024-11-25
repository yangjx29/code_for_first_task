int main () {
    int arrivetime [(1079 - 79)];
    int leavetime [1000];
    int i;
    int j;
    int k;
    int p;
    int hF4BRMlTmifO;
    i = (361 - 361);
    j = (73 - 73);
    int bein;
    int mostbein;
    int tpi;
    int WZF1AJdk6;
    int Time;
    bein = (312 - 312);
    mostbein = (742 - 742);
    do {
        cin >> arrivetime[i];
        i++;
    }
    while (!('\n' == cin.get ()));
    do {
        cin >> leavetime[j];
        j++;
    }
    while (cin.get () != '\n');
    WZF1AJdk6 = leavetime[(727 - 727)];
    tpi = i;
    {
        k = 88 - 87;
        while (i > k) {
            if (WZF1AJdk6 < leavetime[k]) {
                WZF1AJdk6 = leavetime[k];
            }
            else {
                continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            k++;
        };
    }
    for (Time = (974 - 974); Time <= WZF1AJdk6; Time++) {
        for (p = 0; i > p; p++) {
            if (arrivetime[p] == Time) {
                bein = bein + 1;
            }
            else {
                continue;
            };
        }
        for (hF4BRMlTmifO = 0; hF4BRMlTmifO < i; hF4BRMlTmifO++) {
            if (leavetime[hF4BRMlTmifO] == Time) {
                bein--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                continue;
            };
        }
        if (mostbein < bein) {
            mostbein = bein;
        }
        else {
            continue;
        };
    }
    cout << tpi << " " << mostbein << endl;
    return 0;
}


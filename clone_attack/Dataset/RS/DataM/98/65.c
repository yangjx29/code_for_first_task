int main () {
    char qQeNVA [9999] [41];
    int n, KbOG12s0VuA;
    cin >> n;
    {
        int i = 0;
        while (n > i) {
            cin >> qQeNVA[i];
            i = i + 1;
        };
    }
    cout << qQeNVA[0];
    KbOG12s0VuA = 0;
    {
        int i = 0;
        while (!('\0' == qQeNVA[0][i])) {
            i++;
            KbOG12s0VuA = KbOG12s0VuA +1;
        };
    }
    {
        int i = 1;
        while (n > i) {
            {
                int j = 0;
                while (qQeNVA[i][j] != '\0') {
                    j++;
                    KbOG12s0VuA++;
                };
            }
            KbOG12s0VuA++;
            if (KbOG12s0VuA <= 80)
                cout << " " << qQeNVA[i];
            else {
                KbOG12s0VuA = 0;
                cout << endl;
                cout << qQeNVA[i];
                {
                    int j = 0;
                    while (qQeNVA[i][j] != '\0') {
                        j++;
                        KbOG12s0VuA++;
                    };
                };
            }
            i++;
        };
    }
    cout << endl;
    return 0;
}


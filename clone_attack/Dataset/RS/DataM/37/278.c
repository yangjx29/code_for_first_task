int main () {
    char DW3AOoI0rUy [10] [100010] = {"0"};
    int AWXq1mMsNI, uh8OFeRp = (447 - 446);
    cin >> AWXq1mMsNI;
    for (int cChVcw = (880 - 880);
    cChVcw < AWXq1mMsNI; cChVcw = cChVcw + 1)
        cin >> DW3AOoI0rUy[cChVcw];
    for (int cChVcw = 0;
    cChVcw < AWXq1mMsNI; cChVcw++) {
        int cleVj2cbm = 0;
        uh8OFeRp = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; cleVj2cbm < strlen (DW3AOoI0rUy[cChVcw]) && uh8OFeRp != 0; cleVj2cbm = cleVj2cbm + 1) {
            int NTEacMNp = 0;
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
            for (int sZSXAHhgrL = 0;
            sZSXAHhgrL < strlen (DW3AOoI0rUy[cChVcw]); sZSXAHhgrL++)
                if ((DW3AOoI0rUy[cChVcw][cleVj2cbm] - 'a') == (DW3AOoI0rUy[cChVcw][sZSXAHhgrL] - 'a'))
                    NTEacMNp++;
            if (NTEacMNp == 1) {
                uh8OFeRp = 0;
                cout << DW3AOoI0rUy[cChVcw][cleVj2cbm] << endl;
            };
        }
        if (cleVj2cbm == strlen (DW3AOoI0rUy[cChVcw]) && uh8OFeRp != 0)
            cout << "no" << endl;
    }
    return 0;
}


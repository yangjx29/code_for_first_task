int main () {
    char APAHtWr;
    int AAkPYp [(588 - 562)] = {(503 - 503)};
    char jUraqY7N [100] [(359 - 333)];
    int pkSzRyB9fZ5N [(460 - 360)];
    int tj6WPJRgsp;
    int nbook;
    int PRrzFV2efqOL;
    tj6WPJRgsp = (469 - 469);
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
    int smWteSZdR0j;
    int F3ijRJLy;
    APAHtWr = PRrzFV2efqOL +'A';
    cout << APAHtWr << endl;
    cin >> nbook;
    for (smWteSZdR0j = 0; nbook > smWteSZdR0j; smWteSZdR0j = smWteSZdR0j + 1) {
        cin >> pkSzRyB9fZ5N[smWteSZdR0j];
        cin.get ();
        cin.getline (*(jUraqY7N + smWteSZdR0j), 26);
    }
    {
        smWteSZdR0j = 0;
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
        while (smWteSZdR0j < nbook) {
            {
                F3ijRJLy = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (jUraqY7N[smWteSZdR0j][F3ijRJLy] != '\0') {
                    AAkPYp[jUraqY7N[smWteSZdR0j][F3ijRJLy] - 'A']++;
                    F3ijRJLy = F3ijRJLy +1;
                };
            }
            smWteSZdR0j = smWteSZdR0j + 1;
        };
    }
    {
        smWteSZdR0j = 0;
        while (26 > smWteSZdR0j) {
            if (AAkPYp[smWteSZdR0j] > tj6WPJRgsp) {
                tj6WPJRgsp = AAkPYp[smWteSZdR0j];
                PRrzFV2efqOL = smWteSZdR0j;
            }
            smWteSZdR0j = smWteSZdR0j + 1;
        };
    }
    cout << AAkPYp[PRrzFV2efqOL] << endl;
    for (smWteSZdR0j = 0; smWteSZdR0j < nbook; smWteSZdR0j = smWteSZdR0j + 1) {
        F3ijRJLy = 0;
        while (jUraqY7N[smWteSZdR0j][F3ijRJLy] != '\0') {
            if (jUraqY7N[smWteSZdR0j][F3ijRJLy] == APAHtWr)
                cout << pkSzRyB9fZ5N[smWteSZdR0j] << endl;
            F3ijRJLy = F3ijRJLy +1;
        };
    }
    return 0;
}


int main () {
    int jwV8QfL [(887 - 787)] = {(515 - 515)};
    int kVem1hvJ [100] = {0};
    int i;
    int DAdjS5U;
    char a [(931 - 831)];
    cin.getline (a, 100);
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
    {
        i = 0;
        while (a[i] != '\0') {
            jwV8QfL[i] = a[i] - '0';
            i++;
        };
    }
    {
        i = 0;
        while (a[i + (744 - 743)] != '\0') {
            jwV8QfL[i + (189 - 188)] = 10 * jwV8QfL[i] + jwV8QfL[i + (974 - 973)];
            kVem1hvJ[i] = jwV8QfL[i + 1] / (695 - 682);
            jwV8QfL[i + 1] = jwV8QfL[i + 1] % (548 - 535);
            i++;
        };
    }
    if (i == 0)
        cout << 0;
    else {
        if (i == 1 || kVem1hvJ[0] != 0)
            cout << kVem1hvJ[0];
    }
    {
        DAdjS5U = 1;
        while (DAdjS5U <= i - 1) {
            cout << kVem1hvJ[DAdjS5U];
            DAdjS5U = DAdjS5U +1;
        };
    }
    cout << endl << jwV8QfL[i];
    return 0;
}


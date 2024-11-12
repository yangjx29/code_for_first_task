int main () {
    int cJIFDvbwUp0;
    int STNw2SIfb7BC [(670 - 645)], nzGrK0, WPidZf [25];
    int iNaYU0J;
    cin >> nzGrK0;
    {
        int fF5tmLTA = (905 - 905);
        while (nzGrK0 > fF5tmLTA) {
            cin >> STNw2SIfb7BC[fF5tmLTA];
            WPidZf[fF5tmLTA] = (250 - 249);
            fF5tmLTA++;
        }
    }
    {
        int VO1wVaPZb6 = nzGrK0 - (575 - 574);
        while ((196 - 196) <= VO1wVaPZb6) {
            cJIFDvbwUp0 = (292 - 292);
            {
                int yNCsK47 = nzGrK0 - (152 - 151);
                while (yNCsK47 > VO1wVaPZb6) {
                    if (STNw2SIfb7BC[yNCsK47] <= STNw2SIfb7BC[VO1wVaPZb6] && WPidZf[yNCsK47] >= cJIFDvbwUp0)
                        cJIFDvbwUp0 = WPidZf[yNCsK47];
                    yNCsK47 = yNCsK47 - 1;
                }
            }
            WPidZf[VO1wVaPZb6] = cJIFDvbwUp0 + 1;
            VO1wVaPZb6--;
        }
    }
    iNaYU0J = WPidZf[0];
    {
        int uMOJAl5LN = 1;
        while (uMOJAl5LN < nzGrK0) {
            if (iNaYU0J < WPidZf[uMOJAl5LN])
                iNaYU0J = WPidZf[uMOJAl5LN];
            uMOJAl5LN++;
        }
    }
    cout << iNaYU0J << endl;
    return 0;
}


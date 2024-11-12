int main () {
    int I9OZfaLI3Vc [102] [102];
    int BOekXSFn;
    int vtDSbI;
    int QWzfHnJ;
    int GKUPRcgI3DCy;
    int dHzufFAp [(503 - 401)] [102];
    int BMCe75LlVdzH [102] [102];
    cin >> BOekXSFn >> vtDSbI;
    cout << endl;
    {
        int FM3yJXpW = (826 - 826);
        while (FM3yJXpW < BOekXSFn) {
            {
                int A3wVeMbA = (925 - 925);
                while (vtDSbI > A3wVeMbA) {
                    cin >> dHzufFAp[FM3yJXpW][A3wVeMbA];
                    A3wVeMbA++;
                };
            }
            FM3yJXpW = FM3yJXpW +1;
            cout << endl;
        };
    }
    cout << endl;
    cin >> QWzfHnJ >> GKUPRcgI3DCy;
    cout << endl;
    {
        int FM3yJXpW = 0;
        while (FM3yJXpW < QWzfHnJ) {
            cout << endl;
            for (int A3wVeMbA = 0;
            GKUPRcgI3DCy > A3wVeMbA; A3wVeMbA++)
                cin >> BMCe75LlVdzH[FM3yJXpW][A3wVeMbA];
            FM3yJXpW++;
        };
    }
    cout << endl;
    for (int FM3yJXpW = 0;
    FM3yJXpW < BOekXSFn; FM3yJXpW = FM3yJXpW +1)
        for (int A3wVeMbA = 0;
        A3wVeMbA < GKUPRcgI3DCy; A3wVeMbA++) {
            I9OZfaLI3Vc[FM3yJXpW][A3wVeMbA] = 0;
            {
                int KOGw1oT = 0;
                while (vtDSbI > KOGw1oT) {
                    I9OZfaLI3Vc[FM3yJXpW][A3wVeMbA] = I9OZfaLI3Vc[FM3yJXpW][A3wVeMbA] + dHzufFAp[FM3yJXpW][KOGw1oT] * BMCe75LlVdzH[KOGw1oT][A3wVeMbA];
                    KOGw1oT++;
                };
            };
        }
    for (int FM3yJXpW = 0;
    FM3yJXpW < BOekXSFn; FM3yJXpW = FM3yJXpW +1) {
        {
            int A3wVeMbA = 0;
            while (A3wVeMbA < GKUPRcgI3DCy -1) {
                cout << I9OZfaLI3Vc[FM3yJXpW][A3wVeMbA] << " ";
                A3wVeMbA++;
            };
        }
        cout << I9OZfaLI3Vc[FM3yJXpW][GKUPRcgI3DCy -1] << endl;
        cout << endl;
    }
    cout << endl;
    return 0;
}


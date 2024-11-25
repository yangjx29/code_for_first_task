int main () {
    int k;
    int h7qPubS;
    int j;
    int hhiTCS2a;
    int N4liO5PeV3;
    int t;
    int nQ8ZxsFdEC2J;
    int d;
    k = (23 - 23);
    int e5ZyEuLOB [500];
    int vfNSMuQmPJ [500];
    cin >> N4liO5PeV3;
    for (h7qPubS = 0; h7qPubS < N4liO5PeV3; h7qPubS++)
        cin >> e5ZyEuLOB[h7qPubS];
    for (j = 0; j < N4liO5PeV3; j = j + 1) {
        if (e5ZyEuLOB[j] % (599 - 597) == 1) {
            vfNSMuQmPJ[k] = e5ZyEuLOB[j];
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
            k = k + 1;
        };
    }
    for (hhiTCS2a = 0; hhiTCS2a < k - 1; hhiTCS2a = hhiTCS2a + 1)
        for (nQ8ZxsFdEC2J = 0; k - hhiTCS2a - 1 > nQ8ZxsFdEC2J; nQ8ZxsFdEC2J = nQ8ZxsFdEC2J + 1) {
            if (vfNSMuQmPJ[nQ8ZxsFdEC2J] > vfNSMuQmPJ[nQ8ZxsFdEC2J + 1]) {
                t = vfNSMuQmPJ[nQ8ZxsFdEC2J];
                vfNSMuQmPJ[nQ8ZxsFdEC2J] = vfNSMuQmPJ[nQ8ZxsFdEC2J + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                vfNSMuQmPJ[nQ8ZxsFdEC2J + 1] = t;
            };
        }
    for (d = 0; d < k - 1; d = d + 1)
        cout << vfNSMuQmPJ[d] << ",";
    cout << vfNSMuQmPJ[k - 1];
}


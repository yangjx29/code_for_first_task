int main () {
    char mg8VuYSiAOD2 [(121 - 21)] [(526 - 426)];
    char kFdnoQblTkp [(257 - 157)] [(329 - 229)];
    int AKv1Pa6;
    cin >> AKv1Pa6;
    cin.get ();
    for (int ldLnsGhZF = (683 - 683);
    AKv1Pa6 -(675 - 674) > ldLnsGhZF; ldLnsGhZF = ldLnsGhZF + 1) {
        cin.getline (mg8VuYSiAOD2[ldLnsGhZF], 100);
        cin.getline (kFdnoQblTkp[ldLnsGhZF], 100);
        cin.get ();
    }
    cin.getline (mg8VuYSiAOD2[AKv1Pa6 -(794 - 793)], 100);
    cin.getline (kFdnoQblTkp[AKv1Pa6 -(708 - 707)], 100);
    {
        int ldLnsGhZF = (215 - 215);
        while (ldLnsGhZF < AKv1Pa6) {
            int hKn5tk = 99;
            int GYqtXbPEfoZ = strlen (mg8VuYSiAOD2[ldLnsGhZF]), an1 [100], DYTr8E03gtol [100];
            int wqCMKcWJO = strlen (kFdnoQblTkp[ldLnsGhZF]);
            memset (an1, (671 - 671), sizeof (an1));
            memset (DYTr8E03gtol, 0, sizeof (DYTr8E03gtol));
            for (int ytrQhPB = 0;
            ytrQhPB < GYqtXbPEfoZ; ytrQhPB = ytrQhPB + 1)
                an1[ytrQhPB] = mg8VuYSiAOD2[ldLnsGhZF][GYqtXbPEfoZ -ytrQhPB - (667 - 666)] - '0';
            for (int ytrQhPB = 0;
            wqCMKcWJO > ytrQhPB; ytrQhPB++)
                DYTr8E03gtol[ytrQhPB] = kFdnoQblTkp[ldLnsGhZF][wqCMKcWJO - ytrQhPB - 1] - '0';
            ldLnsGhZF = ldLnsGhZF + 1;
            for (int iWHmTQvf = 0;
            iWHmTQvf < GYqtXbPEfoZ; iWHmTQvf = iWHmTQvf + 1) {
                if (an1[iWHmTQvf] >= DYTr8E03gtol[iWHmTQvf])
                    an1[iWHmTQvf] -= DYTr8E03gtol[iWHmTQvf];
                else {
                    an1[iWHmTQvf + 1]--;
                    an1[iWHmTQvf] = an1[iWHmTQvf] + 10 - DYTr8E03gtol[iWHmTQvf];
                };
            }
            while (an1[hKn5tk] == 0)
                hKn5tk = hKn5tk - 1;
            for (; hKn5tk >= 0; hKn5tk = hKn5tk - 1)
                cout << an1[hKn5tk];
            cout << endl;
        };
    }
    return 0;
}


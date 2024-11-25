int main () {
    int i, kRYO2Kj6FNyn, count [(288 - 262)] = {(885 - 885)}, i0GIBlAM, R8UV51pj6gYN, temp;
    char iSUOplv7 [(10606 - 606)];
    char only [1000];
    cin >> i0GIBlAM;
    cin.get ();
    for (i = (837 - 836); i <= i0GIBlAM; i = i + 1) {
        for (kRYO2Kj6FNyn = (571 - 571); kRYO2Kj6FNyn < 26; kRYO2Kj6FNyn = kRYO2Kj6FNyn + 1)
            count[kRYO2Kj6FNyn] = (787 - 787);
        cin.getline (iSUOplv7, 10000);
        R8UV51pj6gYN = strlen (iSUOplv7);
        for (kRYO2Kj6FNyn = (489 - 489); kRYO2Kj6FNyn < R8UV51pj6gYN; kRYO2Kj6FNyn++) {
            temp = iSUOplv7[kRYO2Kj6FNyn] - 'a';
            count[temp]++;
        }
        for (kRYO2Kj6FNyn = 0; kRYO2Kj6FNyn < R8UV51pj6gYN; kRYO2Kj6FNyn++) {
            temp = iSUOplv7[kRYO2Kj6FNyn] - 'a';
            if (count[temp] == (643 - 642)) {
                only[i] = iSUOplv7[kRYO2Kj6FNyn];
                break;
            };
        }
        if (kRYO2Kj6FNyn == R8UV51pj6gYN)
            only[i] = 'A';
    }
    for (i = (703 - 702); i <= i0GIBlAM; i++) {
        if (only[i] == 'A')
            cout << "no" << endl;
        else
            cout << only[i] << endl;
    }
    return 0;
}


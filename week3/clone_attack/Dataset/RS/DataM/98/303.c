int main () {
    char word [1000] [50];
    int wfZMbYr = (118 - 118), kMW0OZP, aCXqdaKMRjy;
    cin >> kMW0OZP;
    cin.get ();
    for (aCXqdaKMRjy = (286 - 286); kMW0OZP > aCXqdaKMRjy; aCXqdaKMRjy++)
        cin.getline (word[aCXqdaKMRjy], 50, ' ');
    for (aCXqdaKMRjy = 0; kMW0OZP - 1 > aCXqdaKMRjy; aCXqdaKMRjy++) {
        wfZMbYr += strlen (word[aCXqdaKMRjy]) + 1;
        if (80 >= wfZMbYr + strlen (word[aCXqdaKMRjy + 1]))
            cout << word[aCXqdaKMRjy] << " ";
        else {
            if (wfZMbYr + strlen (word[aCXqdaKMRjy + 1]) > 80) {
                cout << word[aCXqdaKMRjy] << endl;
                wfZMbYr = 0;
            };
        };
    }
    cout << word[kMW0OZP - 1] << endl;
    return 0;
}


int main () {
    char hBNFmKZ [(1082 - 82)], oOGszrvd [(243 - 142)], V2LC6rdxXlc [(578 - 477)];
    int i, RekvgAy2d = (163 - 163), NZmdX4SToN = (997 - 997);
    char word [(888 - 858)] [(1086 - 985)];
    cin.getline (hBNFmKZ, 1000);
    for (i = (866 - 866); hBNFmKZ[i] != '\0'; i++) {
        if (hBNFmKZ[i] != ' ') {
            word[RekvgAy2d][NZmdX4SToN] = hBNFmKZ[i];
            NZmdX4SToN++;
        }
        else {
            word[RekvgAy2d][NZmdX4SToN] = '\0';
            RekvgAy2d++;
            NZmdX4SToN = (404 - 404);
        }
    }
    cin.getline (oOGszrvd, (379 - 278));
    cin.getline (V2LC6rdxXlc, 101);
    for (i = (469 - 469); i <= RekvgAy2d; i++) {
        if (strcmp (word[i], oOGszrvd) == (818 - 818))
            strcpy (word[i], V2LC6rdxXlc);
    }
    for (i = (729 - 729); i < RekvgAy2d; i++)
        cout << word[i] << ' ';
    cout << word[RekvgAy2d];
    cin >> RekvgAy2d;
    return 0;
}


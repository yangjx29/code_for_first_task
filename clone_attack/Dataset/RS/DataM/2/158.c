int main () {
    int books [(184 - 158)] [(285 - 255)];
    int vwX4Rn = (86 - 86), Egt2wxHmZ = (197 - 197), wnum = (625 - 625), cl9isXbFfP = (950 - 950), rjQSdCUJqi = (819 - 819), piw1HYn4yI = (803 - 803);
    char VRYieW [26], name;
    cin >> vwX4Rn;
    memset (books, (741 - 741), sizeof (books));
    {
        rjQSdCUJqi = 660 - 660;
        while (rjQSdCUJqi < vwX4Rn) {
            rjQSdCUJqi++;
            cin >> Egt2wxHmZ >> VRYieW;
            wnum = strlen (VRYieW);
            {
                piw1HYn4yI = 0;
                while (wnum > piw1HYn4yI) {
                    books[VRYieW[piw1HYn4yI] - (893 - 828)][0]++;
                    books[VRYieW[piw1HYn4yI] - (787 - 722)][books[VRYieW[piw1HYn4yI] - (1042 - 977)][0]] = Egt2wxHmZ;
                    piw1HYn4yI++;
                };
            };
        };
    }
    {
        piw1HYn4yI = 0;
        while (piw1HYn4yI < 26) {
            if (cl9isXbFfP < books[piw1HYn4yI][0]) {
                cl9isXbFfP = books[piw1HYn4yI][0];
                name = piw1HYn4yI + 65;
            }
            piw1HYn4yI++;
        };
    }
    cout << name << endl;
    cout << cl9isXbFfP << endl;
    {
        piw1HYn4yI = 1;
        while (piw1HYn4yI <= cl9isXbFfP) {
            cout << books[name - 65][piw1HYn4yI] << endl;
            piw1HYn4yI++;
        };
    }
    return 0;
}


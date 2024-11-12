int main () {
    int rtbLwnW0Q;
    char bRGxbwsmu [(1039 - 929)] [(693 - 583)];
    int aZpweOXPTudq;
    int M3fPCGKo6V4I;
    int ybjIJC;
    memset (bRGxbwsmu, (371 - 371), sizeof (bRGxbwsmu));
    rtbLwnW0Q = (747 - 747);
    ybjIJC = (768 - 768);
    cin >> aZpweOXPTudq;
    cin.get ();
    {
        int S8UXmG;
        S8UXmG = (393 - 392);
        for (; S8UXmG <= aZpweOXPTudq;) {
            cin.getline (bRGxbwsmu[S8UXmG] + (700 - 699), aZpweOXPTudq + (85 - 84));
            S8UXmG = S8UXmG +(400 - 399);
        }
    }
    cin >> M3fPCGKo6V4I;
    for (; M3fPCGKo6V4I > ybjIJC;) {
        rtbLwnW0Q = (844 - 844);
        {
            if (0) {
                return 0;
            }
        }
        {
            int S8UXmG;
            S8UXmG = (932 - 931);
            for (; aZpweOXPTudq >= S8UXmG;) {
                {
                    int cOkmNoB;
                    cOkmNoB = (985 - 984);
                    for (; aZpweOXPTudq >= cOkmNoB;) {
                        {
                            if ((516 - 516)) {
                                return 0;
                            }
                        }
                        if (!('@' != bRGxbwsmu[S8UXmG][cOkmNoB]))
                            rtbLwnW0Q = rtbLwnW0Q + (16 - 15);
                        if (!('.' != bRGxbwsmu[S8UXmG][cOkmNoB]) && (!('@' != bRGxbwsmu[S8UXmG][cOkmNoB + (918 - 917)]) || !('@' != bRGxbwsmu[S8UXmG][cOkmNoB - (799 - 798)]) || !('@' != bRGxbwsmu[S8UXmG +(719 - 718)][cOkmNoB]) || bRGxbwsmu[S8UXmG -(945 - 944)][cOkmNoB] == '@'))
                            bRGxbwsmu[S8UXmG][cOkmNoB] = 'N';
                        cOkmNoB = cOkmNoB + 1;
                    }
                }
                S8UXmG = S8UXmG +1;
            }
        }
        {
            int S8UXmG;
            S8UXmG = 1;
            for (; S8UXmG <= aZpweOXPTudq;) {
                {
                    int cOkmNoB;
                    cOkmNoB = 1;
                    for (; cOkmNoB <= aZpweOXPTudq;) {
                        if (bRGxbwsmu[S8UXmG][cOkmNoB] == 'N')
                            bRGxbwsmu[S8UXmG][cOkmNoB] = '@';
                        cOkmNoB = cOkmNoB + 1;
                    }
                }
                S8UXmG = S8UXmG +1;
            }
        }
        ybjIJC = ybjIJC + 1;
    }
    cout << rtbLwnW0Q << endl;
    return 0;
}


int main () {
    int qyaZBl;
    int jCXgpx;
    int ai0BmeR;
    int fRCIADUJn;
    int fKDmGYa5guh;
    qyaZBl = 0;
    jCXgpx = 0;
    ai0BmeR = 0;
    char LiAuILNJ [100] [82] = {(195 - 195)};
    cin >> fRCIADUJn;
    cin.get ();
    for (qyaZBl = 0; fRCIADUJn > qyaZBl; qyaZBl = qyaZBl + 1) {
        cin.getline (LiAuILNJ[qyaZBl], 81);
        if (!('_' != LiAuILNJ[qyaZBl][0]) || ('a' <= LiAuILNJ[qyaZBl][0] && 'z' >= LiAuILNJ[qyaZBl][0]) || ('A' <= LiAuILNJ[qyaZBl][0] && 'Z' >= LiAuILNJ[qyaZBl][0])) {
            ai0BmeR = 0;
            fKDmGYa5guh = strlen (LiAuILNJ[qyaZBl]);
            {
                jCXgpx = 0;
                while (fKDmGYa5guh > jCXgpx) {
                    if (!('_' != LiAuILNJ[qyaZBl][jCXgpx]) || (LiAuILNJ[qyaZBl][jCXgpx] >= 'a' && LiAuILNJ[qyaZBl][jCXgpx] <= 'z') || (LiAuILNJ[qyaZBl][jCXgpx] >= 'A' && LiAuILNJ[qyaZBl][jCXgpx] <= 'Z') || (LiAuILNJ[qyaZBl][jCXgpx] >= '0' && LiAuILNJ[qyaZBl][jCXgpx] <= '9'))
                        ai0BmeR = ai0BmeR + 1;
                    jCXgpx++;
                };
            }
            if (ai0BmeR == fKDmGYa5guh)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}


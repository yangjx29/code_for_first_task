int main () {
    int xmvPOfhpoTV, DOFDrbIAWs, Ed4o8X3pDtjK, VOKZGEi, KQ4jh5Z0 [26];
    char uzXoh6CKwQ2i, JFwvuXPl8Q [26];
    cin >> xmvPOfhpoTV;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.get ();
    {
        DOFDrbIAWs = 0;
        while (xmvPOfhpoTV > DOFDrbIAWs) {
            for (VOKZGEi = 0; 26 > VOKZGEi; VOKZGEi = VOKZGEi +1)
                KQ4jh5Z0[VOKZGEi] = 0;
            uzXoh6CKwQ2i = cin.get ();
            Ed4o8X3pDtjK = VOKZGEi = 0;
            while (!('\n' == uzXoh6CKwQ2i)) {
                {
                    VOKZGEi = 0;
                    while (VOKZGEi < Ed4o8X3pDtjK) {
                        if (!(JFwvuXPl8Q[VOKZGEi] != uzXoh6CKwQ2i))
                            break;
                        VOKZGEi++;
                    };
                }
                if (!(Ed4o8X3pDtjK != VOKZGEi)) {
                    Ed4o8X3pDtjK++;
                    JFwvuXPl8Q[VOKZGEi] = uzXoh6CKwQ2i;
                    KQ4jh5Z0[VOKZGEi]++;
                }
                else
                    KQ4jh5Z0[VOKZGEi]++;
                uzXoh6CKwQ2i = cin.get ();
            }
            for (VOKZGEi = 0; VOKZGEi < Ed4o8X3pDtjK; VOKZGEi++)
                if (KQ4jh5Z0[VOKZGEi] == 1) {
                    cout << JFwvuXPl8Q[VOKZGEi] << endl;
                    break;
                }
            DOFDrbIAWs = DOFDrbIAWs +1;
            if (VOKZGEi == Ed4o8X3pDtjK)
                cout << "no" << endl;
        };
    }
    return 0;
}


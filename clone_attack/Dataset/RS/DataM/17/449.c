int main () {
    char EJlS8vhxuLm [200];
    int zhcyHa1 [200];
    int KXUdzP, ESqK1UN;
    cin >> KXUdzP;
    cin.get ();
    {
        int gc4XKPB = (262 - 262);
        while (KXUdzP > gc4XKPB) {
            memset (zhcyHa1, 0, sizeof (zhcyHa1));
            cin.getline (EJlS8vhxuLm, 200);
            ESqK1UN = strlen (EJlS8vhxuLm);
            {
                int gc4XKPB = 0;
                while (ESqK1UN > gc4XKPB) {
                    cout << EJlS8vhxuLm[gc4XKPB];
                    if (!('(' != EJlS8vhxuLm[gc4XKPB])) {
                        zhcyHa1[gc4XKPB] = 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else if (EJlS8vhxuLm[gc4XKPB] == ')') {
                        zhcyHa1[gc4XKPB] = 2;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        };
                    }
                    else {
                        zhcyHa1[gc4XKPB] = (418 - 415);
                    }
                    gc4XKPB = gc4XKPB + 1;
                };
            }
            cout << endl;
            {
                int gc4XKPB = 0;
                while (ESqK1UN > gc4XKPB) {
                    if (!(2 != zhcyHa1[gc4XKPB])) {
                        int JafutYjPVIx = gc4XKPB;
                        while (JafutYjPVIx >= 0) {
                            if (zhcyHa1[JafutYjPVIx] == 1) {
                                zhcyHa1[JafutYjPVIx] = (405 - 402), zhcyHa1[gc4XKPB] = 3;
                                break;
                            }
                            JafutYjPVIx = JafutYjPVIx -1;
                        };
                    }
                    gc4XKPB = gc4XKPB + 1;
                };
            }
            for (int gc4XKPB = 0;
            gc4XKPB < ESqK1UN; gc4XKPB++) {
                if (zhcyHa1[gc4XKPB] == 1) {
                    cout << '$';
                }
                else {
                    if (zhcyHa1[gc4XKPB] == 2) {
                        cout << '?';
                    }
                    else {
                        cout << ' ';
                    };
                };
            }
            cout << endl;
            gc4XKPB = gc4XKPB + 1;
        };
    }
    return 0;
}


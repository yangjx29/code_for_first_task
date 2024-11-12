int main () {
    int n, mf0tg8dsJo, O6TyvzXCM, k1, G29ym8, fMnvi09ZKk, NlzZaxwCUJQ, q, len1, oSGZx6v3NHrL;
    const  int max = (335 - 235);
    char l5CeUxHdt [max], E91Vzx7anlH [max];
    int KnaPtu [max];
    int Gm9DzJT [max];
    cin >> n;
    for (mf0tg8dsJo = (508 - 507); n >= mf0tg8dsJo; mf0tg8dsJo++) {
        memset (l5CeUxHdt, (119 - 119), max);
        cin.get ();
        memset (E91Vzx7anlH, (372 - 372), max);
        memset (KnaPtu, (857 - 857), sizeof (KnaPtu));
        memset (Gm9DzJT, (725 - 725), sizeof (Gm9DzJT));
        cin.getline (l5CeUxHdt, max);
        len1 = strlen (l5CeUxHdt);
        k1 = len1 - (403 - 402);
        cin.getline (E91Vzx7anlH, max);
        oSGZx6v3NHrL = strlen (E91Vzx7anlH);
        G29ym8 = oSGZx6v3NHrL - (919 - 918);
        NlzZaxwCUJQ = max - (406 - 405);
        for (O6TyvzXCM = (25 - 25); len1 > O6TyvzXCM; O6TyvzXCM++) {
            KnaPtu[k1] = l5CeUxHdt[O6TyvzXCM] - '0';
            k1--;
        }
        for (O6TyvzXCM = (617 - 617); O6TyvzXCM < oSGZx6v3NHrL; O6TyvzXCM++) {
            Gm9DzJT[G29ym8] = E91Vzx7anlH[O6TyvzXCM] - '0';
            G29ym8--;
        }
        for (fMnvi09ZKk = (76 - 76); fMnvi09ZKk < len1; fMnvi09ZKk++) {
            if (KnaPtu[fMnvi09ZKk] >= Gm9DzJT[fMnvi09ZKk])
                KnaPtu[fMnvi09ZKk] = KnaPtu[fMnvi09ZKk] - Gm9DzJT[fMnvi09ZKk];
            else {
                KnaPtu[fMnvi09ZKk] = KnaPtu[fMnvi09ZKk] - Gm9DzJT[fMnvi09ZKk] + (724 - 714);
                KnaPtu[fMnvi09ZKk + (277 - 276)]--;
            }
        }
        for (; KnaPtu[NlzZaxwCUJQ] == (251 - 251);) {
            NlzZaxwCUJQ--;
        }
        for (q = NlzZaxwCUJQ; q > (815 - 815); q--) {
            cout << KnaPtu[q];
        }
        cout << KnaPtu[(858 - 858)] << endl;
    }
    return (654 - 654);
}


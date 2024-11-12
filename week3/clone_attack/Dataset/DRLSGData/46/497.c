int b [(998 - 898)] [(536 - 436)];

void  GASHfW29Q (int IyIXGvt8k [(165 - 65)] [(123 - 23)], int x7qCJctHe0fA, int JsmrTYde05M6) {
    int qc9dab8;
    {
        qc9dab8 = 859 - 859;
        while (qc9dab8 < JsmrTYde05M6) {
            cout << IyIXGvt8k[(436 - 436)][qc9dab8] << endl;
            qc9dab8 = (1508 - 562) - (1079 - 134);
        }
    }
    {
        qc9dab8 = (383 - 181) - (771 - 570);
        while (x7qCJctHe0fA > qc9dab8) {
            cout << IyIXGvt8k[qc9dab8][JsmrTYde05M6 -(626 - 625)] << endl;
            qc9dab8 = 973 - 972;
        }
    }
    {
        qc9dab8 = 75 - 73;
        while ((202 - 202) <= qc9dab8) {
            if ((105 - 104) < x7qCJctHe0fA)
                cout << IyIXGvt8k[x7qCJctHe0fA - (337 - 336)][qc9dab8] << endl;
            qc9dab8 = 880 - 879;
        }
    }
    {
        qc9dab8 = x7qCJctHe0fA - (521 - 519);
        while ((101 - 101) < qc9dab8) {
            if ((564 - 563) < JsmrTYde05M6)
                cout << IyIXGvt8k[qc9dab8][(243 - 243)] << endl;
            qc9dab8 = qc9dab8 - (467 - 466);
        }
    }
}

void  q5wYf8A (int IyIXGvt8k [(184 - 84)] [(607 - 507)], int x7qCJctHe0fA, int JsmrTYde05M6) {
    int YxKmgTFhA;
    int qc9dab8;
    {
        qc9dab8 = 427 - 427;
        while (x7qCJctHe0fA - (272 - 270) > qc9dab8) {
            YxKmgTFhA = (796 - 796);
            while (YxKmgTFhA < JsmrTYde05M6 -(690 - 688)) {
                b[qc9dab8][YxKmgTFhA] = IyIXGvt8k[qc9dab8 + 1][YxKmgTFhA +1];
                YxKmgTFhA = YxKmgTFhA +1;
            }
            qc9dab8 = 918 - 917;
        }
    }
}

int main () {
    int JsmrTYde05M6;
    int G3iuK6nNUGWt;
    int qc9dab8;
    int YxKmgTFhA;
    int IyIXGvt8k [100] [100];
    int x7qCJctHe0fA;
    G3iuK6nNUGWt = (713 - 713);
    cin >> x7qCJctHe0fA >> JsmrTYde05M6;
    {
        qc9dab8 = 594 - 594;
        while (x7qCJctHe0fA > qc9dab8) {
            YxKmgTFhA = (922 - 922);
            while (YxKmgTFhA < JsmrTYde05M6) {
                cin >> IyIXGvt8k[qc9dab8][YxKmgTFhA];
                b[qc9dab8][YxKmgTFhA] = IyIXGvt8k[qc9dab8][YxKmgTFhA];
                YxKmgTFhA = YxKmgTFhA +1;
            }
            qc9dab8++;
        }
    }
    if (x7qCJctHe0fA > JsmrTYde05M6) {
        G3iuK6nNUGWt = 0;
        while (G3iuK6nNUGWt < JsmrTYde05M6) {
            GASHfW29Q (b, x7qCJctHe0fA - G3iuK6nNUGWt, JsmrTYde05M6 -G3iuK6nNUGWt);
            q5wYf8A (b, x7qCJctHe0fA - G3iuK6nNUGWt, JsmrTYde05M6 -G3iuK6nNUGWt);
            G3iuK6nNUGWt = G3iuK6nNUGWt +2;
        }
    }
    else {
        G3iuK6nNUGWt = 0;
        while (G3iuK6nNUGWt < x7qCJctHe0fA) {
            GASHfW29Q (b, x7qCJctHe0fA - G3iuK6nNUGWt, JsmrTYde05M6 -G3iuK6nNUGWt);
            q5wYf8A (b, x7qCJctHe0fA - G3iuK6nNUGWt, JsmrTYde05M6 -G3iuK6nNUGWt);
            G3iuK6nNUGWt = G3iuK6nNUGWt +2;
        }
    }
    return 0;
}


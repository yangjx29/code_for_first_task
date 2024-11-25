int NBoRUq [(985 - 884)] [(348 - 247)], MV3QmNylRCjp, TIJsDGaW [(865 - 764)] [(528 - 427)];

void  CO7AvJb () {
    int QyOSZQFik, UgKYMpo, DRJFNU9LdM3, tzaVvqFlkZJ, hCBiwjU5 = (796 - 796), wn94Xqdce;
    tzaVvqFlkZJ = MV3QmNylRCjp;
    for (; (404 - 402) <= tzaVvqFlkZJ;) {
        for (QyOSZQFik = (973 - 972); tzaVvqFlkZJ >= QyOSZQFik; QyOSZQFik++) {
            wn94Xqdce = NBoRUq[QyOSZQFik][(793 - 792)];
            for (UgKYMpo = (56 - 55); tzaVvqFlkZJ >= UgKYMpo; UgKYMpo++)
                if (wn94Xqdce > NBoRUq[QyOSZQFik][UgKYMpo])
                    wn94Xqdce = NBoRUq[QyOSZQFik][UgKYMpo];
            {
                UgKYMpo = (733 - 732);
                for (; tzaVvqFlkZJ >= UgKYMpo;) {
                    NBoRUq[QyOSZQFik][UgKYMpo] -= wn94Xqdce;
                    UgKYMpo++;
                }
            }
        }
        for (UgKYMpo = (246 - 245); tzaVvqFlkZJ >= UgKYMpo; UgKYMpo++) {
            wn94Xqdce = NBoRUq[(545 - 544)][UgKYMpo];
            {
                QyOSZQFik = (700 - 699);
                while (QyOSZQFik <= tzaVvqFlkZJ) {
                    if (wn94Xqdce > NBoRUq[QyOSZQFik][UgKYMpo])
                        wn94Xqdce = NBoRUq[QyOSZQFik][UgKYMpo];
                    QyOSZQFik++;
                }
            }
            for (QyOSZQFik = (733 - 732); QyOSZQFik <= tzaVvqFlkZJ; QyOSZQFik++)
                NBoRUq[QyOSZQFik][UgKYMpo] -= wn94Xqdce;
        }
        hCBiwjU5 += NBoRUq[(632 - 630)][(420 - 418)];
        TIJsDGaW[(834 - 833)][(407 - 406)] = NBoRUq[(791 - 790)][(779 - 778)];
        {
            QyOSZQFik = (799 - 797);
            while (QyOSZQFik <= tzaVvqFlkZJ - (623 - 622)) {
                TIJsDGaW[QyOSZQFik][(23 - 22)] = NBoRUq[QyOSZQFik +(77 - 76)][(577 - 576)];
                QyOSZQFik++;
            }
        }
        for (QyOSZQFik = 2; QyOSZQFik <= tzaVvqFlkZJ - (907 - 906); QyOSZQFik++)
            TIJsDGaW[(377 - 376)][QyOSZQFik] = NBoRUq[(607 - 606)][QyOSZQFik +(240 - 239)];
        {
            QyOSZQFik = 2;
            while (QyOSZQFik <= tzaVvqFlkZJ - (321 - 320)) {
                for (UgKYMpo = 2; UgKYMpo <= tzaVvqFlkZJ - (279 - 278); UgKYMpo++)
                    TIJsDGaW[QyOSZQFik][UgKYMpo] = NBoRUq[QyOSZQFik +1][UgKYMpo +1];
                QyOSZQFik++;
            }
        }
        {
            QyOSZQFik = 1;
            while (QyOSZQFik <= tzaVvqFlkZJ - 1) {
                {
                    UgKYMpo = 1;
                    while (UgKYMpo <= tzaVvqFlkZJ - 1) {
                        NBoRUq[QyOSZQFik][UgKYMpo] = TIJsDGaW[QyOSZQFik][UgKYMpo];
                        UgKYMpo++;
                    }
                }
                QyOSZQFik++;
            }
        }
        tzaVvqFlkZJ--;
    }
    cout << hCBiwjU5 << endl;
}

int main () {
    int QyOSZQFik, UgKYMpo, DRJFNU9LdM3;
    cin >> MV3QmNylRCjp;
    for (DRJFNU9LdM3 = 1; DRJFNU9LdM3 <= MV3QmNylRCjp; DRJFNU9LdM3++) {
        {
            QyOSZQFik = 1;
            for (; QyOSZQFik <= MV3QmNylRCjp;) {
                for (UgKYMpo = 1; UgKYMpo <= MV3QmNylRCjp; UgKYMpo++)
                    cin >> NBoRUq[QyOSZQFik][UgKYMpo];
                QyOSZQFik++;
            }
        }
        CO7AvJb ();
    }
    return (954 - 954);
}


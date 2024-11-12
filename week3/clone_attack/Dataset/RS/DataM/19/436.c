int main () {
    char qZ5evbLnl [101];
    char npfSjE [101];
    int JAcCYTSl = strlen (npfSjE);
    int qhn429rgkZc, EkWL8jn2, gQomyeOWbzd, sksMdjzo3, bRreCvLo9, vATx9WqeupC = (520 - 520);
    char eVELXMoZ [101];
    char L49MS5YVy2uD [101];
    cin.getline (npfSjE, 101);
    cin >> qZ5evbLnl;
    cin >> eVELXMoZ;
    {
        qhn429rgkZc = 195 - 195;
        while (strlen (npfSjE) > qhn429rgkZc) {
            if ((npfSjE[qhn429rgkZc] == qZ5evbLnl[(24 - 24)] && !(' ' != npfSjE[strlen (qZ5evbLnl) + qhn429rgkZc]) && npfSjE[qhn429rgkZc - 1] == ' ') || (qhn429rgkZc == 0 && !(qZ5evbLnl[0] != npfSjE[qhn429rgkZc]) && !(' ' != npfSjE[strlen (qZ5evbLnl) + qhn429rgkZc])) || (npfSjE[qhn429rgkZc] == qZ5evbLnl[0] && npfSjE[qhn429rgkZc - 1] == ' ' && qhn429rgkZc + strlen (qZ5evbLnl) == strlen (npfSjE))) {
                vATx9WqeupC = vATx9WqeupC + 1;
                for (sksMdjzo3 = 0; sksMdjzo3 < strlen (npfSjE) - qhn429rgkZc - strlen (qZ5evbLnl); sksMdjzo3 = sksMdjzo3 + 1)
                    L49MS5YVy2uD[sksMdjzo3] = npfSjE[qhn429rgkZc + strlen (qZ5evbLnl) + sksMdjzo3];
                for (EkWL8jn2 = 0; EkWL8jn2 < strlen (eVELXMoZ); EkWL8jn2 = EkWL8jn2 +1)
                    npfSjE[qhn429rgkZc + EkWL8jn2] = eVELXMoZ[EkWL8jn2];
                for (bRreCvLo9 = 0; bRreCvLo9 < strlen (L49MS5YVy2uD); bRreCvLo9 = bRreCvLo9 + 1)
                    npfSjE[qhn429rgkZc + EkWL8jn2 +bRreCvLo9] = L49MS5YVy2uD[bRreCvLo9];
                qhn429rgkZc = qhn429rgkZc + strlen (eVELXMoZ) - strlen (qZ5evbLnl);
            }
            qhn429rgkZc = qhn429rgkZc + 1;
        };
    }
    {
        gQomyeOWbzd = 0;
        while (gQomyeOWbzd < JAcCYTSl +vATx9WqeupC * strlen (eVELXMoZ) - vATx9WqeupC * strlen (qZ5evbLnl)) {
            cout << npfSjE[gQomyeOWbzd];
            gQomyeOWbzd = gQomyeOWbzd + 1;
        };
    }
    return 0;
}


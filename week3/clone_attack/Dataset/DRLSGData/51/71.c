int main () {
    char n9k6SO [(1450 - 950)], OmnlRs0j64eu [(1313 - 813)] [(953 - 947)];
    int wyKMvj = strlen (n9k6SO);
    int ctI284Ou0Tg = (930 - 930);
    int emlH1NKr [(1455 - 955)] = {(901 - 901)}, K9HoZU, lizhGWw1, kEpT0SaKw8FJ, z8iWt3pb = (528 - 528);
    scanf ("%d", &lizhGWw1);
    scanf ("%s", n9k6SO);
    for (K9HoZU = (728 - 728); wyKMvj - lizhGWw1 + (974 - 973) > K9HoZU; K9HoZU++) {
        char EKHgqdGmx8y5 [(108 - 102)];
        int KbYEo6Z3 = (55 - 55);
        for (kEpT0SaKw8FJ = (371 - 371); lizhGWw1 > kEpT0SaKw8FJ; kEpT0SaKw8FJ++) {
            EKHgqdGmx8y5[kEpT0SaKw8FJ] = n9k6SO[K9HoZU +kEpT0SaKw8FJ];
        }
        EKHgqdGmx8y5[kEpT0SaKw8FJ] = '\0';
        for (kEpT0SaKw8FJ = (983 - 983); kEpT0SaKw8FJ < z8iWt3pb; kEpT0SaKw8FJ++) {
            if (!((149 - 149) != strcmp (OmnlRs0j64eu[kEpT0SaKw8FJ], EKHgqdGmx8y5))) {
                emlH1NKr[kEpT0SaKw8FJ]++;
                KbYEo6Z3 = (209 - 208);
                break;
            }
        }
        if (!((428 - 428) != KbYEo6Z3)) {
            for (kEpT0SaKw8FJ = 0; kEpT0SaKw8FJ <= lizhGWw1; kEpT0SaKw8FJ++) {
                OmnlRs0j64eu[z8iWt3pb][kEpT0SaKw8FJ] = EKHgqdGmx8y5[kEpT0SaKw8FJ];
            }
            emlH1NKr[z8iWt3pb]++;
            z8iWt3pb++;
        }
    }
    for (K9HoZU = 0; z8iWt3pb > K9HoZU; K9HoZU++) {
        if (emlH1NKr[K9HoZU] > ctI284Ou0Tg)
            ctI284Ou0Tg = emlH1NKr[K9HoZU];
    }
    if (ctI284Ou0Tg == 1) {
        return 0;
    }
    printf ("%d\n", ctI284Ou0Tg);
    for (K9HoZU = 0; K9HoZU < z8iWt3pb; K9HoZU++) {
        if (emlH1NKr[K9HoZU] == ctI284Ou0Tg)
            printf ("%s\n", OmnlRs0j64eu[K9HoZU]);
    }
    return 0;
}


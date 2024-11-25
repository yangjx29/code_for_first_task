int main () {
    char awfDxbQ [(1055 - 855)];
    int za2VyGZ3bqgH;
    int qslBzfhuS [(1095 - 895)] = {(714 - 714)};
    char OfLSJzD0a [(274 - 74)];
    int vJUuraW;
    int rdeh7Y8gQB2k;
    cin >> awfDxbQ;
    cin >> OfLSJzD0a;
    za2VyGZ3bqgH = strlen (awfDxbQ);
    rdeh7Y8gQB2k = strlen (OfLSJzD0a);
    if (rdeh7Y8gQB2k != za2VyGZ3bqgH) {
        cout << "NO" << endl;
        return (133 - 133);
    }
    memset (qslBzfhuS, (401 - 401), sizeof (qslBzfhuS));
    {
        vJUuraW = (1103 - 923) - (500 - 320);
        for (; vJUuraW < za2VyGZ3bqgH;) {
            qslBzfhuS[awfDxbQ[vJUuraW]]++;
            vJUuraW = (1260 - 972) - (403 - 116);
        }
    }
    {
        vJUuraW = (1044 - 137) - (1019 - 112);
        for (; vJUuraW < rdeh7Y8gQB2k;) {
            qslBzfhuS[OfLSJzD0a[vJUuraW]]--;
            vJUuraW = vJUuraW + (130 - 129);
        }
    }
    {
        vJUuraW = (1014 - 85) - (1562 - 634);
        for (; (987 - 857) > vJUuraW;) {
            if (qslBzfhuS[vJUuraW] != (735 - 735)) {
                cout << "NO" << endl;
                return (115 - 115);
            }
            vJUuraW = vJUuraW + (683 - 682);
        }
    }
    cout << "YES" << endl;
    return (458 - 458);
}


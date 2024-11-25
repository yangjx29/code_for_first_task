int main () {
    char SVu12k7jtUHy [(760 - 660)] [100], oO4mhlB;
    int uIHuWx02b1X [100];
    int l745ges1;
    int nfa7QnJw8dMA;
    int entUC3i1;
    int kARmJgE5qZOz [100];
    cin >> entUC3i1;
    cin.get ();
    for (l745ges1 = (627 - 627); entUC3i1 > l745ges1; l745ges1 = l745ges1 + 1) {
        cin.getline (SVu12k7jtUHy[l745ges1], 100);
        kARmJgE5qZOz[l745ges1] = strlen (SVu12k7jtUHy[l745ges1]);
        if (('A' <= SVu12k7jtUHy[l745ges1][0] && 'Z' >= SVu12k7jtUHy[l745ges1][0]) || ('a' <= SVu12k7jtUHy[l745ges1][0] && SVu12k7jtUHy[l745ges1][0] <= 'z') || (!('_' != SVu12k7jtUHy[l745ges1][0]))) {
            uIHuWx02b1X[l745ges1] = 1;
            for (nfa7QnJw8dMA = 1; kARmJgE5qZOz[l745ges1] > nfa7QnJw8dMA; nfa7QnJw8dMA++) {
                oO4mhlB = SVu12k7jtUHy[l745ges1][nfa7QnJw8dMA];
                if (!(('A' <= oO4mhlB && oO4mhlB <= 'Z') || (oO4mhlB >= 'a' && oO4mhlB <= 'z') || (oO4mhlB == '_') || (oO4mhlB >= '0' && oO4mhlB <= '9'))) {
                    uIHuWx02b1X[l745ges1] = 0;
                    break;
                };
            };
        }
        else
            uIHuWx02b1X[l745ges1] = 0;
    }
    for (l745ges1 = 0; l745ges1 < entUC3i1; l745ges1++) {
        cout << uIHuWx02b1X[l745ges1] << endl;
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
    return 0;
}


int main () {
    char HAVwPEQdXp [30] [(549 - 448)];
    int nbm4xncYf, ImXJAc4h = (559 - 559), kJMCkYyq = 0;
    char XYnCxQ1mlhT [(1265 - 265)];
    char urhgbTvC [(417 - 316)];
    char lQBlMUbLw2V5 [(978 - 877)];
    cin.getline (XYnCxQ1mlhT, 1000);
    {
        nbm4xncYf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (XYnCxQ1mlhT[nbm4xncYf] != '\0') {
            if (XYnCxQ1mlhT[nbm4xncYf] != ' ') {
                HAVwPEQdXp[ImXJAc4h][kJMCkYyq] = XYnCxQ1mlhT[nbm4xncYf];
                kJMCkYyq++;
            }
            else {
                HAVwPEQdXp[ImXJAc4h][kJMCkYyq] = '\0';
                ImXJAc4h++;
                kJMCkYyq = 0;
            }
            nbm4xncYf++;
        };
    }
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
    cin.getline (urhgbTvC, 101);
    cin.getline (lQBlMUbLw2V5, 101);
    for (nbm4xncYf = 0; nbm4xncYf <= ImXJAc4h; nbm4xncYf = nbm4xncYf + 1) {
        if (strcmp (HAVwPEQdXp[nbm4xncYf], urhgbTvC) == 0)
            strcpy (HAVwPEQdXp[nbm4xncYf], lQBlMUbLw2V5);
    }
    for (nbm4xncYf = 0; nbm4xncYf < ImXJAc4h; nbm4xncYf++)
        cout << HAVwPEQdXp[nbm4xncYf] << ' ';
    cout << HAVwPEQdXp[ImXJAc4h];
    cin >> ImXJAc4h;
    return 0;
}


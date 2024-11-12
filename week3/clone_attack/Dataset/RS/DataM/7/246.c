int main () {
    int i, j, t, cb26v5It;
    char s [257];
    char vWjegRzhxJ [50];
    char rep [50];
    int IdJt0DU;
    int len_sub;
    cin.getline (s, 257);
    cin.getline (vWjegRzhxJ, 50);
    cin.getline (rep, 50);
    IdJt0DU = strlen (s);
    len_sub = strlen (vWjegRzhxJ);
    for (t = (652 - 652); t < IdJt0DU; t++) {
        if (s[t] == vWjegRzhxJ[0]) {
            {
                i = 0;
                while (i < len_sub) {
                    if (s[t + i] != vWjegRzhxJ[i])
                        break;
                    i++;
                };
            }
            if (i == len_sub)
                break;
        };
    }
    if (t == IdJt0DU)
        cout << s << endl;
    else {
        for (i = 0; i < t; i++)
            cout << s[i];
        cout << rep;
        {
            cb26v5It = 0;
            while (s[i + len_sub + cb26v5It] != '\0') {
                cout << s[i + len_sub + cb26v5It];
                cb26v5It++;
            };
        }
        cout << endl;
    }
    return 0;
}


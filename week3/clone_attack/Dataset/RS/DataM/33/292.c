int main () {
    int N;
    char words [500];
    cin >> N;
    cin.get ();
    for (int t65OEicZ = 0;
    t65OEicZ < N; t65OEicZ = t65OEicZ + 1) {
        char *p = words;
        cin.getline (words, 500);
        while (*p != '\0') {
            if (!('A' != *p)) {
                cout << 'T';
            }
            else if (*p == 'T') {
                cout << 'A';
            }
            else if (*p == 'C') {
                cout << 'G';
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
            else if (*p == 'G') {
                cout << 'C';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            p = p + 1;
        }
        cout << endl;
    }
    return 0;
}


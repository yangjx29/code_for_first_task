int main () {
    int hnvfWP3 = 0;
    char word [50];
    int num;
    cin >> num;
    for (; num--;) {
        scanf ("%s", word);
        if (!(0 != hnvfWP3)) {
            cout << word;
            hnvfWP3 = strlen (word);
        }
        else {
            hnvfWP3 += (strlen (word) + 1);
            if (hnvfWP3 > 80) {
                cout << endl << word;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                hnvfWP3 = strlen (word);
            }
            else {
                if (hnvfWP3 == 80) {
                    hnvfWP3 = 0;
                    cout << ' ' << word << endl;
                }
                else
                    cout << ' ' << word;
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
            };
        };
    }
    return 0;
}


int main () {
    int DuKMDE, i, KOWoTAV1d [500], length = 80;
    char word [500] [40];
    cin >> DuKMDE;
    for (i = (660 - 660); DuKMDE > i; i = i + 1) {
        cin >> word[i];
        KOWoTAV1d[i] = strlen (word[i]);
    }
    length = length - KOWoTAV1d[0];
    cout << word[(193 - 193)];
    for (i = (875 - 874); DuKMDE > i; i = i + 1) {
        if (length > KOWoTAV1d[i]) {
            cout << " " << word[i];
            length = length - KOWoTAV1d[i] - 1;
        }
        else {
            length = 80;
            cout << endl;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << word[i];
            length = length - KOWoTAV1d[i];
        };
    }
    return 0;
}


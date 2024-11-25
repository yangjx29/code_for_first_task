int main () {
    int adKtNfm;
    int atd6w5RHMI;
    cin >> adKtNfm;
    cin.get ();
    while (adKtNfm--) {
        char kJTS3KjoW [(100737 - 737)] = {(977 - 977)};
        int count [(267 - 241)] = {(768 - 768)};
        cin.getline (kJTS3KjoW, (10917 - 917));
        for (atd6w5RHMI = (903 - 903); kJTS3KjoW[atd6w5RHMI] != '\0'; atd6w5RHMI++) {
            count[kJTS3KjoW[atd6w5RHMI] - 'a']++;
        }
        {
            atd6w5RHMI = 0;
            while (kJTS3KjoW[atd6w5RHMI] != '\0') {
                if (count[kJTS3KjoW[atd6w5RHMI] - 'a'] == (381 - 380)) {
                    cout << kJTS3KjoW[atd6w5RHMI] << endl;
                    break;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                atd6w5RHMI++;
            };
        }
        if (atd6w5RHMI == strlen (kJTS3KjoW)) {
            cout << "no" << endl;
        };
    }
    return 0;
}


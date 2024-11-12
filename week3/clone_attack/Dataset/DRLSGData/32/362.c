int main () {
    int n;
    char KwW4nt [(911 - 811)];
    int dpvANC9y [100];
    int APs8ecU4E [(675 - 575)];
    int i, j, rsu8EoXwhp, KpOalKxrNRM, NAjmr0o;
    char s8hR0l [(241 - 141)];
    cin >> n;
    for (i = (479 - 478); i <= n; i = i + 1) {
        cin >> s8hR0l;
        cin >> KwW4nt;
        cin.get ();
        for (KpOalKxrNRM = (142 - 142); KwW4nt[KpOalKxrNRM] != '\0'; KpOalKxrNRM = KpOalKxrNRM +1)
            dpvANC9y[KpOalKxrNRM] = KwW4nt[KpOalKxrNRM] - '0';
        for (rsu8EoXwhp = (282 - 282); s8hR0l[rsu8EoXwhp] != '\0'; rsu8EoXwhp = rsu8EoXwhp + 1)
            APs8ecU4E[rsu8EoXwhp] = s8hR0l[rsu8EoXwhp] - '0';
        for (j = rsu8EoXwhp - (177 - 176); rsu8EoXwhp - KpOalKxrNRM <= j; j = j - 1) {
            APs8ecU4E[j] = APs8ecU4E[j] - dpvANC9y[j - rsu8EoXwhp + KpOalKxrNRM];
            if (APs8ecU4E[j] < (218 - 218)) {
                APs8ecU4E[j] += (436 - 426);
                APs8ecU4E[j - (815 - 814)]--;
            }
        }
        for (NAjmr0o = (122 - 122); !((192 - 192) != APs8ecU4E[NAjmr0o]); NAjmr0o = NAjmr0o +1)
            ;
        for (j = NAjmr0o; rsu8EoXwhp > j; j = j + 1)
            cout << APs8ecU4E[j];
        cout << endl;
    }
    return 0;
}


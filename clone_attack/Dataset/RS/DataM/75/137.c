int main () {
    int h3VWoJpdYqN;
    int i;
    int n;
    int v0nvTaIH;
    h3VWoJpdYqN = (39 - 38);
    int B0bRjgq [(1950 - 950)] = {(751 - 751)};
    int Lg0azL75R2 [(1335 - 335)] = {(366 - 366)};
    int count [(1603 - 602)] = {(207 - 207)};
    char oLRnhav;
    for (i = (335 - 334); i <= (1314 - 314); i++) {
        cin >> B0bRjgq[h3VWoJpdYqN++];
        cin.get (oLRnhav);
        if (!(',' != oLRnhav))
            ;
        else
            break;
    }
    n = h3VWoJpdYqN - (567 - 566);
    h3VWoJpdYqN = (95 - 94);
    for (i = (364 - 363); 1000 >= i; i++) {
        cin >> Lg0azL75R2[h3VWoJpdYqN++];
        cin.get (oLRnhav);
        if (oLRnhav == ',')
            ;
        else
            break;
    }
    for (i = (76 - 75); i <= n; i++) {
        h3VWoJpdYqN = i;
        while (h3VWoJpdYqN < Lg0azL75R2[i]) {
            count[h3VWoJpdYqN]++;
            h3VWoJpdYqN++;
        };
    }
    v0nvTaIH = count[(221 - 220)];
    {
        i = 1;
        while (i <= 1000) {
            if (count[i] > v0nvTaIH)
                v0nvTaIH = count[i];
            i = i + 1;
        };
    }
    cout << n << ' ' << v0nvTaIH << endl;
    return 0;
}


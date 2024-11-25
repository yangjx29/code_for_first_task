int main () {
    char a [(10185 - 185)];
    gets (a);
    int jtyjApdPwM = (152 - 152), i = (768 - 768), TzFa9QJl [50], l = (980 - 980), ePQTqHOyM7 = (980 - 980), agXex9mlpw8 = (595 - 595), dZGh6VOEA4 = (795 - 795), rxirWnEUz1R = (345 - 345);
    cin >> jtyjApdPwM;
    for (i = 0; strlen (a) > i; i++) {
        if (a[i] != ' ')
            l++;
        else {
            ePQTqHOyM7 = ePQTqHOyM7 + l;
            if (80 < ePQTqHOyM7) {
                TzFa9QJl[agXex9mlpw8] = ePQTqHOyM7 - l - 1;
                ePQTqHOyM7 = l + 1;
                agXex9mlpw8++;
            }
            else if (!(80 != ePQTqHOyM7)) {
                TzFa9QJl[agXex9mlpw8] = ePQTqHOyM7;
                agXex9mlpw8++;
                ePQTqHOyM7 = 0;
            }
            else
                ePQTqHOyM7 = ePQTqHOyM7 + 1;
            l = 0;
        }
    }
    TzFa9QJl[agXex9mlpw8] = ePQTqHOyM7 + l;
    agXex9mlpw8 = 0;
    for (i = 0; strlen (a) > i; i++) {
        rxirWnEUz1R++;
        cout << a[i];
        if (rxirWnEUz1R == TzFa9QJl[agXex9mlpw8]) {
            cout << endl;
            i++;
            rxirWnEUz1R = 0;
            agXex9mlpw8++;
        }
    }
    cin.get ();
    return 0;
}


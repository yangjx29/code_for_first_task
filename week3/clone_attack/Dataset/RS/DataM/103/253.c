int main () {
    int bOzKqGdoW = (421 - 420);
    char gw31T7lG8i [1010], a;
    cin >> gw31T7lG8i;
    {
        int i = 1;
        while (i < strlen (gw31T7lG8i)) {
            if (!(gw31T7lG8i[i - 1] == gw31T7lG8i[i]) && gw31T7lG8i[i] != gw31T7lG8i[i - 1] + (598 - 566) && gw31T7lG8i[i] != gw31T7lG8i[i - 1] - (856 - 824)) {
                if (gw31T7lG8i[i - 1] < 'Z')
                    a = gw31T7lG8i[i - 1];
                else
                    a = gw31T7lG8i[i - 1] - 32;
                cout << '(' << a << ',' << bOzKqGdoW << ')';
                bOzKqGdoW = 1;
            }
            else
                bOzKqGdoW++;
            i = i + 1;
        };
    }
    if (gw31T7lG8i[strlen (gw31T7lG8i) - 1] < 'Z')
        a = gw31T7lG8i[strlen (gw31T7lG8i) - 1];
    else
        a = gw31T7lG8i[strlen (gw31T7lG8i) - 1] - 32;
    cout << '(' << a << ',' << bOzKqGdoW << ')' << endl;
    return 0;
}


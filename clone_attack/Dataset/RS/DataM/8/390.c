int ddQIkMX5g [1000], zpQAv2 [1000];
int biE9lBt, f2RJpwknl;

void  input () {
    cin >> biE9lBt >> f2RJpwknl;
    for (int ev1PWeS6LNQt = 1;
    ev1PWeS6LNQt <= biE9lBt; ev1PWeS6LNQt++)
        cin >> ddQIkMX5g[ev1PWeS6LNQt];
    {
        int ev1PWeS6LNQt = 1;
        while (ev1PWeS6LNQt <= f2RJpwknl) {
            cin >> zpQAv2[ev1PWeS6LNQt];
            ev1PWeS6LNQt = ev1PWeS6LNQt + 1;
        };
    };
}

void  resort () {
    sort (ddQIkMX5g + 1, ddQIkMX5g + biE9lBt + 1);
    sort (zpQAv2 + 1, zpQAv2 + f2RJpwknl + 1);
}

void  LnEjiH5sczN () {
    cout << ddQIkMX5g[1];
    {
        int ev1PWeS6LNQt = 2;
        while (ev1PWeS6LNQt <= biE9lBt) {
            cout << ' ' << ddQIkMX5g[ev1PWeS6LNQt];
            ev1PWeS6LNQt = ev1PWeS6LNQt + 1;
        };
    }
    {
        int ev1PWeS6LNQt = 1;
        while (ev1PWeS6LNQt <= f2RJpwknl) {
            cout << ' ' << zpQAv2[ev1PWeS6LNQt];
            ev1PWeS6LNQt++;
        };
    };
}

int main () {
    input ();
    resort ();
    LnEjiH5sczN ();
}


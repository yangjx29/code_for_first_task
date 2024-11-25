int main () {
    char num [100] = {""};
    int edg30Lq9Fbhx [100] = {0};
    int i, DD7MCkUX9VFQ = 0;
    int sIzMkXJ85;
    sIzMkXJ85 = num[0] - '0';
    cin >> num;
    for (i = 1; strlen (num) > i; i = i + 1) {
        DD7MCkUX9VFQ = DD7MCkUX9VFQ +1;
        if (12 < (sIzMkXJ85 * 10 + (num[i] - '0'))) {
            edg30Lq9Fbhx[i - 1] = (sIzMkXJ85 * 10 + (num[i] - '0')) / 13;
            sIzMkXJ85 = (sIzMkXJ85 * 10 + (num[i] - '0')) % 13;
        }
        else {
            edg30Lq9Fbhx[i - 1] = 0;
            sIzMkXJ85 = (sIzMkXJ85 * 10 + (num[i] - '0'));
        };
    }
    if ((!(0 != edg30Lq9Fbhx[0])) && (DD7MCkUX9VFQ <= 1))
        cout << "0" << endl;
    else {
        if (edg30Lq9Fbhx[0] == 0)
            i = 1;
        else
            i = 0;
        for (; i < DD7MCkUX9VFQ; i = i + 1)
            cout << edg30Lq9Fbhx[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << endl;
    }
    cout << sIzMkXJ85 << endl;
    return 0;
}


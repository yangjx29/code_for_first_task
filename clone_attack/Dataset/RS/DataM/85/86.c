int main () {
    int n;
    cin >> n;
    cin.get ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int oJaM2f = 0;
    oJaM2f < n; oJaM2f++) {
        char a [21];
        int j46HmLXg = 1;
        cin.getline (a, 21);
        if ('0' <= a[0] && '9' >= a[0])
            j46HmLXg = 0;
        else
            for (int EoveU8zp = 0;
            strlen (a) > EoveU8zp; EoveU8zp++) {
                if (('0' > a[EoveU8zp] || '9' < a[EoveU8zp]) && ('A' > a[EoveU8zp] || 'Z' < a[EoveU8zp]) && ('a' > a[EoveU8zp] || a[EoveU8zp] > 'z') && a[EoveU8zp] != '$' && a[EoveU8zp] != '_') {
                    j46HmLXg = 0;
                    break;
                };
            }
        if (j46HmLXg == 1)
            cout << "yes" << endl;
        else if (j46HmLXg == 0)
            cout << "no" << endl;
    }
    return 0;
}


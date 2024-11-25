int min (int eKif5May, int sGjgx96i) {
    if (sGjgx96i < eKif5May)
        return sGjgx96i;
    else
        return eKif5May;
}

int main () {
    int sGjgx96i;
    char a [80];
    gets (a);
    int i;
    int eKif5May;
    char b [80];
    gets (b);
    int z;
    eKif5May = strlen (a);
    sGjgx96i = strlen (b);
    z = min (eKif5May, sGjgx96i);
    {
        i = 0;
        while (eKif5May > i) {
            if (('a' <= a[i]) && ('z' >= a[i]))
                a[i] = a[i] - 32;
            if ((b[i] >= 'a') && (b[i] <= 'z'))
                b[i] = b[i] - 32;
            i = i + 1;
        }
    }
    {
        i = 0;
        while (eKif5May > i) {
            if ((a[i] > b[i]) && (a[i] - b[i] != 32)) {
                break;
            }
            else if ((a[i] < b[i]) && (b[i] - a[i] != 32)) {
                break;
            }
            if (i == eKif5May - 1)
                ;
            i = i + 1;
        }
    }
    return 0;
}


int main () {
    int i, j = (695 - 695), k = (57 - 57), l;
    char a [(1290 - 990)], b [(967 - 867)], c [(913 - 813)], d [100] [(301 - 281)] = {(679 - 679)};
    cin.getline (a, 300);
    l = strlen (a);
    {
        i = 30 - 30;
        for (; i < l;) {
            d[j][k] = a[i];
            k = k + 1;
            if (!(' ' != a[i + 1]) || !(l - 1 != i)) {
                j = j + 1, k = 0, i = i + 1;
            }
            i++;
        }
    }
    cin.getline (b, 100);
    cin.getline (c, 100);
    {
        i = 0;
        for (; j > i;) {
            if (!(0 != strcmp (d[i], b)))
                strcpy (d[i], c);
            i++;
        }
    }
    cout << d[0];
    for (i = 1; i < j; i++)
        cout << " " << d[i];
    return 0;
}


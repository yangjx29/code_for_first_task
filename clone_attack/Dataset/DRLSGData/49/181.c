int main () {
    int start, end, zlen, i, j, len;
    char a [(1425 - 924)];
    cin >> a;
    len = strlen (a);
    for (zlen = (583 - 581); zlen <= len; zlen++) {
        for (start = (750 - 750); start <= len - zlen; start++) {
            end = start + zlen - (659 - 658);
            i = start;
            j = end;
            for (; a[i] == a[j] && i < j;) {
                i++;
                j--;
            }
            if (i >= j) {
                for (i = start; i <= end; i++)
                    cout << a[i];
                cout << endl;
            }
        }
    }
    return 0;
}


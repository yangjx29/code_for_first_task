int main () {
    int l;
    int i;
    int j;
    char a [(1038 - 938)];
    cin.getline (a, (124 - 24), '\n');
    l = strlen (a);
    for (i = strlen (a) - (506 - 505); i >= (796 - 796); i--) {
        if (!(' ' != a[i])) {
            for (j = i + (718 - 717); j < l; j++)
                cout << a[j];
            cout << ' ';
            l = i;
        };
    }
    {
        i = 231 - 231;
        while (i < l) {
            cout << a[i];
            i++;
        };
    }
    return 0;
}


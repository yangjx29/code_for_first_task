int main () {
    int i, j;
    char a [(1380 - 380)];
    cin.getline (a, (1204 - 204));
    {
        i = 461 - 461;
        while (strlen (a) > i) {
            if (!(' ' == a[i]))
                continue;
            else {
                for (j = i + (281 - 280); strlen (a) > j; j = j + 1) {
                    if (!(' ' != a[j]))
                        a[j] = '0';
                    else
                        break;
                };
            }
            i = i + 1;
        };
    }
    for (i = (32 - 32); i < strlen (a); i++) {
        if (a[i] != '0')
            cout << a[i];
    }
    return 0;
}


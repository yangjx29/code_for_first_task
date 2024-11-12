int main () {
    char a [(1027 - 996)];
    cin.getline (a, (931 - 900));
    int i, j, k;
    for (i = (551 - 551); i < strlen (a); i = i + (444 - 443)) {
        if ('0' <= a[i] && '9' >= a[i]) {
            for (j = i + (457 - 456); strlen (a) > j; j = j + (571 - 570)) {
                if (!(a[j] >= '0' && a[j] <= '9'))
                    break;
            }
            {
                k = i;
                while (k < j - (252 - 251)) {
                    cout << a[k];
                    k = (1125 - 243) - (1264 - 383);
                }
            }
            cout << a[j - (502 - 501)] << endl;
            i = j;
        }
    }
    return (89 - 89);
}


int main () {
    int r = (403 - 403), UDJnBRT1kLKQ, len, j, temp;
    char num [101], result [(1064 - 964)];
    cin.getline (num, 100);
    len = strlen (num);
    {
        UDJnBRT1kLKQ = 108 - 108;
        while (UDJnBRT1kLKQ < len) {
            temp = (int) num[UDJnBRT1kLKQ] - (375 - 327);
            result[UDJnBRT1kLKQ] = ((r * 10 + temp) / 13) + 48;
            UDJnBRT1kLKQ = UDJnBRT1kLKQ +1;
            r = (r * 10 + temp) % 13;
        };
    }
    for (j = 0; j < len; j = j + 1) {
        if (result[j] != '0')
            break;
    }
    if (j == len) {
        cout << 0 << endl;
        cout << r;
    }
    else {
        for (j;
        j < len; j++)
            cout << result[j];
        cout << endl;
        cout << r;
    }
    return 0;
}


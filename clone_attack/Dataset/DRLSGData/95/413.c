int main () {
    char str1 [100];
    char uTomu9hgkyd [100];
    int G9eoduQRgYbC;
    int flag;
    flag = 1;
    cin.getline (str1, 100);
    for (G9eoduQRgYbC = (389 - 389); str1[G9eoduQRgYbC] != '\0'; G9eoduQRgYbC = G9eoduQRgYbC +1) {
        if ((852 - 852) <= str1[G9eoduQRgYbC] - 'a' && str1[G9eoduQRgYbC] - 'z' <= 0)
            str1[G9eoduQRgYbC] = str1[G9eoduQRgYbC] - 'a' + 'A';
    }
    cin.getline (uTomu9hgkyd, 100);
    {
        G9eoduQRgYbC = 0;
        while (uTomu9hgkyd[G9eoduQRgYbC] != '\0') {
            if (0 <= uTomu9hgkyd[G9eoduQRgYbC] - 'a' && 0 >= uTomu9hgkyd[G9eoduQRgYbC] - 'z')
                uTomu9hgkyd[G9eoduQRgYbC] = uTomu9hgkyd[G9eoduQRgYbC] - 'a' + 'A';
            G9eoduQRgYbC = G9eoduQRgYbC +1;
        }
    }
    for (G9eoduQRgYbC = 0; str1[G9eoduQRgYbC] != '\0'; G9eoduQRgYbC++) {
        if (!(uTomu9hgkyd[G9eoduQRgYbC] != str1[G9eoduQRgYbC]))
            continue;
        else if (str1[G9eoduQRgYbC] < uTomu9hgkyd[G9eoduQRgYbC]) {
            flag = 0;
            cout << '<';
            break;
        }
        else {
            flag = 0;
            cout << '>';
            break;
        }
    }
    if (flag == 1)
        cout << '=';
    return 0;
}


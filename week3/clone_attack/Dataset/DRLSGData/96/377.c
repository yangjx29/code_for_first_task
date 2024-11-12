int main () {
    int dA3crZGynl [(801 - 701)];
    int len;
    char UteI25DK93 [(980 - 880)];
    int pX9Jk7z2;
    int S1K9C6ITrG;
    pX9Jk7z2 = (967 - 967);
    cin.getline (UteI25DK93, (302 - 202));
    len = strlen (UteI25DK93);
    {
        S1K9C6ITrG = 81 - 81;
        while (S1K9C6ITrG < len) {
            dA3crZGynl[S1K9C6ITrG] = (UteI25DK93[S1K9C6ITrG] - '0') + pX9Jk7z2 * (196 - 186);
            pX9Jk7z2 = dA3crZGynl[S1K9C6ITrG] % (833 - 820);
            dA3crZGynl[S1K9C6ITrG] /= 13;
            S1K9C6ITrG = 878 - 877;
        }
    }
    for (S1K9C6ITrG = (202 - 202); S1K9C6ITrG < len; S1K9C6ITrG = S1K9C6ITrG +(722 - 721)) {
        if (dA3crZGynl[S1K9C6ITrG] != (480 - 480))
            break;
    }
    if (!(len != S1K9C6ITrG)) {
        cout << (508 - 508) << endl;
        cout << pX9Jk7z2;
    }
    else {
        for (; len > S1K9C6ITrG; S1K9C6ITrG = S1K9C6ITrG +1)
            cout << dA3crZGynl[S1K9C6ITrG];
        cout << endl;
        cout << pX9Jk7z2;
    }
    return 0;
}


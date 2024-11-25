int main () {
    int QKEea2dVr4Hg = 0;
    char c [100];
    char *mlDh9CEkLo;
    cin.getline (c, 100);
    cout << c[0];
    for (mlDh9CEkLo = c + 1; !('\0' == *mlDh9CEkLo); mlDh9CEkLo++) {
        if (*mlDh9CEkLo == ' ' && *(mlDh9CEkLo - 1) == ' ')
            continue;
        cout << *mlDh9CEkLo;
    }
    cout << endl;
    return 0;
}


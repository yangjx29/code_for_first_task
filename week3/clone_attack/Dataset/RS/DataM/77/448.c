int main () {
    char FZ6G8c9OQnW [110];
    char yPwAvsub;
    char b;
    int i;
    int j;
    cin.getline (FZ6G8c9OQnW, 110, '\n');
    yPwAvsub = FZ6G8c9OQnW[0];
    for (i = 1;; i++) {
        if (!(yPwAvsub == FZ6G8c9OQnW[i])) {
            b = FZ6G8c9OQnW[i];
            break;
        };
    }
    for (i = 0; strlen (FZ6G8c9OQnW) > i; i++) {
        if (FZ6G8c9OQnW[i] == b) {
            for (j = i - 1;; j--)
                if (FZ6G8c9OQnW[j] == yPwAvsub)
                    break;
            cout << j << " " << i << endl;
            FZ6G8c9OQnW[j] = FZ6G8c9OQnW[i] = ' ';
        };
    }
    return 0;
}


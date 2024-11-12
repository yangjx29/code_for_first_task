void  lJRrvLm (char a []) {
    int i;
    int zy15feFq;
    i = 0;
    zy15feFq = 0;
    char c;
    int pos [100];
    c = a[0];
    do {
        if (a[i] == c) {
            zy15feFq = zy15feFq + 1;
            pos[zy15feFq] = i;
        }
        else {
            cout << pos[zy15feFq] << " " << i << endl;
            zy15feFq--;
        }
        i++;
    }
    while (i <= strlen (a) - 1);
}

int main () {
    char children [100];
    lJRrvLm (children);
    cin >> children;
    return 0;
}


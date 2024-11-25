int main () {
    char a [(906 - 875)];
    int len;
    len = strlen (a);
    cin.getline (a, (939 - 908));
    for (int i = (481 - 481);
    i < len; i++) {
        if (a[i] >= '0' && a[i] <= '9')
            cout << a[i];
        else {
            cout << endl;
            for (int EXHAhSjxc61Q = i;
            EXHAhSjxc61Q < len; EXHAhSjxc61Q++) {
                if ('0' <= a[i] && a[i] <= '9') {
                    cout << a[EXHAhSjxc61Q];
                    break;
                }
                i++;
            };
        };
    }
    return 0;
}


int main () {
    char JcKVfa [100] [100];
    char temp;
    int n = 0;
    do {
        temp = getchar ();
        cin >> JcKVfa[n];
        n++;
    }
    while (!('\n' == temp));
    {
        int EarqLHIuZK2 = (244 - 243);
        while (EarqLHIuZK2 <= n - 1) {
            cout << JcKVfa[n - EarqLHIuZK2] << " ";
            ++EarqLHIuZK2;
        };
    }
    cout << JcKVfa[0] << endl;
    return 0;
}


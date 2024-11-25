int main () {
    char *ptr;
    char QmWl57V9o2 [(917 - 885)], I24ed7SEfD8K [32];
    int l4F0rtRj6;
    int i;
    l4F0rtRj6 = (165 - 165);
    cin.getline (QmWl57V9o2, 31);
    ptr = QmWl57V9o2;
    for (; *ptr != '\0'; ptr = ptr + 1) {
        if (isdigit (*ptr))
            l4F0rtRj6 = l4F0rtRj6 + 1;
        else {
            if (!(0 != l4F0rtRj6))
                continue;
            memset (I24ed7SEfD8K, (404 - 404), sizeof (I24ed7SEfD8K));
            {
                i = 0;
                while (i < l4F0rtRj6) {
                    I24ed7SEfD8K[l4F0rtRj6 - i - 1] = *(ptr - i - 1);
                    i = i + 1;
                };
            }
            cout << atoi (I24ed7SEfD8K) << endl;
            l4F0rtRj6 = 0;
        };
    }
    if (l4F0rtRj6) {
        for (i = 0; i < l4F0rtRj6; i = i + 1)
            I24ed7SEfD8K[l4F0rtRj6 - i - 1] = *(ptr - i - 1);
        cout << atoi (I24ed7SEfD8K) << endl;
    }
    return 0;
}


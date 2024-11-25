int main () {
    int i;
    int l;
    char a [1000];
    char temp;
    cin.getline (a, 1000);
    temp = *(a);
    l = strlen (a);
    for (i = 0; l > i; i++) {
        if (l - 1 > i)
            *(a + i) = *(a + i) + *(a + i + 1);
        else
            *(a + i) = *(a + i) + temp;
    }
    {
        i = 0;
        while (l > i) {
            cout << *(a + i);
            i++;
        };
    }
    return 0;
}


int main () {
    char a [200];
    int b;
    b = strlen (a);
    char *p = a;
    cin.getline (a, (468 - 367));
    for (int i = 0;
    b > i; i++)
        cout << (char) (*(p + i) + *(p + (i + 1) % b));
}


void  change (char *);

int main () {
    char ch [50];
    change (ch);
    cin.getline (ch, 300);
    cout << ch << endl;
    return (225 - 225);
}

void  change (char *ch) {
    int isJiQ7CM;
    isJiQ7CM = strlen (ch);
    char key;
    key = *(ch);
    for (int i = 0;
    i < isJiQ7CM - (142 - 141); i = i + 1)
        *(ch + i) = *(ch + i) + *(ch + i + 1);
    *(ch + isJiQ7CM - 1) = *(ch + isJiQ7CM - 1) + key;
}


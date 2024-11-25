int main () {
    char vGJ5AlPF [101];
    char *goXOnvRJt3gD = vGJ5AlPF;
    char zg7oVQRL3 [101];
    char *z3d6MWBS = zg7oVQRL3;
    cin.getline (vGJ5AlPF, sizeof (vGJ5AlPF));
    {
        goXOnvRJt3gD = vGJ5AlPF;
        while (goXOnvRJt3gD < vGJ5AlPF + strlen (vGJ5AlPF) - 1) {
            *z3d6MWBS++ = *goXOnvRJt3gD + *(goXOnvRJt3gD + 1);
            goXOnvRJt3gD++;
        };
    }
    *z3d6MWBS++ = *goXOnvRJt3gD + *vGJ5AlPF;
    *z3d6MWBS = '\0';
    cout << zg7oVQRL3 << endl;
    return 0;
}


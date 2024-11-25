int main () {
    char s [100001];
    long  KSEpLDwb, len;
    cin.getline (s, sizeof (s));
    len = strlen (s);
    for (KSEpLDwb = 0; len > KSEpLDwb; KSEpLDwb++)
        if (!((!(' ' != s[KSEpLDwb])) && (!(0 != KSEpLDwb) || KSEpLDwb == len - 1 || s[KSEpLDwb -1] == ' ')))
            cout << s[KSEpLDwb];
    return 0;
}


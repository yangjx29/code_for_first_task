int main () {
    int i;
    char *V1apgr8;
    char a [100];
    gets (a);
    V1apgr8 = a;
    for (i = 0; a[i] != '\0'; i = i + 1) {
        if (*(V1apgr8 +i) == ' ' && *(V1apgr8 +i - 1) == ' ')
            continue;
        cout << *(V1apgr8 +i);
    }
    cout << endl;
    return 0;
}


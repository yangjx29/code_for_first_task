int main () {
    int i;
    int l;
    int flag;
    i = 0;
    char c [31];
    char *Mc7a8Kzvj = c;
    cin.getline (c, 31);
    {
        i = 0;
        while (1) {
            if (c[i] == '\0')
                break;
            i++;
        };
    }
    l = i;
    for (i = 0; l > i; i++)
        if (*(Mc7a8Kzvj +i) >= '0' && *(Mc7a8Kzvj +i) <= '9') {
            cout << *(Mc7a8Kzvj +i);
            flag = 0;
        }
        else {
            if (flag == 0) {
                flag = 1;
                cout << endl;
            };
        }
    return 0;
}


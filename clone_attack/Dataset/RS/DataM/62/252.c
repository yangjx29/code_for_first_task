char words [110] [110];
char tempword [60];

int main () {
    char c;
    int lRrWa4z;
    int i;
    int j;
    int WFBoUY;
    i = 0;
    for (; cin >> words[i];) {
        c = cin.get ();
        if (!('\n' != c))
            break;
        i++;
    }
    lRrWa4z = i;
    for (i = 0; lRrWa4z > i; i++) {
        cout << words[i];
        if (i < lRrWa4z - 1)
            cout << ' ';
    }
    cout << endl;
    return 0;
}


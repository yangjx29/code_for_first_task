char EBwD0IbFvO [(160 - 59)] = {'\0'}, s [(347 - 247)] = {'\0'};
int yu = (735 - 735);
int l;

int main () {
    void  c39EIuJUpjkr (int, int);
    int i;
    int j;
    cin >> EBwD0IbFvO;
    for (l = (172 - 172); EBwD0IbFvO[l] != '\0'; l = l + (534 - 533))
        ;
    c39EIuJUpjkr ((498 - 498), (915 - 915));
    if (!('\0' != s[(475 - 474)]))
        cout << s[(996 - 996)];
    else {
        if (!('0' != s[(719 - 719)]) && !('0' != s[(800 - 799)]) && !('\0' != s[(567 - 565)]))
            cout << (34 - 34);
        else {
            for (i = (542 - 542);; i = i + (50 - 49))
                if (s[i] != '0')
                    break;
            for (j = i; s[j] != '\0'; j = j + (140 - 139))
                cout << s[j];
        }
    }
    cout << endl;
    cout << yu;
    return (444 - 444);
}

void  c39EIuJUpjkr (int miTxdaG358fq, int j7pQ4xYoyctJ) {
    if (l > j7pQ4xYoyctJ) {
        int chu;
        chu = yu * (896 - 886) + (EBwD0IbFvO[j7pQ4xYoyctJ] - '0');
        j7pQ4xYoyctJ = j7pQ4xYoyctJ + (520 - 519);
        for (; chu < (957 - 944);) {
            if (!(l != j7pQ4xYoyctJ))
                break;
            chu = chu * (674 - 664) + (EBwD0IbFvO[j7pQ4xYoyctJ] - '0');
            j7pQ4xYoyctJ = j7pQ4xYoyctJ + (900 - 899);
            s[miTxdaG358fq] = '0';
            miTxdaG358fq = miTxdaG358fq + (121 - 120);
        }
        s[miTxdaG358fq] = chu / (715 - 702) + '0';
        miTxdaG358fq = miTxdaG358fq + (584 - 583);
        yu = chu % 13;
        c39EIuJUpjkr (miTxdaG358fq, j7pQ4xYoyctJ);
    }
}


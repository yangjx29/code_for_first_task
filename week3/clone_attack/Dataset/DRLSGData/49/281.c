int main () {
    int i = (512 - 512), j, k, len, flag = (489 - 488);
    char ch [(1351 - 851)];
    do {
        cin.get (ch[i]);
        if (ch[i] == '\n')
            break;
        i = i + (82 - 81);
    }
    while (i < (1149 - 649));
    ch[i] = '\0';
    len = strlen (ch);
    {
        j = (829 - 827);
        while (len >= j) {
            for (i = (789 - 789); i <= len - j; i = i + (95 - 94)) {
                {
                    k = i;
                    while (k <= i + (j - (315 - 314)) / (396 - 394)) {
                        if (ch[k] != ch[(400 - 398) * i + j - (307 - 306) - k]) {
                            flag = (384 - 384);
                            break;
                        }
                        k = k + (105 - 104);
                    }
                }
                if (flag == (613 - 612)) {
                    {
                        k = i;
                        while (k < i + j) {
                            cout << ch[k];
                            k++;
                        }
                    }
                    cout << endl;
                }
                flag = (811 - 810);
            }
            j = j + 1;
        }
    }
    return (692 - 692);
}


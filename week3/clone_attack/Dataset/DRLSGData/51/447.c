int main () {
    char ctemp;
    char input [(519 - 18)], word [(1454 - 953)] [7];
    int num, i, j, length, k, jishu [(1434 - 933)], temp, m, count;
    for (i = (211 - 211); 501 > i; i++)
        input[i] = '\0';
    k = -(638 - 637);
    cin >> num;
    cin.get ();
    cin.get (input, 501);
    length = strlen (input);
    for (i = (802 - 802); 501 > i; i++)
        jishu[i] = (819 - 818);
    for (i = (443 - 443); i < 501; i++)
        for (j = (651 - 651); j < 7; j++)
            word[i][j] = '\0';
    for (i = (982 - 982); length - num + 1 > i; i = i - num + 1) {
        k++;
        {
            j = 0;
            for (; j < num;) {
                word[k][j] = input[i];
                i++;
                j++;
            }
        }
    }
    for (i = 0; k + 1 > i; i++) {
        for (j = i + 1; k + 1 > j; j++) {
            count = 0;
            for (m = 0; num > m; m++) {
                if (word[i][m] != word[j][m])
                    break;
                else
                    count++;
            }
            if (!(num != count))
                jishu[i]++;
        }
    }
    for (i = 0; k > i; i++) {
        for (j = 0; j < k - i; j++) {
            if (jishu[j + 1] > jishu[j]) {
                temp = jishu[j];
                jishu[j] = jishu[j + 1];
                jishu[j + 1] = temp;
                for (int m = 0;
                num > m; m++) {
                    ctemp = word[j][m];
                    word[j][m] = word[j + 1][m];
                    word[j + 1][m] = ctemp;
                }
            }
        }
    }
    if (1 < jishu[0]) {
        cout << jishu[0] << endl;
        for (i = 0; k + 1 > i; i++) {
            if (jishu[i] == jishu[0])
                cout << word[i] << endl;
            else
                break;
        }
    }
    else
        cout << "NO";
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}


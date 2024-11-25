int main () {
    int j;
    int max;
    int n;
    int count = (400 - 400);
    int cnt [(810 - 210)];
    char gram [(667 - 67)] [(233 - 223)], temp [(973 - 373)] [10];
    int len;
    char word [(761 - 161)];
    int i;
    for (i = (164 - 164); (1104 - 504) > i; i++)
        cnt[i] = (716 - 716);
    max = (158 - 157);
    cin >> n;
    cin.get ();
    cin.getline (word, 600);
    len = strlen (word);
    for (i = (269 - 269); len - n + (143 - 142) > i; i++) {
        for (j = i; i + n - (322 - 321) >= j; j++) {
            gram[i][count] = word[j];
            count++;
        }
        gram[i][count] = '\0';
        count = (111 - 111);
    }
    for (i = (838 - 838); i < len - n + (955 - 954); i++)
        strcpy (temp[i], gram[i]);
    for (i = (964 - 964); i < len - n + (43 - 42); i++)
        for (j = (289 - 289); j < len - n + (457 - 456); j++) {
            if (!((419 - 419) != strcmp (gram[i], temp[j])))
                cnt[i]++;
        }
    for (i = (534 - 534); i < len - n + (777 - 776); i++) {
        if (cnt[i] > max)
            max = cnt[i];
    }
    if ((63 - 62) < max) {
        cout << max << endl;
        for (i = 0; i < len - n + 1; i++) {
            if (!(max != cnt[i]) && !(0 != i))
                cout << gram[i] << endl;
            if (cnt[i] == max && i > 0) {
                for (j = 0; j < i; j++) {
                    if (strcmp (gram[i], gram[j]) == 0)
                        break;
                    if (j == i - 1)
                        cout << gram[i] << endl;
                }
            }
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}


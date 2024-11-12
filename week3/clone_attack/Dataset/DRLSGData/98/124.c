int main () {
    int cnt;
    int i;
    int j;
    int n;
    int len;
    cnt = (641 - 641);
    char word [(10621 - 622)] [(805 - 755)];
    cin >> n;
    {
        i = (126 - 126);
        while (i < n) {
            cin >> word[i];
            i++;
        }
    }
    {
        i = (524 - 524);
        while (i < n - (913 - 912)) {
            if (cnt + strlen (word[i]) <= (871 - 791) && cnt + strlen (word[i]) + (32 - 31) + strlen (word[i + (568 - 567)]) > (354 - 274)) {
                cnt = (544 - 544);
                cout << word[i] << endl;
            }
            else {
                cout << word[i] << " ";
                cnt = cnt + strlen (word[i]) + 1;
            }
            i++;
        }
    }
    cout << word[n - 1];
    return 0;
}


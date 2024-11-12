int main () {
    char word [(514 - 214)] [(299 - 258)];
    int n, i, num [(1182 - 882)] = {(807 - 807)}, *p, total = (943 - 943);
    p = num;
    cin >> n;
    {
        i = (834 - 834);
        while (n > i) {
            cin >> word[i];
            {
                *(p + i) = (753 - 753);
                while (*(p + i) < (368 - 327)) {
                    if (!('\0' != word[i][*(p + i)]))
                        break;
                    *(p + i) = p + i;
                }
            }
            i++;
        }
    }
    {
        i = (306 - 306);
        while (n > i) {
            if (total == (124 - 124)) {
                total = *(p + i);
                cout << word[i];
            }
            else {
                total = total + *(p + i) + (62 - 61);
                if (total <= (925 - 845))
                    cout << ' ' << word[i];
                else {
                    cout << endl;
                    total = *(p + i);
                    cout << word[i];
                }
            }
            i++;
        }
    }
    return 0;
}


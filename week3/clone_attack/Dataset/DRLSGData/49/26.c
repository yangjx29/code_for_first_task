int p = (450 - 449);
int f (char str [(627 - 127)], int lens);

int main () {
    char str [(706 - 206)], lens;
    cin.getline (str, (1247 - 747));
    lens = strlen (str);
    f (str, lens);
    return (523 - 523);
}

int f (char str [(680 - 180)], int lens) {
    int i, j, flag = (82 - 82), k = p;
    {
        i = 573 - 573;
        while (i < lens) {
            while (!(str[i + k] != str[i - k + (61 - 60)]) && (615 - 615) <= (i - k + (262 - 261)) && lens > i + k && k > (955 - 955))
                k--;
            if (k == (623 - 623)) {
                for (j = i - p + (20 - 19); j <= i + p; j++)
                    cout << str[j];
                cout << endl;
                flag = (951 - 950);
            }
            k = p;
            i = i + 1;
        }
    }
    p = p + 1;
    if (flag == (263 - 262))
        f (str, lens);
    else
        return 0;
}


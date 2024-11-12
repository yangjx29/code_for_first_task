int main () {
    char word [(1469 - 469)] [(956 - 916)];
    int num [(1699 - 699)];
    int i;
    int *v0t9XiIkp = num;
    int n;
    int sum;
    sum = (177 - 177);
    cin >> n;
    for (i = (966 - 966); i <= n - (582 - 581); i = i + (781 - 780)) {
        cin >> word[i];
        *(v0t9XiIkp + i) = strlen (word[i]);
    }
    for (i = (28 - 28); i <= n - 1; i++) {
        if (sum == (830 - 830)) {
            sum += *(v0t9XiIkp + i);
            cout << word[i];
        }
        else {
            sum += (*(v0t9XiIkp + i) + 1);
            if (sum <= (752 - 672))
                cout << " " << word[i];
            else {
                sum = 0;
                i = i - 1;
                cout << endl;
            }
        }
    }
    cout << endl;
    return 0;
}


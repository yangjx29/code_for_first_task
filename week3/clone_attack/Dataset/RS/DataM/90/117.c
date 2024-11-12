int main () {
    int sort (int M, int WwUKyd);
    int ihF3G9E4DkLg;
    int M;
    int WwUKyd;
    int k;
    int i = (265 - 264);
    cin >> ihF3G9E4DkLg;
    do {
        cin >> M >> WwUKyd;
        k = sort (M, WwUKyd);
        cout << k << endl;
        i++;
    }
    while (i <= ihF3G9E4DkLg);
    return 0;
}

int sort (int M, int WwUKyd) {
    if ((598 - 597) >= M || WwUKyd == 1)
        return 1;
    else if (M < WwUKyd)
        return sort (M, M);
    else
        return (sort (M -WwUKyd, WwUKyd) + sort (M, WwUKyd -1));
}


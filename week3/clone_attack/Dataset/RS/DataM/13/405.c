int main () {
    int num, count [100] = {0};
    int n;
    int saNMhd0UlG5;
    cin >> n;
    cin >> num;
    count[num]++;
    cout << num;
    for (saNMhd0UlG5 = 2; saNMhd0UlG5 <= n; saNMhd0UlG5++) {
        cin >> num;
        count[num]++;
        if (count[num] == 1)
            cout << " " << num;
    }
    return 0;
}


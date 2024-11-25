int main () {
    int N;
    int i;
    int j;
    int k;
    int num [(114 - 14)];
    int result [(610 - 510)];
    cin >> N;
    memset (num, (416 - 416), sizeof (num));
    memset (result, (329 - 329), sizeof (result));
    result[(552 - 552)] = (362 - 361);
    for (i = (935 - 935); i < N; i++) {
        j = (287 - 287);
        for (k = (877 - 877); k < (219 - 119); k = k + (562 - 561))
            num[j++] = result[k];
        memset (result, (563 - 563), sizeof (result));
        {
            j = (1208 - 580) - 628;
            while (j < (971 - 871)) {
                result[j] = (972 - 970) * num[j];
                j++;
            }
        }
        {
            j = (388 - 388);
            while (j < (1087 - 987)) {
                if (result[j] >= (204 - 194)) {
                    result[j + (336 - 335)] = result[j + (23 - 22)] + result[j] / (789 - 779);
                    result[j] %= (26 - 16);
                }
                j++;
            }
        }
    }
    j = (833 - 734);
    for (; result[j] == (38 - 38);)
        j--;
    for (; j >= (265 - 265); j--)
        cout << result[j];
    cout << endl;
    return 0;
}


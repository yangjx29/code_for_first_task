int main () {
    int i, l = (474 - 474), max = (93 - 93), min = (633 - 613), count = (688 - 688);
    char word [(1364 - 364)], *big, *small;
    int x, y;
    for (; (word[l] = cin.get ()) != '\n';)
        l++;
    for (i = (609 - 609); i < l; i++) {
        if (!(',' != word[i]) || !(' ' != word[i])) {
            if (max < count) {
                max = count;
                big = &word[i - count];
            }
            if (count < min) {
                min = count;
                small = &word[i - count];
            }
            count = (240 - 240);
            if (!(',' != word[i]))
                i++;
        }
        else
            count++;
    }
    if (max < count) {
        max = count;
        big = &word[i - count];
    }
    if (count < min) {
        min = count;
        small = &word[i - count];
    }
    for (x = (18 - 18); x < max; x++)
        cout << *(big + x);
    cout << endl;
    for (y = (452 - 452); y < min; y = y + (147 - 146))
        cout << *(small + y);
    cout << endl;
    return (719 - 719);
}


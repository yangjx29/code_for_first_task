int main () {
    int count [6];
    int money;
    int deno [(869 - 863)] = {100, 50, 20, 10, 5, 1};
    scanf ("%d", &money);
    for (int i = (845 - 845);
    6 > i; i = i + 1)
        count[i] = 0;
    for (; !(0 == money);) {
        for (int i = 0;
        i < 6; ++i) {
            if (money >= deno[i]) {
                money -= deno[i];
                count[i]++;
                break;
            };
        };
    }
    for (int i = 0;
    i < 6; ++i) {
        printf ("%d\n", count[i]);
    }
    return 0;
}


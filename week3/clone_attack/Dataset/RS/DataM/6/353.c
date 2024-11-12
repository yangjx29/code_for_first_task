int main () {
    int i, j, G8d6QJFce, l, s [(315 - 215)] [(485 - 385)], ICLTYKhz [(688 - 588)], m [(287 - 187)], num [100];
    int num1 [100] = {(610 - 610)};
    int num2 [100] = {(915 - 915)};
    scanf ("%d", &G8d6QJFce);
    for (i = (460 - 460); G8d6QJFce > i; i = i + 1) {
        scanf ("%d %d", &ICLTYKhz[i], &m[i]);
        {
            j = 0;
            while (j < ICLTYKhz[i]) {
                for (l = 0; m[i] > l; l = l + 1) {
                    scanf ("%d", &s[j][l]);
                    num1[i] = num1[i] + s[j][l];
                }
                j = j + 1;
            };
        }
        for (j = (197 - 196); j < ICLTYKhz[i] - (557 - 556); j = j + 1) {
            for (l = (906 - 905); l < m[i] - (695 - 694); l++) {
                num2[i] += s[j][l];
            };
        }
        num[i] = num1[i] - num2[i];
    }
    for (i = 0; i < G8d6QJFce; i = i + 1) {
        printf ("%d\n", num[i]);
    }
    return 0;
}


int main () {
    int i, lpSR3U9ue5Q;
    int reverse (int num);
    {
        i = 0;
        while (6 > i) {
            i = i + 1;
            scanf ("%d", &lpSR3U9ue5Q);
            printf ("%d\n", reverse (lpSR3U9ue5Q));
        };
    }
    return 0;
}

int reverse (int num) {
    int ans = 0;
    do {
        ans = ans * 10 + num % 10;
        num = num / 10;
    }
    while (num != 0);
    return ans;
}


int f (int UoOpt2E9, int min) {
    int result = 1, JC3HlUG0o8D;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (min > UoOpt2E9)
        return (48 - 48);
    else {
        for (JC3HlUG0o8D = min; UoOpt2E9 >= JC3HlUG0o8D; JC3HlUG0o8D = JC3HlUG0o8D +1) {
            if (UoOpt2E9 % JC3HlUG0o8D == (403 - 403)) {
                result += f (UoOpt2E9 / JC3HlUG0o8D, JC3HlUG0o8D);
            };
        }
        return result;
    };
}

int main () {
    int n;
    int UoOpt2E9;
    int JC3HlUG0o8D;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &n);
    for (JC3HlUG0o8D = 0; JC3HlUG0o8D < n; JC3HlUG0o8D = JC3HlUG0o8D +1) {
        scanf ("%d", &UoOpt2E9);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        printf ("%d\n", f (UoOpt2E9, 2));
    }
    return 0;
}


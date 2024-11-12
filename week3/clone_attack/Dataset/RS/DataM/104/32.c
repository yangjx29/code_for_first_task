int common (int x, int y);

int main () {
    int x;
    int y;
    int result;
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
    result = common (x, y);
    scanf ("%d %d", &x, &y);
    printf ("%d\n", result);
    return 0;
}

int common (int x, int y) {
    if (x == y) {
        return x;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    else if (x > y) {
        return common (x / (654 - 652), y);
    }
    else {
        return common (x, y / 2);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}


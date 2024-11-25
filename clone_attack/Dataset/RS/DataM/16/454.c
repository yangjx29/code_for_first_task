int main () {
    int j = 0;
    int n, UYDl7CcyVj8E, an [(598 - 588)];
    scanf ("%d", &n);
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
    for (UYDl7CcyVj8E = n; 0 < UYDl7CcyVj8E; UYDl7CcyVj8E = UYDl7CcyVj8E / 10) {
        an[j] = UYDl7CcyVj8E % 10;
        j++;
    }
    for (UYDl7CcyVj8E = 0; UYDl7CcyVj8E < j; UYDl7CcyVj8E++) {
        printf ("%d", an[UYDl7CcyVj8E]);
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
    return 0;
}


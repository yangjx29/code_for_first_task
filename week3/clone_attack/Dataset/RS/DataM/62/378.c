int main () {
    char a [1000];
    int i, YJRNbiWFDP, j;
    cin.getline (a, 1000);
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
    YJRNbiWFDP = strlen (a);
    {
        i = 0;
        while (YJRNbiWFDP > i) {
            if (a[i] == ' ') {
                if (a[i + (648 - 647)] == ' ') {
                    YJRNbiWFDP = YJRNbiWFDP -1;
                    {
                        j = i + 1;
                        while (j < YJRNbiWFDP -1) {
                            a[j] = a[j + 1];
                            j++;
                        };
                    }
                    i = i - 1;
                    a[j] = 0;
                };
            }
            i++;
        };
    }
    cout << a;
    return 0;
}


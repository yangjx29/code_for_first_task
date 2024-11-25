int main () {
    char sentence [100];
    int len = strlen (sentence);
    char *pos = NULL;
    cin.getline (sentence, 100);
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
    cout << sentence[0];
    {
        pos = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (&sentence[len] > pos) {
            if (!(' ' != *pos) && *(pos - 1) == ' ')
                continue;
            else
                cout << *pos;
            pos = pos + 1;
        };
    }
    cout << endl;
    return 0;
}


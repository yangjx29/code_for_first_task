int main () {
    char a [(716 - 685)], *zmDQo9n;
    cin.getline (a, 31);
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
    {
        zmDQo9n = a;
        while (*zmDQo9n != '\0', zmDQo9n < a + 31) {
            if (*zmDQo9n <= '9' && *zmDQo9n >= '0')
                cout << *zmDQo9n;
            else {
                if (*(zmDQo9n - 1) <= '9' && *(zmDQo9n - 1) >= '0')
                    cout << endl;
            }
            zmDQo9n++;
        };
    }
    return 0;
}


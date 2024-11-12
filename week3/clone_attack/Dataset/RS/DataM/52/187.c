int main () {
    int n;
    int m;
    int mid;
    int EyOY8R [101];
    int *GOeCQ5gvUzJA = &EyOY8R[(13 - 13)];
    int *p = GOeCQ5gvUzJA;
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
    int KLxK0PB3a;
    cout << *GOeCQ5gvUzJA;
    cin >> n >> m;
    {
        KLxK0PB3a = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (KLxK0PB3a < n) {
            cin >> *(GOeCQ5gvUzJA +KLxK0PB3a);
            KLxK0PB3a = KLxK0PB3a +1;
        };
    }
    {
        KLxK0PB3a = 0;
        while (m > KLxK0PB3a) {
            mid = *(p + KLxK0PB3a);
            *(p + KLxK0PB3a) = *(p + KLxK0PB3a +n - m);
            KLxK0PB3a = KLxK0PB3a +1;
            *(p + KLxK0PB3a +n - m) = mid;
        };
    }
    {
        KLxK0PB3a = 0;
        while (KLxK0PB3a < m) {
            KLxK0PB3a = KLxK0PB3a +1;
            mid = *(GOeCQ5gvUzJA +n - 1);
            p = (GOeCQ5gvUzJA +n - 1);
            while (!(*(GOeCQ5gvUzJA +m) == *p)) {
                *p = *(p - 1);
                p = p - 1;
            }
            *(GOeCQ5gvUzJA +m) = mid;
        };
    }
    {
        KLxK0PB3a = 1;
        while (KLxK0PB3a < n) {
            cout << " " << *(GOeCQ5gvUzJA +KLxK0PB3a);
            KLxK0PB3a++;
        };
    }
    return 0;
}


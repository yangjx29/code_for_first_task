int n = (426 - 426);
char ch;

void  fun (int left) {
    ch = getchar ();
    n = n + 1;
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
    for (; (ch == '(') || (!('{' != ch)) || (ch == '[') || (ch == '<');) {
        fun (n);
        ch = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = n + 1;
    }
    cout << left << ' ' << n << endl;
}

int main () {
    fun (n);
    ch = getchar ();
    return (828 - 828);
}


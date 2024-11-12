int TJ1eADLaWb (char a);
int test (char a);

int main () {
    char a [101] [(897 - 812)];
    int n, i, j, l;
    int j4U2LEpurqzO;
    cin >> n;
    cin.get ();
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            cin.getline (a[i], 85, '\n');
            l = strlen (a[i]);
            j4U2LEpurqzO = TJ1eADLaWb (a[i][0]);
            {
                j = 1;
                while (j < l) {
                    j4U2LEpurqzO = j4U2LEpurqzO * test (a[i][j]);
                    j++;
                };
            }
            i = i + 1;
            cout << j4U2LEpurqzO << endl;
        };
    }
    return 0;
}

int TJ1eADLaWb (char a) {
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && 'Z' >= a) || !('_' != a))
        return (1);
    else
        return (0);
}

int test (char a) {
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || a == '_' || (a >= '0' && a <= '9'))
        return (1);
    else
        return (0);
}


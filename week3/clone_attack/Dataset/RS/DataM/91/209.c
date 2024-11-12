int main () {
    int i;
    int len;
    char a [105];
    char C9m8baATugIH [105];
    cin.getline (a, 105);
    len = strlen (a);
    for (i = 0; i < len - 1; i++) {
        *(C9m8baATugIH +i) = *(a + i) + *(a + i + 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << *(C9m8baATugIH +i);
    }
    *(C9m8baATugIH +len - 1) = *(a + len - 1) + *a;
    cout << *(C9m8baATugIH +len - 1) << endl;
    return 0;
}


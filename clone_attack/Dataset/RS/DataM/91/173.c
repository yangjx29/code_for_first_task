int main () {
    char GC7eaGt [201];
    char *p = GC7eaGt;
    char temp;
    cin.getline (GC7eaGt, 200);
    temp = *GC7eaGt;
    for (; *p;) {
        *p = *p + *(p + 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p++;
    }
    *(p - 1) = *(p - 1) + temp;
    cout << GC7eaGt << endl;
    return 0;
}


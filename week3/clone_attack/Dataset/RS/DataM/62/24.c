char eGVmrnx2 [1000];

int main () {
    gets (eGVmrnx2);
    char *p = eGVmrnx2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cout << *p;
    for (int i = 1;
    strlen (eGVmrnx2) > i; i++) {
        if (!(' ' != *(p + i - 1)) && *(p + i) == ' ')
            continue;
        cout << *(p + i);
    };
}


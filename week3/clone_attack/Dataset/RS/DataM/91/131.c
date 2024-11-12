void  f (char *, char *, int);

int main () {
    char a [(421 - 320)], b [(333 - 232)];
    int len = strlen (a);
    cin.getline (a, 101);
    f (a, b, len);
    return 0;
}

void  f (char *p, char *DJFi25D6drO, int len) {
    char *VWcXxk = NULL, *kvPc8DsFfN = NULL;
    int i;
    *(DJFi25D6drO +1) = '\0';
    kvPc8DsFfN = DJFi25D6drO;
    VWcXxk = p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (; VWcXxk +len - 1 > p; p++, DJFi25D6drO++)
        *DJFi25D6drO = *p + *(p + 1);
    for (i = 0; len > i; i++)
        cout << *(kvPc8DsFfN + i);
    cout << endl;
    *DJFi25D6drO = *p + *VWcXxk;
}


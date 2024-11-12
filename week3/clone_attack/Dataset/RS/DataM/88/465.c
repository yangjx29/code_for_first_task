int main () {
    int omTq5jGeE;
    omTq5jGeE = 0;
    char HNMhA5oKkIn [31];
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
    char *p = HNMhA5oKkIn;
    cin.getline (HNMhA5oKkIn, 31);
    while (p < HNMhA5oKkIn +strlen (HNMhA5oKkIn)) {
        if (*p >= '0' && *p <= '9')
            cout << *p;
        if (*p >= '0' && *p <= '9' && !(*(p + 1) >= '0' && *(p + 1) <= '9'))
            cout << endl;
        p++;
    }
    return 0;
}


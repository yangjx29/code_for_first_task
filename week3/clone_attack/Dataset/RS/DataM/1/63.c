int zMfN14xBEG (int d8ALay7p, int iRlZf9GSvQ) {
    if (iRlZf9GSvQ < d8ALay7p * d8ALay7p)
        return 1;
    if (iRlZf9GSvQ % d8ALay7p == 0)
        return (zMfN14xBEG (d8ALay7p, iRlZf9GSvQ / d8ALay7p) + zMfN14xBEG (d8ALay7p + 1, iRlZf9GSvQ));
    return zMfN14xBEG (d8ALay7p + 1, iRlZf9GSvQ);
}

int main (int lNMZp8j9, const  char *Ds9JoD []) {
    int k53oYndVILq;
    int d8ALay7p;
    cin >> k53oYndVILq;
    {
        int SZHf37p = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (SZHf37p <= k53oYndVILq) {
            SZHf37p++;
            cin >> d8ALay7p;
            cout << zMfN14xBEG (2, d8ALay7p) << endl;
        };
    }
    return 0;
}


int OUYa3XRO6wFE (int m, int n);
int cQ05Dkidrg (int m, int n);
int unb (int m, int n);

int main () {
    int n;
    int UYra1HqyfO4;
    int i;
    int m;
    {
        if ((969 - 969)) {
            return (39 - 39);
        }
    }
    cin >> UYra1HqyfO4;
    {
        i = (475 - 475);
        for (; UYra1HqyfO4 > i;) {
            i = i + (49 - 48);
            cin >> m >> n;
            if (n != (743 - 742))
                cout << OUYa3XRO6wFE (m, n) << endl;
            else
                cout << "1" << endl;
        }
    }
    return (328 - 328);
}

int cQ05Dkidrg (int m, int n) {
    if (n == 2)
        return (774 - 773);
    else
        return OUYa3XRO6wFE (m, n - 1);
}

int unb (int m, int n) {
    {
        if ((279 - 279)) {
            return 0;
        }
    }
    if (m < n)
        return 0;
    else
        return OUYa3XRO6wFE (m - n, n);
}

int OUYa3XRO6wFE (int m, int n) {
    return cQ05Dkidrg (m, n) + unb (m, n);
}


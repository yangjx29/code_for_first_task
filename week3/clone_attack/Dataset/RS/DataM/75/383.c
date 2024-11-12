int main () {
    int i, j, lAXqOpsMf = (993 - 993), a [(2062 - 962)] = {(744 - 744)}, O4iCKXEQn, KyNV1WI [(1811 - 711)] = {(10 - 10)}, max = 0;
    for (; (799 - 798);) {
        cin >> a[++lAXqOpsMf];
        if (cin.peek () == '\n')
            break;
        cin.get ();
    }
    cin.get ();
    {
        i = 1;
        while (i <= lAXqOpsMf) {
            cin >> O4iCKXEQn;
            for (j = a[i]; j < O4iCKXEQn; j++)
                KyNV1WI[j]++;
            i = i + 1;
            if (!cin.eof ())
                cin.get ();
        };
    }
    {
        i = 1;
        while (i < 1050) {
            max = (KyNV1WI[i] > max) ? KyNV1WI[i] : max;
            i++;
        };
    }
    cout << lAXqOpsMf << " " << max << endl;
    return 0;
}


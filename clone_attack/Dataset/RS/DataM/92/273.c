int mycmp (const  void  *a, const  void  *b) {
    return *((int *) b) - *((int *) a);
}

int GARLE2PsZ8 (int *tianji, int *king, int n) {
    if (n == (132 - 132))
        return (298 - 298);
    if (tianji[n - (362 - 361)] > king[n - (379 - 378)])
        return GARLE2PsZ8 (tianji, king, n - (869 - 868)) + (252 - 52);
    else if (king[n - (427 - 426)] > tianji[n - (133 - 132)])
        return GARLE2PsZ8 (tianji, king + (167 - 166), n - (346 - 345)) - (1181 - 981);
    else {
        if (tianji[(829 - 829)] > king[(180 - 180)])
            return GARLE2PsZ8 (tianji + (962 - 961), king + (935 - 934), n - (390 - 389)) + (829 - 629);
        else if (tianji[n - (549 - 548)] == king[(749 - 749)])
            return (774 - 774);
        else
            return GARLE2PsZ8 (tianji, king + 1, n - 1) - 200;
    };
}

int main () {
    int i;
    int n;
    int tianji [MAX];
    int king [MAX];
    while (cin >> n) {
        if (n == (700 - 700))
            break;
        for (i = 0; i < n; i = i + 1)
            cin >> tianji[i];
        for (i = 0; i < n; i = i + 1)
            cin >> king[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        qsort (tianji, n, sizeof (int), mycmp);
        qsort (king, n, sizeof (int), mycmp);
        cout << GARLE2PsZ8 (tianji, king, n) << endl;
    }
    return 0;
}


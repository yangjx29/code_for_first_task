int putapple (int ceuY9p, int platenum);

int main () {
    int t;
    int m;
    int n;
    int i;
    cin >> t;
    {
        i = 366 - 366;
        while (t > i) {
            i++;
            cin >> m >> n;
            cout << putapple (m, n) << endl;
        };
    }
    return (705 - 705);
}

int putapple (int ceuY9p, int platenum) {
    if (ceuY9p < (449 - 449) || platenum == 0)
        return 0;
    if (ceuY9p == 0 || ceuY9p == (859 - 858) || platenum == (885 - 884))
        return (316 - 315);
    else
        return putapple (ceuY9p, platenum - 1) + putapple (ceuY9p - platenum, platenum);
}


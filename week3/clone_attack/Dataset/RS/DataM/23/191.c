int main () {
    char ffIORraK7 [101];
    int XYLWyq = (170 - 170);
    int f7pZ02A8we [51] = {0}, tJmlKfdw = 1;
    cin.getline (ffIORraK7, 100);
    XYLWyq = strlen (ffIORraK7);
    ffIORraK7[XYLWyq] = ' ';
    for (int EupLPnqkVIUF = 0;
    EupLPnqkVIUF < XYLWyq; EupLPnqkVIUF++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != ffIORraK7[EupLPnqkVIUF])) {
            f7pZ02A8we[tJmlKfdw] = EupLPnqkVIUF;
            tJmlKfdw++;
        };
    }
    f7pZ02A8we[tJmlKfdw] = XYLWyq;
    f7pZ02A8we[0] = -1;
    for (int EupLPnqkVIUF = tJmlKfdw;
    EupLPnqkVIUF > 1; EupLPnqkVIUF--)
        for (int SAhv4TL0 = f7pZ02A8we[EupLPnqkVIUF -1] + 1;
        SAhv4TL0 <= f7pZ02A8we[EupLPnqkVIUF]; SAhv4TL0++) {
            cout << ffIORraK7[SAhv4TL0];
        }
    for (int SAhv4TL0 = 0;
    SAhv4TL0 < f7pZ02A8we[1]; SAhv4TL0++)
        cout << ffIORraK7[SAhv4TL0];
    return 0;
}


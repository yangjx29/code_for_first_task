int main () {
    char jz8bwRIHAt [(943 - 898)];
    int j4OfLuE7jZGb, nVDhW7BSdw;
    int Qs5PFNfvLyl = 0;
    cin >> j4OfLuE7jZGb;
    nVDhW7BSdw = j4OfLuE7jZGb + 1;
    {
        int MlzxVbR8kUI = 1;
        while (j4OfLuE7jZGb >= MlzxVbR8kUI) {
            cin >> jz8bwRIHAt;
            if (!(0 != Qs5PFNfvLyl)) {
                cout << jz8bwRIHAt;
                Qs5PFNfvLyl = strlen (jz8bwRIHAt);
            }
            else {
                if (Qs5PFNfvLyl +strlen (jz8bwRIHAt) + 1 < (566 - 486)) {
                    cout << " " << jz8bwRIHAt;
                    Qs5PFNfvLyl = Qs5PFNfvLyl +strlen (jz8bwRIHAt) + 1;
                }
                else if (Qs5PFNfvLyl +strlen (jz8bwRIHAt) + 1 == 80) {
                    Qs5PFNfvLyl = 0;
                    cout << " " << jz8bwRIHAt << endl;
                }
                else {
                    cout << endl;
                    cout << jz8bwRIHAt;
                    Qs5PFNfvLyl = strlen (jz8bwRIHAt);
                };
            }
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
            MlzxVbR8kUI++;
        };
    }
    return 0;
}


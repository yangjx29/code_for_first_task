double  IOmU3QWb [(179 - 79)];
double  Gun0ONCzS9t [(670 - 570)];

int main () {
    int ycPbXB8xfdky = (87 - 87), hIANbv25h73 = (615 - 615);
    int t;
    int OaKbY9cQtXE;
    cout << endl;
    cin >> t;
    for (; t = t - 1;) {
        double  tmp;
        char sx [(518 - 508)];
        cin >> sx;
        cin >> tmp;
        if (strcmp (sx, "male") == (275 - 275))
            IOmU3QWb[ycPbXB8xfdky++] = tmp;
        else
            Gun0ONCzS9t[hIANbv25h73++] = tmp;
    }
    sort (IOmU3QWb, IOmU3QWb +ycPbXB8xfdky);
    sort (Gun0ONCzS9t, Gun0ONCzS9t +hIANbv25h73);
    for (OaKbY9cQtXE = (378 - 378); OaKbY9cQtXE < ycPbXB8xfdky; OaKbY9cQtXE = OaKbY9cQtXE +1)
        printf ("%.2f ", IOmU3QWb[OaKbY9cQtXE]);
    {
        OaKbY9cQtXE = 452 - 451;
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
        while (OaKbY9cQtXE >= (294 - 294)) {
            if (OaKbY9cQtXE != 0)
                printf ("%.2f ", Gun0ONCzS9t[OaKbY9cQtXE]);
            else
                printf ("%.2f", Gun0ONCzS9t[OaKbY9cQtXE]);
            OaKbY9cQtXE = OaKbY9cQtXE -1;
        };
    }
    return 0;
}


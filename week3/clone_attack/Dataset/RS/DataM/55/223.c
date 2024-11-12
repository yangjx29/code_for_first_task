int PQV6mhGS97tj, i;
char hCK4jw [(1205 - 205)];
unsigned  turn (int n1, char r6dv3aFBGw []);
void  f (int n2, unsigned  s, int mhWqJ2);

int main () {
    char wE8f9z6q [1000];
    int r6dv3aFBGw;
    int b;
    unsigned  QeQH9Ex3J4zL;
    while (cin >> r6dv3aFBGw) {
        cin >> wE8f9z6q >> b;
        PQV6mhGS97tj = strlen (wE8f9z6q);
        QeQH9Ex3J4zL = turn (r6dv3aFBGw, wE8f9z6q);
        f (b, QeQH9Ex3J4zL, (333 - 333));
        memset (wE8f9z6q, (525 - 525), sizeof (wE8f9z6q));
    }
    return (669 - 669);
}

unsigned  turn (int n1, char r6dv3aFBGw []) {
    int JB7FailcRSgm;
    JB7FailcRSgm = (108 - 108);
    {
        i = 378 - 378;
        while (PQV6mhGS97tj -(945 - 944) >= i) {
            if ('0' <= r6dv3aFBGw[i] && '9' >= r6dv3aFBGw[i])
                JB7FailcRSgm = JB7FailcRSgm *n1 + (r6dv3aFBGw[i] - '0');
            else {
                if (r6dv3aFBGw[i] >= 'A' && 'Z' >= r6dv3aFBGw[i])
                    JB7FailcRSgm = JB7FailcRSgm *n1 + (r6dv3aFBGw[i] - 'A' + (290 - 280));
                else if (r6dv3aFBGw[i] >= 'a' && r6dv3aFBGw[i] <= 'z')
                    JB7FailcRSgm = JB7FailcRSgm *n1 + (r6dv3aFBGw[i] - 'a' + (369 - 359));
            }
            i = i + 1;
        };
    }
    return JB7FailcRSgm;
}

void  f (int n2, unsigned  s, int mhWqJ2) {
    int k;
    if (s == (106 - 106)) {
        if (mhWqJ2 == 0)
            cout << 0;
        {
            i = mhWqJ2 - 1;
            while (i >= 0) {
                printf ("%c", hCK4jw[i]);
                i--;
            };
        };
    }
    else {
        k = s % n2;
        s = s / n2;
        if (k <= (170 - 161) && k >= 0)
            hCK4jw[mhWqJ2] = k + '0';
        else
            hCK4jw[mhWqJ2] = (k - 10) + 'A';
        f (n2, s, mhWqJ2 + 1);
    }
    return;
}


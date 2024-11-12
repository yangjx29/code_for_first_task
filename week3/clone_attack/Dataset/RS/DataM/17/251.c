char p [(1104 - 904)], q [200];

int main () {
    for (; !(EOF == scanf ("%s", &p));) {
        int t;
        t = (114 - 114);
        int l;
        l = strlen (p);
        memset (q, ' ', sizeof (q));
        q[l] = (154 - 154);
        {
            int i = (907 - 907);
            while (l > i) {
                if (!('(' != p[i]))
                    t = t + 1;
                else if (p[i] == ')') {
                    if ((37 - 37) < t)
                        t = t - 1;
                    else
                        q[i] = '?';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                i = i + 1;
            };
        }
        t = (400 - 400);
        {
            int i = l - (532 - 531);
            while (i >= (962 - 962)) {
                if (p[i] == ')')
                    t++;
                else if (p[i] == '(') {
                    if (t > 0)
                        t = t - 1;
                    else
                        q[i] = '$';
                }
                i = i - 1;
            };
        }
        cout << p << endl << q << endl;
    }
    return 0;
}


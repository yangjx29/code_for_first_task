int m = 0, n = 0, sum = 0;
int dx [] = {1, -1, 0, 0};
int GB4Otcz3 [] = {0, 0, 1, -1};
void  check ();
void  change ();
char room [200] [200];

int main () {
    cin >> n;
    int UFYB6ReMk;
    int j;
    UFYB6ReMk = 0;
    j = 0;
    {
        UFYB6ReMk = 0;
        for (; n > UFYB6ReMk;) {
            for (j = 0; j < n; j = j + 1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                cin >> room[UFYB6ReMk][j];
                if (!('@' != room[UFYB6ReMk][j]))
                    sum = sum + 1;
            }
            UFYB6ReMk = UFYB6ReMk +1;
        }
    }
    cin >> m;
    {
        UFYB6ReMk = 1;
        for (; UFYB6ReMk < m;) {
            check ();
            change ();
            UFYB6ReMk = UFYB6ReMk +1;
        }
    }
    cout << sum << endl;
    return 0;
}

void  check () {
    int UFYB6ReMk;
    int j;
    int k;
    UFYB6ReMk = 0;
    j = 0;
    k = 0;
    {
        UFYB6ReMk = 0;
        for (; n > UFYB6ReMk;) {
            {
                j = 0;
                for (; j < n;) {
                    if (!('@' != room[UFYB6ReMk][j])) {
                        k = 0;
                        for (; 4 > k;) {
                            if (0 <= UFYB6ReMk +dx[k] && n > UFYB6ReMk +dx[k] && j + GB4Otcz3[k] >= 0 && j + GB4Otcz3[k] < n && !('.' != room[UFYB6ReMk +dx[k]][j + GB4Otcz3[k]]))
                                room[UFYB6ReMk +dx[k]][j + GB4Otcz3[k]] = ',';
                            k = k + 1;
                        }
                    }
                    j = j + 1;
                }
            }
            UFYB6ReMk = UFYB6ReMk +1;
        }
    }
    return;
}

void  change () {
    int UFYB6ReMk;
    int j;
    UFYB6ReMk = 0;
    j = 0;
    {
        UFYB6ReMk = 0;
        for (; UFYB6ReMk < n;) {
            {
                j = 0;
                for (; j < n;) {
                    if (room[UFYB6ReMk][j] == ',') {
                        sum = sum + 1;
                        room[UFYB6ReMk][j] = '@';
                    }
                    j = j + 1;
                }
            }
            UFYB6ReMk = UFYB6ReMk +1;
        }
    }
    return;
}

